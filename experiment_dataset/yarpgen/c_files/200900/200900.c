/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200900
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
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, var_6));
                                arr_14 [i_0] [i_0] [i_2] = ((-(((((arr_6 [i_1] [i_2] [i_4]) <= (arr_8 [i_0] [i_2] [i_2] [7] [i_4 - 2]))) ? (((((arr_12 [i_2]) == (arr_0 [i_0] [i_0]))))) : ((var_9 ? -18025 : (arr_6 [i_2] [i_2] [i_2])))))));
                                var_12 *= (((var_8 ? 85 : -14239)));
                                var_13 = ((-(((arr_7 [i_2]) ? -210448422 : (arr_8 [i_0] [i_2] [i_2 + 3] [i_3 - 1] [i_4 + 1])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_5] [i_6] = 210448422;

                            for (int i_7 = 0; i_7 < 12;i_7 += 1)
                            {
                                var_14 = ((var_4 >> ((((var_7 ? 15 : var_4))))));
                                var_15 &= (arr_6 [10] [i_1] [i_1]);
                            }
                            var_16 = ((var_3 ? (((!(!210448434)))) : (((!((((arr_13 [i_0] [i_1] [i_5] [i_5] [i_1] [i_6]) % 12944))))))));
                            var_17 *= ((((-1999431780 ? (arr_0 [i_5 - 1] [i_5 + 1]) : -1999431780)) / ((max((arr_0 [i_5 - 1] [i_5 + 1]), 189)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        {
                            var_18 = (arr_27 [i_9 + 1] [i_9] [i_9 + 2] [i_9 + 2]);
                            var_19 = (((((163 ? 170 : 3376890312))) ? (arr_10 [2] [i_9] [i_9 + 2] [i_1]) : -8904));
                            var_20 += (((((min(-22825, (arr_27 [i_9] [i_1] [i_1] [i_0])))) ? (arr_17 [i_0] [i_1] [i_8] [i_0]) : var_4)) | var_7);
                        }
                    }
                }
            }
        }
    }
    var_21 = var_6;
    var_22 += ((((((1327687615 ? 180 : var_8)))) ? var_7 : var_9));
    #pragma endscop
}
