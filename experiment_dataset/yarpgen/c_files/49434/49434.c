/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [14] = (((218 ? 23 : 126)));
                    arr_10 [i_1] [i_2] = (min((((~171) | (min(var_16, -28)))), -393216));
                    arr_11 [i_0] [i_0] [i_2] [i_0] = (((((var_17 ? ((50479 ? var_6 : (arr_5 [i_0]))) : (50493 >= 52)))) ? var_4 : (((((arr_1 [i_0] [i_0]) >= var_8)) ? (arr_1 [i_0] [i_0]) : ((218 >> (460020865 - 460020863)))))));
                    arr_12 [i_2] = -496694064;
                    arr_13 [i_0] [i_1] [i_2] = (min(((((arr_6 [i_0]) ? (arr_6 [i_2]) : (arr_4 [i_1] [i_1] [i_1])))), (arr_2 [i_1])));
                }
            }
        }
    }
    var_20 = (((((1 ? -20559 : 50479))) ? var_2 : (((max(var_3, 16383))))));
    var_21 = var_6;
    #pragma endscop
}
