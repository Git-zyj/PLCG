/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    var_11 = ((((0 >= (min((arr_0 [i_0] [i_0 + 1]), 44718)))) ? 896345461138704777 : ((max(14434269458139509220, (arr_4 [i_0] [10] [10] [i_2 + 3]))))));
                    arr_7 [i_1] = var_1;
                    var_12 = (((~(arr_3 [i_2 - 1] [2] [i_1]))));
                }

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 7;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_15 [i_1 - 1] [i_1] [i_1 - 1] [2] [i_1] = ((((~((min(44718, 59797))))) <= -21));
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_4] [0] = ((18446744073709551610 && (+-32)));
                            }
                        }
                    }
                    var_13 = ((11914238327136954765 ? (~119) : (((arr_10 [i_1] [i_0 - 1] [i_1]) ? (((arr_10 [i_1] [i_0] [i_1]) ? (arr_0 [1] [i_0]) : 44718)) : (max(10859905871105175261, -122))))));
                    var_14 = (max(var_14, ((((((((((arr_12 [i_0] [7] [10] [i_3] [9] [i_0]) && var_5))) & 20820))) * ((((max(var_6, (arr_6 [4] [10] [10] [2])))) ? ((-119 ? var_6 : (arr_0 [6] [i_1]))) : (((arr_11 [10] [i_1] [10]) + var_4)))))))));
                }
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    var_15 = ((-(arr_13 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_16 = 11069728399227123293;
                                var_17 = (min((arr_3 [i_0 - 1] [i_1 + 1] [i_1]), (arr_3 [i_1 + 1] [i_1] [i_1])));
                                var_18 += (max(((10909417954237109517 ? var_4 : (((59823 ? -120 : (arr_2 [i_8] [i_8])))))), (((-17661 ? 38065 : ((1 ? -1913 : (arr_25 [i_6] [1] [i_8]))))))));
                                var_19 = (((arr_17 [i_1]) || (((((min(1, 3505773900781360155))) ? var_3 : ((-(arr_17 [i_1]))))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    var_20 = (arr_19 [i_1 - 1] [i_9 - 1] [i_0 + 1]);
                    var_21 = (min(var_21, 255));
                    var_22 -= (arr_23 [i_0 - 1] [i_0 - 1] [i_9 - 1] [i_0]);
                }
                arr_28 [4] [i_1] = var_0;
                arr_29 [i_1] [i_1] [i_1] = (((var_5 + (max(var_9, -31497)))));
            }
        }
    }
    var_23 = (max(var_23, ((max((((255 + -70) + -7889784262904443395)), (1 <= -112))))));
    #pragma endscop
}
