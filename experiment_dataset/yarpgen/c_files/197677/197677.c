/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] [i_1] = var_3;
                arr_9 [i_0] [i_0] [i_1] = ((((min(((var_3 ? 30 : var_10)), var_13))) || ((min((((var_9 || (arr_5 [i_1] [i_1])))), var_4)))));
                arr_10 [i_0] [i_1] [i_0] &= (((((var_0 ? (arr_3 [i_1]) : ((-(arr_1 [i_0])))))) ? ((((arr_6 [i_0] [i_1]) == ((((arr_4 [i_0]) ? var_15 : var_11)))))) : (((!(arr_1 [i_1]))))));
                arr_11 [i_1] = 1273796806;
            }
        }
    }
    var_16 = (((min((((var_7 ? var_13 : var_0))), var_4)) / var_4));
    #pragma endscop
}
