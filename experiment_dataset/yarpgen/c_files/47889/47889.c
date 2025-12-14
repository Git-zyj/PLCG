/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (arr_5 [i_1] [i_1]);
                var_14 = ((((12980948013621070827 ? (!123145302310912) : (~var_1)))) * (max((max(31, (arr_4 [i_0] [i_0] [13]))), ((var_2 ? (arr_4 [i_0] [6] [i_1]) : -30097)))));
            }
        }
    }
    var_15 = (+-228);
    #pragma endscop
}
