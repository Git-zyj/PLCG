/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (((657386675 * 200) * var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 |= (var_12 && 127);
                    arr_9 [i_1] [i_0] [i_0] = ((min(-7538010228485017806, 9037959169020744952)) << (((~-1309940652) - 1309940641)));

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_20 = ((-(-7538010228485017799 && 51)));
                        var_21 = (arr_0 [1]);
                        arr_12 [i_0] [i_1] [i_2 - 2] [i_1] = (((((arr_10 [i_0] [i_1] [i_0] [i_0]) ? -7538010228485017812 : (max(7538010228485017805, -30258))))) && (32512 && 1278709906));
                    }
                    arr_13 [i_1] = ((+(min((arr_6 [i_2 + 3] [i_2 - 4] [i_2 + 1]), (arr_1 [i_0])))));
                }
            }
        }
    }
    var_22 = ((!((min(7579714598461034235, (7538010228485017798 | 0))))));
    var_23 += ((2147418112 ? 1 : 16646144));
    #pragma endscop
}
