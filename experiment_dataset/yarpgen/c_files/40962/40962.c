/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 2805028797;
    var_12 = ((((min(-54, var_9))) ? -46 : 30));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = ((min((arr_2 [i_1]), (arr_3 [i_1] [i_0 - 2]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 = ((((min(-var_10, var_7))) != var_4));
                            var_15 = ((((((!1489938502) || ((max(-344506104, 38)))))) <= (((arr_2 [i_3]) ? (arr_9 [i_2] [i_0] [i_0]) : (arr_3 [i_1] [i_0 - 1])))));
                            arr_11 [i_0 - 2] [i_1] [i_0 - 2] [i_2] [i_3] [i_3] = (((var_6 == (((max(-63, 255)))))) ? 1898 : 1489938502);
                            var_16 = 1832788870;
                            var_17 = (max((min((min(0, 1489938502)), (arr_6 [i_0]))), ((((min(var_7, var_3))) ? 15752 : var_1))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (!var_8);
    var_19 = min((38581 && 5205888317868672432), 12288);
    #pragma endscop
}
