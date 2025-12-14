/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_8;
    var_17 += ((((((var_14 * var_4) ? (var_14 * var_13) : (min(var_12, var_4))))) ? var_6 : ((99 ? 31 : ((17965483094715967209 ? -103 : 65516))))));
    var_18 += var_5;
    var_19 &= (((var_0 + var_12) + (((((var_5 >> (var_15 - 2552753978)))) ? (((min(var_8, var_8)))) : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 *= (min((max(3877935706, 1)), ((((!3877935697) >> (((arr_4 [i_1] [i_0]) - 61299)))))));
                var_21 = (max(var_21, ((((((max(-85, 417031595))) ? (((15 / (arr_1 [i_1] [i_1])))) : (arr_3 [i_0] [i_1] [i_1])))))));
                var_22 = (max(var_22, (((((arr_2 [i_0] [i_1] [i_1]) << (((arr_5 [i_0] [i_0]) - 12589475155790165261))))))));
            }
        }
    }
    #pragma endscop
}
