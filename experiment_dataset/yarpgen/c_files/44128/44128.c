/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((((((arr_2 [i_0 - 1] [i_1 - 1]) + (arr_2 [i_0 + 3] [i_1 - 1])))) ? (max(18446744073709551611, 24)) : (max(var_14, ((var_5 ? 220 : 24)))))))));
                var_19 += (((((((var_3 ? 0 : var_10))) ? ((max(961, var_2))) : -var_9)) > (max(21, ((64575 ? var_17 : var_12))))));
                var_20 = var_8;
            }
        }
    }
    var_21 = ((18446744073709551575 ? (max(var_10, 961)) : (((((min(961, 18446744073709551597)) == (((var_4 ? var_10 : 58)))))))));
    var_22 = -1980948108;
    #pragma endscop
}
