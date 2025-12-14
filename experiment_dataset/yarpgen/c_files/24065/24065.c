/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1361086091;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [17] [i_1] [17] = (((arr_2 [i_0] [i_0]) - (((arr_1 [i_0]) | var_6))));
                var_11 = min(32, (arr_4 [i_0] [i_1]));
                arr_6 [i_0] [i_1] = (((max((arr_3 [i_1 + 1] [i_1 - 2] [i_1 - 2]), (arr_3 [i_1 - 2] [i_1 - 1] [i_1 - 1]))) ? 15158 : (arr_2 [i_1 + 1] [i_1 - 1])));
                arr_7 [i_1] [i_1] = (((max((arr_3 [i_1 - 3] [i_1 - 2] [i_1 - 3]), (arr_3 [i_1] [i_1 - 4] [i_1 + 2]))) ? (((arr_3 [i_0] [i_1 - 1] [i_1 - 3]) ? 6304 : 127)) : ((var_3 ? -15169 : (arr_3 [i_0] [i_1 + 1] [i_1 + 2])))));
                arr_8 [i_0] [i_1] [i_1 - 3] = 5368569509482773929;
            }
        }
    }
    #pragma endscop
}
