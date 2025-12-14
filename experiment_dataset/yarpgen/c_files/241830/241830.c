/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_6;
    var_16 = var_4;
    var_17 = ((var_6 ? var_10 : ((((var_6 >> (231 - 221))) * 1))));
    var_18 = (((-(var_13 / 4681261581070180520))) * 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_19 |= 1;
                            var_20 += var_13;
                        }
                    }
                }
                var_21 = ((((((arr_4 [i_1] [i_1 - 1] [i_1 + 1]) ? (arr_6 [i_1] [i_1]) : 249))) ? (((arr_3 [i_1] [i_1] [i_1]) ? 1 : var_2)) : (((0 || (arr_10 [i_1] [i_1] [i_1] [i_1]))))));
                var_22 = (max(var_22, (((((((arr_1 [i_1 + 1]) < (arr_8 [i_1 - 3] [i_1 - 2] [i_1 + 1] [i_1 - 3]))))) > ((1 - (arr_3 [i_0] [i_1] [0])))))));
            }
        }
    }
    #pragma endscop
}
