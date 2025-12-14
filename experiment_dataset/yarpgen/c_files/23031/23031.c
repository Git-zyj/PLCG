/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = (max((arr_1 [0]), (((max(-6702501466725360499, (arr_4 [i_0] [i_1 - 2] [1]))) | (arr_5 [i_0 + 1] [i_1 - 1] [i_1 + 1])))));
                arr_6 [i_0 + 1] [9] = (((max(6702501466725360501, -6702501466725360499)) & (((((arr_2 [i_0 + 1]) == (max((arr_2 [i_0]), 80))))))));
                var_11 = (1157820293939845099 - 545462310);
                arr_7 [i_0] = (((((arr_0 [i_1 + 2]) || (arr_0 [i_1 - 2]))) ? ((5310162985676245312 ? (arr_0 [i_1 - 2]) : (arr_0 [i_1 + 1]))) : (arr_0 [i_1 + 1])));
            }
        }
    }
    var_12 = ((((var_8 || (var_3 / var_3))) ? var_5 : ((446139993 ? 91 : 65535))));
    #pragma endscop
}
