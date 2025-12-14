/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!((((var_8 ? 37438 : var_0)) <= var_2))));
    var_15 = (max(var_0, ((((~var_12) ? (~var_11) : (min(24576, 3193225547)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (~1033565521);
                    arr_10 [i_1] [3] [17] = ((((max(var_4, (arr_4 [i_1] [17] [i_0 + 1])))) ? (max(4294967295, (arr_4 [i_1] [15] [i_0 + 1]))) : (~var_9)));
                    var_17 = ((!(arr_4 [i_1] [19] [15])));
                }
            }
        }
    }
    var_18 = (var_3 || (~var_9));
    #pragma endscop
}
