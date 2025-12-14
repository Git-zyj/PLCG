/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((~((-(!var_10)))));
                var_12 = arr_2 [i_0] [i_1];
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_13 = ((var_0 || (arr_7 [i_2])));
        var_14 = ((var_0 | (max(var_3, (arr_6 [i_2] [i_2])))));
    }
    for (int i_3 = 4; i_3 < 22;i_3 += 1)
    {
        arr_12 [i_3] = 106;
        var_15 = (((((((arr_8 [i_3]) || 2311206466)) && (((var_8 ? var_0 : var_9))))) || -2048));
        arr_13 [6] &= (((((max((arr_9 [20]), (arr_8 [i_3])))) ? (((-(arr_10 [i_3])))) : (arr_9 [4]))));
        var_16 -= 69;
        arr_14 [i_3] = (min((((arr_8 [i_3 - 4]) & var_9)), ((((((1983760812 ? -112 : -12195))) ? ((max(-5554, -84))) : ((4 ? var_2 : var_10)))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_17 = (min(var_17, var_3));
                            var_18 += ((-(arr_22 [i_8 + 2] [i_8 + 2] [i_6 + 1])));
                            var_19 = -var_3;
                        }
                    }
                }
            }
            arr_30 [i_4] [i_4] = ((var_1 > (arr_24 [i_4] [i_4] [i_4] [14])));
            arr_31 [13] [13] = (arr_23 [i_4] [i_5] [9] [i_5]);
        }
        arr_32 [i_4] = (4294967295 > 3198463539);
        var_20 = (min(var_20, (arr_27 [i_4] [2] [2] [i_4] [i_4] [i_4] [i_4])));
    }
    var_21 &= ((((((min(var_7, var_6))) ? (min(32741, var_5)) : var_0))) ? var_3 : 1983760829);
    var_22 &= ((var_9 ? var_7 : (min(var_5, -var_1))));
    #pragma endscop
}
