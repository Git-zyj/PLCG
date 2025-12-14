/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_1] = (((~2096332298) ? var_8 : (((((-6414022036445740161 ? var_5 : var_5))) ? (((var_8 ? 2096332292 : 2198635003))) : 6414022036445740160))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_10 = (min(var_10, 2198635004));
                            arr_15 [i_1] = ((-((2953310321 ? (min(var_8, 6414022036445740143)) : (~1798510871)))));
                            arr_16 [i_0] [i_1] [i_0] = 1;
                        }
                        arr_17 [i_1] [i_1] [i_2] [i_3] = (((!var_4) ? (((((249 ? 705510938 : 4102))) ? var_7 : ((var_8 ? var_5 : -6414022036445740159)))) : (((22 ? var_8 : var_2)))));
                    }
                    arr_18 [i_1] = (((((84 ? (((-6414022036445740146 ? 8133 : var_1))) : -1869355396879810789))) ? ((59 ? -1196344065 : var_1)) : -var_4));
                    arr_19 [i_0] [16] [i_0] [6] |= (((!16453706079615401607) ? (((var_0 ? -24578 : var_5))) : ((((min(var_0, -54))) ? 2676012217 : 18028))));
                    var_11 = ((var_7 ? ((((~16755047064160410512) ? var_3 : ((16261 ? var_7 : 1))))) : var_0));
                    arr_20 [14] [14] &= ((((((!1) ? var_2 : (max(9042, var_0))))) ? 6414022036445740143 : ((((max(1, var_6))) ? -var_0 : (((var_6 ? var_4 : 24577)))))));
                }
            }
        }
    }
    var_12 = 6414022036445740113;
    #pragma endscop
}
