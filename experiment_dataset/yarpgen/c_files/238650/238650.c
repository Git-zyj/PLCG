/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = var_4;

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_16 = ((((((var_3 ? (arr_1 [i_0]) : var_4))) - (var_10 - var_4))));
                    arr_8 [i_2] = (min(((((var_12 | (arr_4 [i_0] [i_1] [i_2]))) / (((var_8 ? 17907 : (arr_3 [i_2])))))), (min((arr_2 [i_1 - 1] [i_1 - 2]), (arr_7 [i_2] [i_1 - 1] [i_1 + 1])))));
                    var_17 = 47273;
                }
            }
        }
    }
    var_18 = var_8;
    var_19 = var_12;
    var_20 = var_6;
    #pragma endscop
}
