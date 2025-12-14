/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] &= (min((max((((var_2 ? var_7 : (arr_3 [i_1])))), (arr_4 [i_1] [i_0] [i_0]))), (((var_10 && var_10) ? ((max((arr_2 [i_1]), (arr_1 [i_1])))) : (min(14473896648478449119, (arr_2 [i_1])))))));
                var_12 = (((((max(-4868, 4867))) ? (min((arr_0 [5]), 14473896648478449100)) : 109)));
            }
        }
    }
    var_13 = (((((-((var_9 ? var_10 : var_2))))) ? ((((min(var_10, -95))) ? (var_5 - var_8) : var_6)) : (((min((var_0 < var_7), var_5))))));
    var_14 = (max(((max(var_11, (((var_11 ? var_7 : var_7)))))), var_6));

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_15 = (max(var_15, (((((max((-4865 + 3972847425231102520), 3009580963710390244))) ? (max((arr_0 [i_2]), (arr_5 [i_2]))) : ((((max((arr_8 [i_2]), (arr_8 [i_2])))) ? (var_7 + 0) : (arr_7 [i_2]))))))));
        var_16 &= ((-(arr_2 [i_2])));
        arr_10 [i_2] [i_2] = ((-4860 ? 1 : 4834736571872498477));
    }
    var_17 = var_4;
    #pragma endscop
}
