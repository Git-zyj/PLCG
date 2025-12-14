/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!18446744073709551603);
    var_20 &= (min(1835008, ((((((-3357837587938443455 + 9223372036854775807) << (((var_9 + 1963160201372679699) - 43))))) ? ((var_9 ? var_16 : var_3)) : (1 + var_5)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            var_21 = (arr_3 [i_0]);
            var_22 -= (~-1);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_23 = ((arr_0 [i_2]) ? var_0 : (arr_0 [i_2]));
            var_24 = (arr_4 [i_0] [i_2]);
            arr_7 [i_0] [i_0] [i_0] &= (arr_0 [i_0]);
            var_25 = (max(var_25, ((((arr_1 [i_0]) == (arr_1 [i_2]))))));
        }
        var_26 = ((!(((var_18 ? (!var_11) : (arr_4 [10] [i_0]))))));
    }
    #pragma endscop
}
