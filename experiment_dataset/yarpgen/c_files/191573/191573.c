/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((228 ? var_6 : var_4))));
    var_13 |= var_6;
    var_14 |= -var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_15 = (var_8 ^ var_7);
                    var_16 = var_3;
                }
                arr_7 [14] [17] [17] &= ((~(((arr_0 [i_0 + 1] [i_0]) ? (arr_4 [i_0 + 1] [14] [i_0]) : var_9))));
                var_17 = (max(((((arr_6 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1]) ? (arr_6 [i_0] [i_0 + 1] [i_0] [i_0 + 1]) : 236))), 14));
                var_18 = (min(var_18, ((min((((arr_1 [i_0] [i_0 - 1]) ? (arr_1 [16] [i_0 - 1]) : (arr_1 [i_0] [i_0 - 1]))), var_11)))));
                arr_8 [i_0] &= min((arr_6 [20] [20] [i_1] [i_1]), (((((var_0 ? 244 : 245))) ? var_7 : var_0)));
            }
        }
    }
    var_19 += ((((min(65532, var_5))) ? (((!(27 - var_3)))) : 214));
    #pragma endscop
}
