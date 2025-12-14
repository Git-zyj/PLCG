/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (((((-25505 ? 4294967283 : -75))) ? (max((((39 ? -29381 : 23204))), ((35 ? 2046484396 : 13)))) : (min((1 & 142401929), 1747487060))));
                var_18 = (min(((64 ? ((-7554838578537326645 ? 4216464892 : 4294967283)) : (~36461))), (((-1024 ? ((min(-25517, -32763))) : ((7 ? 1 : 124)))))));
                var_19 = 3785078529;
                arr_6 [i_0] [i_1 + 1] = -1585401716;
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_20 = ((0 ? (max(-18813, -19)) : (min(15, 1750773959))));
                            var_21 = ((-46 ? 7 : 41));
                        }
                    }
                }
            }
        }
    }
    var_22 = (var_8 && 11438475968963879236);
    var_23 = (min(var_23, (((((3573179634 / 13) ? (-19574 / 7515517327213270200) : var_6))))));
    #pragma endscop
}
