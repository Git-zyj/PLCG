/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            var_19 = 105;
            var_20 = var_6;
            arr_5 [i_0] [i_0] = ((((arr_3 [i_0] [i_0] [i_0]) && 0)));
            var_21 = ((((((arr_1 [i_0 - 1] [i_1]) ? 51452 : 137))) ? (arr_1 [i_1 - 3] [i_1 + 2]) : (arr_3 [i_0] [i_0 - 2] [i_1])));
        }
        var_22 = (((arr_1 [i_0 - 3] [i_0 + 2]) < (arr_4 [i_0 + 2] [i_0 + 1])));
        var_23 = 4172444637;
        arr_6 [i_0] = ((~((110 * (arr_2 [i_0] [6] [6])))));
    }
    var_24 = ((((((var_18 ? 65535 : var_17))) ? (~var_2) : (51452 + var_18))));
    var_25 = var_0;
    #pragma endscop
}
