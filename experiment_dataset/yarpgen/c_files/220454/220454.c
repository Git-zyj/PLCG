/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_10;
    var_16 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (max((((((min(var_5, (arr_1 [i_0])))) ? var_5 : ((-(arr_5 [i_0] [i_0] [i_0] [i_0])))))), ((0 ? var_1 : (arr_4 [i_0 + 1])))));
                    var_18 = 8257536;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_1] [i_2] [i_3] [i_4] = var_8;
                                arr_14 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] [i_3] = ((!(((max((arr_6 [i_0] [i_1] [i_2] [i_4]), (arr_7 [i_0 - 4] [i_3] [i_3])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_19 [i_6] [i_5] [i_2] [i_5] [i_0] = 0;
                                arr_20 [i_5] [i_5] = ((max(8296, 11346438611254688984)));
                                var_19 = (-((2017612633061982208 ? (arr_10 [i_0] [i_6 - 2] [i_5] [i_5]) : (arr_10 [i_0] [i_6 - 2] [i_5] [i_5]))));
                                var_20 = (min(var_20, ((((((min((arr_17 [i_0] [i_1] [i_0] [i_0] [i_6]), -109))) || -8278))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_26 [i_0] [i_1] [i_0] [i_7] [i_8] = (((((arr_25 [i_8] [i_1] [i_1] [i_1]) > var_13)) ? 8303 : var_2));
                                var_21 ^= (arr_1 [i_0 + 2]);
                                var_22 = -2014;
                                arr_27 [i_0] [i_0] [i_1] [i_1] [i_2] [i_8] [i_8] = ((((((arr_4 [i_0]) && 0))) << (!-24356)));
                                arr_28 [i_0] [i_8] [i_2] [i_7] [i_0] = ((!(((8303 ? 29342 : 244)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
