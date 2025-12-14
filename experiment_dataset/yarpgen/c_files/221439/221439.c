/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_15 += (!-var_6);
                var_16 = (0 || 18446744073709551615);
                var_17 *= ((((var_7 >= (arr_6 [i_1 - 1] [i_1 + 2] [10])))));
                var_18 += (((min((arr_5 [6] [i_0] [6]), -19)) <= ((var_1 % (min(1073741792, 1125899906842112))))));
                var_19 = (max(var_19, (((~((((((arr_1 [2]) ? var_13 : (arr_0 [i_0] [i_0])))) ? (arr_6 [i_0] [i_1] [12]) : var_6)))))));
            }
        }
    }
    var_20 = min(((min(var_12, var_8))), ((((min(24, 2641397214))) % ((3713362734 ? (-9223372036854775807 - 1) : 26)))));
    #pragma endscop
}
