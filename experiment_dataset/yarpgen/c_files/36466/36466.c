/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = (min(var_16, var_10));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (var_6 ^ 65535);
                arr_5 [i_0] [6] [i_0] = ((((min(var_14, var_8) / (((var_6 ? 246 : 80)))))));
                arr_6 [i_0] [i_0] = ((((((23 ? var_11 : var_11))) ? var_2 : (1 - 252))) != ((-((32640 ? (arr_0 [i_0]) : 65535)))));
                var_20 ^= (!1);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                arr_13 [i_3] = ((~((~(arr_12 [i_2 + 3])))));
                var_21 = ((var_3 ? (arr_9 [i_3]) : -9));
                arr_14 [i_3] = (((((((max(1048575, 127))) ? ((1 ? 0 : -116)) : (arr_9 [i_3])))) ? (((((~(arr_8 [i_3])))) ? (min(253, var_6)) : (((~(-127 - 1)))))) : (((((arr_11 [i_2] [i_2] [1]) ? var_6 : (arr_11 [i_2] [i_2] [i_3]))) ^ (((var_5 >> (9960 - 9929))))))));
            }
        }
    }
    #pragma endscop
}
