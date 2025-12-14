/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((((((((var_4 ? -2147483632 : var_3))) ? ((max(-2147483632, -2147483616))) : var_6))) ? ((min((var_11 | var_2), ((2147483631 ? var_13 : 100663296))))) : (((~100663298) & (max(-2147483632, 9223372036854775808)))))))));
    var_15 *= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 ^= ((((-2147483644 / (arr_3 [8])))) ? (((arr_2 [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_0] [i_1]) : 3388175571)) : ((((!((min(var_6, (arr_4 [i_1])))))))));
                arr_5 [i_0] [i_0] [i_1] = (max(((((!(arr_1 [i_0]))) ? (~1) : (max(-2147483606, (arr_4 [i_1]))))), ((-2147483639 ? ((1 ? 4194303972 : 582944712)) : (min(var_2, 100663299))))));
            }
        }
    }
    #pragma endscop
}
