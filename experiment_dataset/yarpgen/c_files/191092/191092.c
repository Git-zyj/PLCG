/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_5));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_17 = (arr_2 [i_0] [1] [i_1 + 1]);
            var_18 = (((arr_0 [i_0] [i_0]) ? ((min(339989687, -1))) : ((-(arr_3 [i_1 - 1] [i_1 - 2])))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_19 = (min((var_6 < var_0), ((+(((arr_8 [i_3] [i_3] [1] [i_0] [i_0]) ? var_1 : var_5))))));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_20 = ((((((((var_4 ? -587127450 : -13))) ? ((var_14 ? -5501696304215400152 : (arr_7 [i_0] [i_1 + 1] [i_2] [4] [i_4]))) : (!var_7)))) ? ((min((!5501696304215400152), (!var_15)))) : ((var_14 ? ((var_7 ? (arr_10 [i_2] [i_1] [i_2] [i_3] [i_4]) : -1)) : (arr_0 [i_1 - 2] [i_1 - 2])))));
                            var_21 = ((1 >= (~587127450)));
                        }
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            var_22 = ((((((-420303014 ? 31037 : -904587799)) > -587127449)) ? ((((~var_10) < var_5))) : (arr_7 [i_5 + 1] [i_3] [i_2] [i_1] [i_0])));
                            var_23 *= ((((var_6 ? 426052238 : 5501696304215400151))));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_24 = ((((min(((~(arr_11 [i_6] [i_0] [4] [i_1] [i_1] [i_1 - 1] [i_0]))), 426052233))) ? ((1 ? var_11 : 623179682)) : (((min((arr_1 [i_1 - 2] [i_1 - 2]), (arr_4 [i_1] [i_2] [i_2] [i_1])))))));
                            arr_19 [i_0] [i_1] [i_3] [i_0] [i_2] = (arr_12 [i_0] [i_1] [i_2] [i_3] [i_6] [i_6] [i_6]);
                            var_25 = (((((~(arr_6 [i_3] [i_1 - 2] [i_2] [i_3] [i_1 - 2])))) ? (arr_8 [i_6] [i_3] [3] [i_1 - 2] [i_0]) : (max(-1, (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                    }
                }
            }
        }
        var_26 = var_2;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 9;i_9 += 1)
                {
                    {
                        var_27 = (arr_5 [i_0] [i_7] [i_8]);
                        var_28 = 587127455;
                    }
                }
            }
        }
    }
    #pragma endscop
}
