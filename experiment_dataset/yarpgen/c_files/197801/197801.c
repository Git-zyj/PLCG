/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_5));
    var_18 = (max(var_16, (var_2 != var_8)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (-(min((max((arr_1 [i_2]), 212)), (arr_8 [i_1 + 3] [i_1 + 3] [i_1 + 4]))));
                    arr_9 [i_2] [1] [i_1] [i_0] = (min(0, 241));
                    arr_10 [i_0] [i_1] [i_0] [i_0] = (((var_8 >> 15) <= var_8));
                    var_20 = ((~((var_5 ? var_7 : (((81 ? var_14 : var_13)))))));
                    arr_11 [i_0] = 32767;
                }
            }
        }
    }
    var_21 += var_15;
    var_22 = var_14;
    #pragma endscop
}
