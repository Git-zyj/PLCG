/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [6] [0] &= ((113 ? 44 : ((max(45, 29)))));
                    arr_11 [i_2] = ((-7 ? 1832495044123549682 : 32));
                    var_15 = min(119, 127);
                }
            }
        }
    }
    var_16 = (min(var_16, var_5));
    var_17 &= (max(((((max(9223372036854775793, 1))) ? -99 : (var_3 / -50))), -1461300616411030417));
    #pragma endscop
}
