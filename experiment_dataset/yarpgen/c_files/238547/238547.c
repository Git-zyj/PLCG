/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, 1));

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 10;i_4 += 1)
                            {
                                arr_14 [i_1] [i_1] = 810821798826089707;
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [1] [i_1] = 3573978452919705151;
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] = ((7 ? 3072 : 4294967289));
                                var_13 = var_1;
                                arr_17 [i_1] [i_4] = 6958838885810767114;
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_14 = (max(var_14, (((((((arr_3 [i_2]) ? -46 : 16903616459996759882))) ? ((-660814785 ? (arr_3 [8]) : var_9)) : (((var_2 ? (arr_3 [i_1]) : 1))))))));
                                arr_20 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [6] = (max(((-30166 ? ((1 ? (arr_3 [i_2]) : 3134566003)) : 0)), (+-54)));
                                var_15 = (max(var_15, ((((((((((arr_9 [i_5] [11] [i_2] [i_0]) ? 4238 : (arr_4 [i_2])))) ? var_1 : ((8 ? 0 : (arr_7 [i_5] [i_3] [i_1])))))) ? (((((((arr_4 [i_0]) ? 30165 : 0))) ? var_8 : (max((arr_13 [i_0]), 336392596))))) : ((((max(3222563721, var_2))) ? ((max(-660814785, -128))) : (arr_5 [i_2] [0]))))))));
                                arr_21 [i_0] [i_1] [i_2] [i_2] [11] [i_1] = (45007 % 1);
                                arr_22 [i_0] [i_1] [i_1] [i_3] [i_5] = var_0;
                            }
                            for (int i_6 = 1; i_6 < 10;i_6 += 1)
                            {
                                var_16 ^= var_1;
                                arr_25 [i_0] [i_1] [i_2] [i_3] [i_1] = ((((1960442799 ? 4294967295 : 1285)) - ((-24060 ? (((max(24060, (arr_4 [i_0]))))) : ((-(arr_12 [i_0] [i_0] [i_2] [i_3] [i_3])))))));
                                var_17 = (max(var_17, 0));
                                arr_26 [i_1] [i_1] = ((~((~(arr_7 [i_6 + 1] [i_6 + 2] [i_6 - 1])))));
                            }
                            var_18 -= ((~(!130)));
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2] = (((((var_6 || ((min((arr_11 [i_0] [i_1] [i_2] [i_3]), -1)))))) * (min((((arr_2 [i_0] [i_2]) ? 0 : 35997)), ((1371491113 ? 131071 : 24059))))));
                        }
                    }
                }
                var_19 = arr_5 [i_0] [i_1];
            }
        }
    }
    var_20 = (var_6 ? (var_4 >= 1302270758271430316) : var_11);
    var_21 = (max(var_5, ((131071 ? var_4 : 7))));
    var_22 ^= (min((30057 & 5), (max(4294967274, 360))));
    #pragma endscop
}
