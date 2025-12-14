/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((3 % 15123220415365129275) ? 0 : var_3));
    var_19 = (max(5267253340992133041, 15123220415365129271));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] = (((max((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_1]))) <= (arr_1 [i_1] [i_1])));
                var_20 = var_11;
                var_21 = ((var_13 >> (((arr_3 [i_1] [i_1] [i_1]) - 532260135))));
                var_22 = (max(var_22, ((((((((arr_3 [i_0] [i_0] [i_0]) ? var_12 : (arr_2 [i_0] [i_1])))) ? (arr_1 [i_0] [i_0]) : (((arr_3 [i_1] [i_0] [i_0]) ? (arr_1 [i_0] [i_1]) : var_12))))))));
            }
        }
    }
    #pragma endscop
}
