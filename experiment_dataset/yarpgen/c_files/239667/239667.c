/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (((((!((max(-1824480739283385416, var_11)))))) < ((max(1, 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((!(arr_2 [12] [i_1])));
                arr_6 [i_1] |= (max((arr_3 [i_0] [i_0]), (!1838897253)));
                var_20 -= ((1 >> (!252201579132747776)));
                arr_7 [15] = ((((((max(57392, (arr_3 [i_0] [i_0])))) ? (var_8 <= 11180839959778107003) : ((226 >> (((arr_1 [i_0] [i_1]) + 95)))))) >> (((arr_0 [i_0]) - 18095))));
            }
        }
    }
    var_21 = ((((((124 - 30) ? 8061 : var_9))) ? var_7 : var_9));
    var_22 = (max(var_18, ((min((var_4 >= 8154), (!var_6))))));
    #pragma endscop
}
