/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236074
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
                arr_5 [i_0] [i_1] [i_1] |= (min((arr_1 [i_0]), (min((arr_1 [i_0]), -425363176))));
                arr_6 [i_0] [i_0] = -902851580;
                arr_7 [i_0] [i_1] [i_1] = (min(((((var_13 >> var_10) || ((min((arr_3 [i_0]), var_2)))))), (arr_0 [i_1])));
                arr_8 [17] [10] [i_0] = (!(((((183 ? 8651504324608031785 : var_12)) + var_16))));
                arr_9 [i_0] [i_1] = (((min(((var_4 & (arr_2 [10] [i_1]))), (arr_0 [i_0])))) ? (((min(255, (arr_2 [i_0] [i_1]))))) : (((!(!var_5)))));
            }
        }
    }
    var_19 = var_11;
    var_20 = (((((255 ? var_0 : var_16))) == 0));
    #pragma endscop
}
