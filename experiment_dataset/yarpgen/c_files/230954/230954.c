/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= 0;
    var_15 = ((0 / var_11) ? ((1 ? (((min(255, 0)))) : var_5)) : (((var_4 ? 4294967295 : (1957784209 != var_4)))));
    var_16 = ((((((((-4408053020134418573 ? -796957664 : 1))) || -1))) | ((var_2 >> (var_6 - 4294967216)))));
    var_17 = ((!(~var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] &= (((((((max(-1155364080, 2147483647))) ? (var_6 | -106) : -var_11))) ? ((((((var_2 ? -2147483647 : var_2))) ? (1 + -2011357160) : (max(105, 1137839047))))) : (((((2147483636 >> (2147483647 - 2147483624)))) ? var_6 : -2147483628))));
                var_18 = ((var_3 ? (((-(2147483636 / var_12)))) : (((((var_0 ? 2147483636 : 3244688421781623947))) ? (min(3162582318451955547, 12331)) : (((max(var_2, var_6))))))));
                var_19 = (min(((~(min(var_12, -16)))), ((~((348704804 ? 262144 : 9223372036854775807))))));
                var_20 = ((((1016220217897143069 != (((-2147483626 ? var_4 : -16111)))))) > (min(1, ((93 ? var_6 : 687264637)))));
            }
        }
    }
    #pragma endscop
}
