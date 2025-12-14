/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max(((((arr_1 [i_0]) & (arr_1 [i_1])))), ((31 ? 11073050710645575619 : -20941))));
                arr_5 [i_0] = (min(2370353102, ((-var_8 + ((16896369705257189828 ? -6356646274742781891 : 6356646274742781878))))));
            }
        }
    }
    var_12 += (((~6356646274742781894) ? (max((max(36028794871480320, 65535)), var_8)) : (max(-6356646274742781883, 2929702156171710485))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 7;i_3 += 1)
        {
            {
                var_13 ^= (((((max(-6356646274742781891, var_1)))) ? -51 : 5142136330520672862));
                var_14 = -var_0;
                arr_12 [i_3] = (((arr_2 [i_2]) / (max(133, 1206072406395433519))));
            }
        }
    }
    var_15 = ((0 ? 6356646274742781878 : 55));
    #pragma endscop
}
