/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((-95 + (var_2 + var_8))), var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [18] &= (((((var_12 % (((arr_2 [i_1]) << (56583 - 56581)))))) ? ((((107 ? -26013 : 9223372036854775807)) * (var_12 != 91))) : (var_10 || 30)));
                var_18 = (max(var_18, ((((var_0 && var_16) & (127 ^ 128))))));
            }
        }
    }
    var_19 = (((((max(127, 88)))) >= ((3973271404 & (max(var_2, var_14))))));
    var_20 = 13;
    var_21 = (min((max(74, ((var_8 ? 1431148972513201872 : 0)))), ((min((127 / 255), 41)))));
    #pragma endscop
}
