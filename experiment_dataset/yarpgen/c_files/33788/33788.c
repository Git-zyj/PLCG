/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_16 *= (((max(1116892707587883008, (arr_0 [i_1])))));
                var_17 = ((((min((arr_0 [i_0]), (4294967295 && -1116892707587882996)))) ? (arr_1 [i_1 + 1] [6]) : ((-((var_5 + (arr_1 [14] [i_1])))))));
            }
        }
    }
    var_18 = (max(var_18, var_14));
    #pragma endscop
}
