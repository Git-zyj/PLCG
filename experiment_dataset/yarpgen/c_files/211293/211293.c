/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((min(2347576615, (2347576615 * 2347576615))))));
    var_16 &= (-(min(-var_5, (max(10622, 3668676160)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (arr_2 [8] [9]);
                var_17 = 3668676157;
                var_18 |= ((-8979570882940928063 ? ((max(var_10, (arr_0 [i_0])))) : (max(0, 2347576613))));
                var_19 = ((65 ? ((((min((arr_5 [i_0] [i_1]), 626291162))) ? (max(3668676138, -16202)) : (((~(arr_3 [i_0] [i_0])))))) : ((min((arr_0 [i_0]), (arr_4 [i_0] [4]))))));
                var_20 = ((9181794369674769261 ? 3668676164 : (((~(arr_6 [i_0] [i_0] [i_0]))))));
            }
        }
    }
    var_21 = 11334677724051566273;
    var_22 ^= ((((min(4294967293, var_2)))) || ((max(((52250 ? var_14 : var_0)), ((max(var_10, var_11)))))));
    #pragma endscop
}
