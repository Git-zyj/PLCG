/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= -27133;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (((((((((arr_3 [i_0]) | 1))) ? ((~(arr_3 [i_0]))) : (((-9223372036854775807 - 1) ? (arr_0 [i_0]) : 3786604255))))) ? (((min((arr_1 [i_0]), 1)))) : 3287940963073736378));
                var_17 -= (((((((((arr_4 [i_1] [i_1] [i_1]) - 1))) ? (max(738034052461226364, -3668591525727054281)) : 1046528))) ? ((((!(((-18217 ? 0 : 1))))))) : ((965730436 ? ((3195540573 ? (arr_4 [15] [i_1] [1]) : 5609641609113093474)) : (9223372036854775807 / 1)))));
                arr_5 [19] [i_1] = 15158803110635815217;
                arr_6 [i_0] [i_0] [i_1] = -406;
            }
        }
    }
    var_18 = (~((2032289252005368487 ? 965730437 : 3814960782840303906)));
    var_19 = (((-9223372036854775807 - 1) ? -24695 : 4294967288));
    #pragma endscop
}
