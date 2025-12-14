/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(16630582382572831694, 25140));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [5] = ((!((((arr_0 [i_1 - 2] [i_1 + 2]) ? var_8 : (arr_0 [i_1 - 2] [i_1 + 2]))))));
                var_20 = ((((!((min(var_14, var_2)))))) - (max(-898551032, (((var_13 > (arr_1 [i_1 + 1])))))));
            }
        }
    }
    #pragma endscop
}
