/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((((min((max(180, 826979293)), (-5 & var_4)))) && (((var_6 % (min(var_2, -65)))))));
    var_16 = var_6;
    var_17 = ((var_4 ? ((232 ? 3561696841 : var_1)) : (((max((var_9 >= 2051346370087776704), (var_3 < var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 ^= (((((arr_0 [i_1]) & (arr_0 [i_1])))) ? 88 : (((min((arr_3 [i_0] [i_0] [i_1]), (arr_3 [i_0] [i_1] [i_0]))) % 57)));
                arr_5 [13] [13] = ((((((62 >> (114 - 99))))) ? ((max((1 < var_1), (min((arr_1 [2] [6]), (arr_4 [i_0] [i_0])))))) : (arr_1 [i_0] [i_1])));
                arr_6 [16] = (max((((arr_3 [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : 1133718339)), (((arr_0 [i_1]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_0 [i_1])))));
            }
        }
    }
    #pragma endscop
}
