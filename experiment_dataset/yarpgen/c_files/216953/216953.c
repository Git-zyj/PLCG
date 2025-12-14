/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((((((var_3 <= 1) % ((var_1 ? var_2 : var_0))))) ? var_3 : 975005514));
    var_12 = ((var_1 ? (var_3 / 15068963096057138338) : var_10));
    var_13 *= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    var_14 *= (((255 / var_8) ? (((231813045 <= -114) ? -var_4 : ((-3028075912810872578 ? var_6 : var_5)))) : ((min(var_3, 1073741823)))));
                    var_15 = (((1 | 1) ? -1068825139 : var_4));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_16 = ((-(!var_4)));
                    arr_10 [i_3] [i_1] = -var_8;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_17 = (((max((min(var_1, var_2)), 32755)) % 1));
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_4] = var_9;
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] = var_5;
                var_18 = (max((max(-1, 252)), var_9));
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        arr_20 [i_6] = (((var_0 == var_7) < ((var_9 ? var_7 : -1))));
        var_19 = -24615;
    }
    #pragma endscop
}
