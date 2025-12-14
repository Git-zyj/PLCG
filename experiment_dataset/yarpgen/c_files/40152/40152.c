/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_3);
    var_21 = (max(var_21, (~var_18)));
    var_22 = (min(var_22, (~var_14)));
    var_23 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_24 = var_15;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_25 = (min(var_25, (((!(!38388))))));
                            var_26 -= ((!(!var_11)));
                            arr_10 [i_0 - 1] [i_0] [i_1] [9] [i_2] [i_3 - 1] = 59;
                            arr_11 [i_0] [i_0] [2] [4] = ((!(~var_17)));
                        }
                    }
                }
                var_27 = ((!(!var_8)));
                arr_12 [i_0] = ((-((-(arr_1 [i_0 - 1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
