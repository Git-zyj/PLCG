/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((((((((!(arr_2 [i_1] [i_0] [i_0]))) ? ((max(0, var_10))) : (21 * var_5)))) <= ((var_14 ? ((((!(arr_2 [i_0] [i_0 + 1] [i_1]))))) : (arr_2 [i_0] [i_0 + 1] [i_1]))))))));
                var_18 |= ((2333467784 ? ((((0 ? 18446744073709551606 : 32759)) - -86)) : var_3));
                var_19 -= (arr_0 [i_1]);
                var_20 = (arr_1 [i_1 + 1] [i_1 + 1]);
                var_21 = (((min((max(18446744073709551606, 147)), ((((arr_1 [i_1] [i_0]) ? -32760 : (arr_1 [i_0] [i_0])))))) < -var_11));
            }
        }
    }
    var_22 = var_1;
    var_23 = (min((((2167315290 + var_3) - (((var_7 ? 33427 : var_0))))), var_12));
    var_24 = ((((max(732764391, var_12)) << ((((max(-22575, 32755))) - 32747)))));
    var_25 = var_11;
    #pragma endscop
}
