/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_7 >> ((((-var_3 ? var_1 : var_4)) - 1443110307))));
    var_11 ^= var_2;
    var_12 = ((((((~var_3) ? (max(var_8, var_7)) : (((var_6 ? var_0 : var_4)))))) ? (((((max(var_4, var_4))) >> (var_3 + 1958488624195935295)))) : (max(((((-127 - 1) ? 1701820409 : var_8))), ((var_9 ? var_2 : var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (min((arr_2 [i_1]), ((((((arr_4 [8] [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (arr_0 [i_0] [i_0]) : ((2593146892 ? 4867065919774384624 : 255))))));
                arr_6 [i_0] [i_0] [i_0] = (min((((!(arr_3 [i_0])))), (arr_3 [i_0])));
                var_13 = (max(2593146865, (((!(3061709190 * 0))))));
                var_14 -= min((min(((~(arr_2 [i_1]))), ((-(arr_0 [i_1] [i_1]))))), ((+((max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))))));
            }
        }
    }
    var_15 = var_1;
    #pragma endscop
}
