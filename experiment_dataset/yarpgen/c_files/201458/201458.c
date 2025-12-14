/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((-2839495990280538297 ? 45 : 255)) <= -22626)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((((max((arr_1 [i_0]), 3940818271)))) ? (0 + 1) : (min((((arr_2 [i_0]) - 51117)), (((131068 ? 0 : -108)))))));
                arr_5 [i_0] [i_0] [i_1] = (1 % -28798);
            }
        }
    }
    var_18 += ((2 ? (((249 ? 16 : 86))) : (max((max(17861, 4294967294)), (65533 > 236)))));
    var_19 = (((min(var_2, 33))) <= (((-64 ? (((var_12 ? var_14 : 354149024))) : ((2576471921 ? (-9223372036854775807 - 1) : var_5))))));
    var_20 = (((((((-127 - 1) ? var_14 : 65535)) + (96 ^ 32754)))) ? (max(var_4, -794917436510203328)) : 1);
    #pragma endscop
}
