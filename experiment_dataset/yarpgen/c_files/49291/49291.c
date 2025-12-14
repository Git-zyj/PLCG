/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((var_2 ? (((min(var_10, var_2)))) : ((min(-2873322973942531242, -63272699))))))));
    var_16 |= ((~(((!var_0) ? (var_12 && 1) : var_8))));
    var_17 = ((((((min(-7320719662805253480, 2873322973942531242))) ? ((2873322973942531241 ? var_3 : var_14)) : (((var_6 ? var_3 : var_0))))) < (((var_13 == 17687403424397179252) ? ((max(5856630768276531908, 22366))) : var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 *= (min((arr_3 [i_1]), ((((arr_1 [i_0]) == (arr_3 [i_0]))))));
                var_19 = (--2910147832);
                arr_4 [12] [i_0] = ((min((arr_0 [i_0]), 76)));
                arr_5 [i_1] [i_0] = ((~((max((arr_1 [i_0]), var_13)))));
            }
        }
    }
    var_20 = ((~(((((var_6 << (var_14 - 514217216634736652)))) ? (!var_14) : var_1))));
    #pragma endscop
}
