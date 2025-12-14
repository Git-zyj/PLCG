/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (((max(7395, 59))));
                var_12 = ((-(min(((((-9223372036854775807 - 1) && 63680))), ((7418 ? var_1 : 7395))))));
                var_13 = (max(var_13, ((((((arr_4 [i_0 - 1] [i_0 + 1]) ? 9223372036854775807 : (arr_4 [i_0 - 1] [i_0 + 1]))) % (arr_4 [i_0 + 1] [i_0 + 1]))))));
            }
        }
    }
    var_14 -= var_6;
    var_15 += ((var_2 ? (((max(var_2, var_7)))) : (var_3 / var_5)));
    var_16 *= var_4;
    #pragma endscop
}
