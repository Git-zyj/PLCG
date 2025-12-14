/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_10 *= ((!(((~(-127 - 1))))));
        var_11 = ((((-(arr_1 [i_0 + 1]))) / (-108 && 1)));
        var_12 = ((((((var_3 ? var_7 : 19814)))) || (((((max(var_6, -19823))) ? (var_3 ^ 9691876785698169139) : (((max(var_3, 1)))))))));
    }
    var_13 = (((var_6 << var_6) ? var_1 : (((var_1 || -572648514) ? var_5 : (min(var_1, 1368763540705195521))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                arr_8 [i_1] = ((var_0 >> ((((var_4 ? 18446744073709551615 : var_9)) - 18446744073709551588))));
                var_14 = ((~((var_7 ? var_1 : var_8))));
            }
        }
    }
    #pragma endscop
}
