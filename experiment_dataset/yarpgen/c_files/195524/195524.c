/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (min(58872, 6663));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (arr_3 [i_2])));
                            var_14 = (min(var_14, (((+((min((arr_8 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), 6663))))))));
                            var_15 = (max(var_15, 6653));
                            var_16 = ((-3204876208082256573 ? (((~-16348) ? ((var_5 ? 44495 : (arr_9 [i_1] [i_1] [i_1] [i_3]))) : ((((arr_3 [i_1]) | 114))))) : (((((min((arr_9 [i_0] [i_1 - 1] [i_2] [i_1 - 1]), 6661))) ? -58872 : 254)))));
                        }
                    }
                }
                arr_10 [i_0] = (((min(0, ((0 < (arr_7 [i_0] [i_1] [i_1]))))) ? (min((arr_6 [i_0] [i_0] [i_1] [i_0]), (252 ^ 50994))) : 65511));
                arr_11 [i_0] [i_0] [i_0] = (arr_3 [i_0]);
            }
        }
    }
    var_17 = (min(((min(44495, 0))), var_0));
    #pragma endscop
}
