/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 ^= (-((((arr_4 [i_0 + 2] [5] [i_1]) > (arr_4 [i_0 - 1] [12] [14])))));
                var_21 = ((+((var_18 ? (arr_1 [i_0] [i_0 + 2]) : -var_6))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_22 = var_17;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_23 = ((!(~var_16)));
                                var_24 = ((!(arr_0 [i_2])));
                                arr_24 [i_2] [i_2] [i_2] [3] [6] = ((((arr_4 [i_6] [i_5] [i_4]) << (arr_4 [i_6] [i_5] [i_4]))));
                                arr_25 [i_2] [i_3] [i_4] [i_5] [9] = var_12;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_31 [i_2] [i_3] [i_4] [i_3] [i_8] [i_7] [i_7] = var_6;
                                arr_32 [i_7] = (((var_15 ? (arr_11 [i_3] [i_3]) : var_16)) % var_19);
                                arr_33 [i_8] [i_7] [1] = var_15;
                                arr_34 [i_2] [i_3] [i_4] [i_7] [i_4] [i_3] [i_4] = ((!((13965209821163536189 >= (arr_22 [i_2] [i_3] [i_7] [i_3] [i_7] [4])))));
                            }
                        }
                    }
                    var_25 = (min((arr_12 [i_2] [i_3] [i_4]), ((((var_5 & var_0) < (!var_16))))));
                }
            }
        }
    }
    var_26 -= (((((var_11 ? 240479895 : var_10))) ^ (((3 % 1394512897) << (((240479895 + var_2) - 240480099))))));
    #pragma endscop
}
