/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))) ? (min((arr_3 [i_0]), (arr_0 [i_0] [i_0]))) : ((var_9 << (((arr_0 [i_0] [i_0]) - 2626370668))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_12 += (min(((((arr_8 [i_0] [i_1] [i_2 + 1] [i_3] [i_3]) <= (arr_8 [i_0] [i_0] [i_2 + 1] [i_3] [i_3])))), ((var_5 ? (arr_8 [i_0] [i_1] [i_2 + 1] [i_3] [i_3]) : (arr_8 [i_0] [i_0] [i_2 + 1] [9] [i_3])))));

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            arr_13 [i_4] [i_1] [i_1] [i_3] [i_4 - 1] = (arr_9 [i_0] [i_1] [3] [i_3]);
                            var_13 = (((((arr_6 [i_4 - 1] [i_2 + 2] [i_2]) ^ (arr_6 [i_4 - 1] [i_2 - 1] [12]))) >= (min((arr_6 [i_4 - 1] [i_2 - 1] [i_2 - 3]), (arr_6 [i_4 - 1] [i_2 + 2] [i_2])))));
                            arr_14 [i_0] [i_1] [i_2 - 1] [i_0] [i_1] [i_3] [i_4 - 1] &= arr_8 [i_0] [i_0] [i_2] [i_2] [i_4 - 1];
                            var_14 = (min(((((((-(arr_11 [i_3])))) / var_1))), (min((arr_7 [i_4 - 1] [i_2 - 1] [8] [i_3]), ((max(var_7, var_9)))))));
                            var_15 = (((arr_5 [i_2] [i_2] [i_4 - 1]) + (arr_5 [i_2] [i_2] [i_4 - 1])));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-10377 % (arr_5 [i_0] [i_1] [i_2 + 2])));
                            arr_18 [i_5] [i_5] [i_5] [i_5] [i_5] &= 1745353605;
                            arr_19 [i_0] [i_1] [i_2 - 2] [i_2 - 2] [i_5] = ((((min(var_7, var_6))) ? ((var_7 ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_2 + 2] [i_3]))) : (arr_3 [i_3])));
                        }
                        var_16 += ((var_3 < (!var_7)));
                    }
                }
            }
        }
        arr_20 [i_0] = ((((min(var_5, var_2))) ? ((-(arr_1 [i_0]))) : var_2));
    }
    #pragma endscop
}
