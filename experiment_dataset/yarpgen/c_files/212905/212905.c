/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 = (min(((max(-2927621384395120746, (arr_1 [i_0])))), (max(((15410 ? 7866696522393960335 : 28161)), 28152))));
                            var_16 = (max(((max(var_0, -28161))), (arr_5 [i_0] [2] [i_2])));
                        }
                    }
                }
                arr_11 [i_0] = (max((max((min(1212923558, (arr_2 [i_1]))), (((arr_1 [i_0]) ? -28160 : 28152)))), (max(var_3, ((8169067165531340658 ? var_11 : 15804))))));
                var_17 = min((((141 && ((max(var_9, -28152)))))), ((((max(-1884879075, (arr_8 [i_1])))) ? (arr_9 [i_0 - 3] [i_0] [i_0 - 3] [i_1 + 1]) : (max(-4205760220708130456, -1879661166)))));
                arr_12 [i_0] [i_0 - 1] [i_1] = (arr_4 [i_0] [13]);
            }
        }
    }
    var_18 = ((((max((max(var_11, 8372249706378501347)), (var_7 || 1212923558)))) ? (max(var_6, var_14)) : var_13));
    #pragma endscop
}
