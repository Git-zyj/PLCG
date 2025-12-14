/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (8386585137983517244 ? 411950884704890959 : 3855112386);
                var_15 = min(((((~var_2) ? (125 && 22925) : (arr_2 [i_0] [i_0])))), (max((max(3693752168072286991, 3693752168072286991)), 0)));
                var_16 = (((min(var_1, (arr_1 [i_0]))) % (((1623673830 ? (1623673830 && 116) : 90)))));
                var_17 |= (((arr_5 [i_0] [i_1]) ? (((arr_5 [i_0] [i_1]) ? (arr_5 [i_0] [i_1]) : (arr_5 [i_0] [i_1]))) : (arr_5 [i_0] [i_1])));
                var_18 = (((max(-3693752168072286991, ((-1 ? 0 : 4333289802577283212))))) && ((max((arr_1 [i_1]), (arr_1 [i_0])))));
            }
        }
    }
    var_19 = (max(((((8388608 + 57405) && var_2))), (((((var_2 ? var_6 : var_10))) - ((var_9 ? var_8 : -1623673830))))));
    var_20 = (min((var_2 % var_9), var_8));
    var_21 = var_11;
    #pragma endscop
}
