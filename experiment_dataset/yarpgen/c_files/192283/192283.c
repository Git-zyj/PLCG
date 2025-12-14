/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((566428105 ? ((max(1991663971, (max(1134874118, 0))))) : 3728539205)))));
                    var_15 = 0;
                    var_16 = (min(var_16, ((((((((max(0, 857852127))) ? ((max(1, 1822589281))) : ((3295358451968484653 ? -1 : 1))))) ? (max((max(9223372036854775807, 1068993360)), (((-2039438633 ? -1991663972 : 3728539207))))) : ((max(((-1899310255 ? 0 : 1811236125)), 1822589271))))))));
                    arr_6 [i_1] [i_0] [i_0] = max(2147483647, (max(((max(566428105, 1))), ((939240330 ? -2283326233742592734 : -5078284192347223439)))));
                }
            }
        }
    }
    var_17 = (max(1, ((-4282053762545589120 ? -2039438648 : 1))));
    #pragma endscop
}
