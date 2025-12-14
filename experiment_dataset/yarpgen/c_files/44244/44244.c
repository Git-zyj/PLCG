/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 = ((var_9 ? (-281474976710656 & -92) : ((((!(((var_4 >> (-92 + 114))))))))));
                                arr_13 [i_0 - 1] [i_1] [i_2] [i_0 - 1] [i_4] = var_4;
                            }
                        }
                    }
                    var_12 = (((2493508899509927737 > ((min(70368743129088, -5535216562606707652))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_13 = ((((min((min((arr_3 [i_0 - 3]), (arr_17 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 2] [i_0]))), var_2))) ? (arr_9 [i_0]) : 52668));
                                var_14 = (min(var_14, (((var_7 ? (((-(arr_7 [i_0 - 1] [i_5] [i_5] [i_5])))) : ((((arr_15 [6] [i_1] [i_2 - 1] [i_5] [i_6] [i_6]) ? (arr_4 [i_2]) : (arr_18 [i_0] [i_0] [i_2] [i_5] [i_5] [i_6])))))))));
                                var_15 = ((!(((-((49152 ? var_6 : var_3)))))));
                                arr_19 [i_0] [i_0] [i_2] = (min(92, (((arr_11 [i_2 - 1] [13] [i_2 - 1]) ? var_7 : var_0))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = 70368743129082;
    var_17 = (((((~((var_9 ? var_9 : 70368743129085))))) ? 21005 : (((!175) | (8664381699419310779 ^ var_6)))));
    #pragma endscop
}
