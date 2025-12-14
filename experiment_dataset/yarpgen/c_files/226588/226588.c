/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (((min(-2886387338, (((0 ? (arr_2 [i_0] [i_0]) : (arr_3 [5] [5])))))) << (1719581026451572923 - 1719581026451572920)));
                var_19 &= (min((arr_0 [i_0] [i_1 - 1]), ((~((max(14336, 3172)))))));
            }
        }
    }
    var_20 = (min(var_20, 6795672589057829966));
    #pragma endscop
}
