/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-6387842205851769327 ? 102 : ((1 ? (((min(1, 1)))) : -2320663253110386073)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 -= 1;

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_16 = (min(((max(((1 ? 1 : 1)), ((max(1, -11112)))))), (min(((max(11117, 1))), ((96 ? 20 : 1))))));
                    arr_10 [0] [20] [21] [0] |= ((1 ? (min((((11117 ? 1 : -11118))), 17780158054445392254)) : ((((max(0, 0))) ? 18446744073709551595 : (max(7, 11))))));
                }
            }
        }
    }

    for (int i_3 = 4; i_3 < 18;i_3 += 1)
    {
        var_17 |= 0;
        arr_14 [0] [1] = (max((min((min(-4313, 15)), ((min(2147483647, 31))))), (max(((min(146083023, 39))), 8))));
    }
    #pragma endscop
}
