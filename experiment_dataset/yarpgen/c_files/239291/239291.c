/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_3 >> (((((((var_8 >> (var_2 - 15214)))) ? (min(var_2, var_7)) : var_5)) - 15187))));
    var_19 = (min(var_12, (min((max(1971559508193996465, 3772991900)), (var_7 % var_6)))));
    var_20 = ((var_17 ? (((((var_2 ? 2150402273 : -63))) ? var_13 : 32862)) : ((((-100 <= (4 * -36)))))));
    var_21 -= (~(min(var_7, (((var_6 ? -5423 : 33572))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_22 = (((arr_1 [i_1]) / var_5));
            arr_5 [i_1] = (arr_4 [i_0] [8] [i_1]);
        }
        var_23 = (((arr_1 [i_0]) > (arr_3 [i_0] [i_0] [i_0])));
        var_24 = var_12;
    }
    #pragma endscop
}
