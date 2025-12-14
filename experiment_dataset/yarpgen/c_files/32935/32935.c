/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 *= (((((((var_10 / (arr_2 [i_1])))) ? (-58 != 253952) : (-8088347596660518390 ^ 7636))) | ((57 ^ (-8498404608210316931 ^ 58)))));
                var_17 = (((15 / 127) % ((20 ? 1 : 20))));
                var_18 = ((((((58 ? (arr_1 [6]) : (arr_1 [i_0]))) / ((((arr_3 [i_0] [i_0] [i_0]) || var_1))))) * ((-66 * (17592186043904 >= 13926975040869620374)))));
            }
        }
    }
    var_19 = ((((((146 ? -7636 : 15)) + 2147483647)) >> ((((var_4 + var_4) && (0 > var_10))))));
    var_20 = ((((((((var_6 ? -6065633881536153052 : var_14)) + 9223372036854775807)) << (((((var_6 + 9223372036854775807) << (7636 - 7636))) - 741763037211789709)))) + (((((var_6 ^ 98) > (var_0 != var_14)))))));
    var_21 *= ((((((var_10 > var_6) | (-3418197888579584700 != var_2)))) ? (((((var_1 ? var_3 : var_4))) ? (var_10 ^ var_14) : (3 < var_0))) : (((-4080517919378277473 ? (4294967295 < 1004312221) : (4294967295 << 0))))));
    #pragma endscop
}
