/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = (((((var_6 ? 61287 : ((max(-87, 58586)))))) > var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (((((-122 - (arr_0 [i_1])))) ? (((((arr_0 [i_0]) ? -28 : 5008199273631096409)))) : (max(5384838755357515860, -1))));
                var_17 &= 13438544800078455206;
            }
        }
    }
    var_18 = ((((max(var_9, var_12))) ? var_0 : (((-951663165477572669 ? 951663165477572669 : 951663165477572673)))));
    var_19 = var_0;
    #pragma endscop
}
