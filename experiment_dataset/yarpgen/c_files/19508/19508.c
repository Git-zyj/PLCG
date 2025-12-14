/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [13] = (min((32767 || 0), ((-31983 / (arr_1 [i_1])))));
                arr_6 [i_1] = var_17;
                arr_7 [i_1] = (((6397514590363072395 / (arr_3 [i_1]))) == -24470);
                var_18 = (max(var_18, (arr_2 [i_0])));
                var_19 = (arr_0 [i_0]);
            }
        }
    }
    var_20 = (max(((max(24476, 1))), ((var_2 ? 8267442654946293322 : (~127)))));
    #pragma endscop
}
