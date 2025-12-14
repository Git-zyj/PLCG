/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_11 * 23417);
    var_16 ^= var_7;
    var_17 = (min(var_17, ((min((((~((var_12 ? 1 : var_5))))), (((var_4 | 1) | (~var_0))))))));
    var_18 = 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = (((arr_5 [i_0] [i_1 + 2] [i_2]) ? ((((min(var_10, 99))))) : (arr_4 [i_2])));
                    var_20 = (~var_11);

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_21 ^= ((-157 == (arr_4 [i_0])));
                        arr_14 [i_0] [i_1 + 1] [i_2] [i_2] = 2336;
                        arr_15 [i_0] [7] [7] [i_2] = (min((((((99 ? var_11 : (arr_7 [i_0] [i_2] [i_2])))) ? var_14 : (min(var_6, var_1)))), (var_8 > -var_14)));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_22 ^= (((arr_1 [i_2] [5]) ? 4509553785369743518 : ((-(arr_2 [i_2] [i_2])))));
                            arr_19 [i_0] [i_1] [i_2] [i_0] [i_2] = (4294967283 != var_12);
                            var_23 ^= ((+(((~var_0) ? (arr_12 [i_0] [i_1] [i_1] [i_0] [i_4]) : var_2))));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_24 = (arr_21 [i_3] [i_3] [5] [i_3] [i_3]);
                            var_25 = (max(var_25, ((min((min((arr_4 [i_0]), (arr_22 [i_0] [9] [i_2] [i_3] [0] [i_0] [i_0]))), (((17498 ? 1362736898 : 1))))))));
                            var_26 ^= (min(var_6, (min(-31505, 2681684364))));
                        }
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        var_27 = (arr_0 [i_1 - 1]);
                        var_28 = (((arr_23 [i_2] [i_1 + 2]) < (arr_23 [i_2] [i_1 + 2])));
                        var_29 = (((((~(arr_11 [i_0] [i_1 - 1] [i_2] [i_2])))) || 1));
                        arr_25 [i_0] [i_2] [i_2] [i_6] = 1;
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        var_30 ^= (min(1, 13588833856443038202));
                        arr_29 [i_2] [i_1] [i_1] [i_2] = (min(((((arr_11 [i_1 + 2] [i_1] [i_1] [i_1 - 2]) && (arr_11 [i_1 - 1] [5] [i_1 - 2] [i_1 - 1])))), (arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 2])));
                        arr_30 [i_0] [i_2] = (((min((arr_10 [i_0] [i_1 + 2] [i_1]), ((-(arr_28 [i_0] [i_0] [i_0] [i_0])))))) | (((((arr_9 [i_2] [i_1] [i_2]) | (arr_16 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1]))) & (((1 << (var_8 - 1565848919)))))));
                        arr_31 [i_0] [i_2] [12] [i_0] = (min(1, 156));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_1] [i_0] [i_2] [i_8] [i_2] = (var_0 ^ var_11);
                        arr_35 [i_2] [i_1] [i_2] = ((+((99 ? (arr_13 [i_2]) : var_5))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
