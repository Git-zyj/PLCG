/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [5] [i_0] = (((~4095) && (((((-(arr_3 [18] [i_1]))) ^ (~-4095))))));
                arr_6 [i_0] [i_1] [i_1] = (min(((!(arr_2 [i_1 + 4] [i_1 + 3]))), ((min(-4095, 4102)))));
                arr_7 [i_0] [i_1] = ((~(((((arr_2 [i_0] [i_1]) ? (arr_2 [i_0] [i_0]) : -4095)) * (arr_1 [i_0 - 3])))));
                arr_8 [i_0] [i_1] = ((-(((arr_1 [i_0 - 2]) ? (arr_1 [i_0 + 4]) : 4102))));
            }
        }
    }
    var_17 = ((((min((var_15 - 19039), -var_13))) / var_12));
    var_18 = (!-4095);
    #pragma endscop
}
