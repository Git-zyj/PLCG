/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((((arr_3 [i_0]) * (arr_3 [i_0])))) ? ((min(1, var_1))) : (((!(var_2 == 1))))));
                var_11 = (((((((~(arr_3 [i_0])))) ? ((max(var_3, (arr_5 [i_1])))) : (arr_4 [i_0] [i_1 + 1]))) - ((var_8 >> ((max(var_8, (arr_3 [i_0]))))))));
                var_12 *= ((((((var_0 + (arr_1 [1]))) + ((var_8 ? (arr_2 [1]) : 1)))) - ((min(0, 1)))));
                var_13 = arr_4 [i_0] [i_1 + 1];
            }
        }
    }
    var_14 *= (((((!var_6) >= var_9)) ? (((max(var_5, var_6)))) : (var_10 << 0)));
    var_15 = var_10;
    #pragma endscop
}
