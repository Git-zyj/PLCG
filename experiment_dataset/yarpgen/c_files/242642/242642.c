/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (min(-31430, (-9223372036854775807 - 1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((((((((arr_3 [i_0]) <= 32759)))) || ((min((((-17617 ? 65535 : (arr_3 [i_0])))), (((arr_3 [i_0]) ? (arr_0 [20]) : 0))))))))));
                var_18 = (min(var_18, (((18446744073709551615 ? ((((min(var_7, var_4))) ? -21171 : (((arr_0 [2]) ? 244 : 9997333041505903249)))) : (min(16383, (arr_1 [i_0]))))))));
                var_19 -= (min(((max(6958602903749669533, 2919593563447625661))), ((((1 ? 1798877928 : 21))))));
                arr_6 [i_1] [i_0] [1] = ((~(((!6958602903749669542) ? (((7311 ? 1 : 1677517432))) : 0))));
            }
        }
    }
    #pragma endscop
}
