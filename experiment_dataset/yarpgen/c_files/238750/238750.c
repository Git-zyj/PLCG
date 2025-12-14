/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = (((max(((var_5 % (arr_3 [i_0] [i_1]))), ((max((arr_1 [i_0]), (arr_5 [i_0] [i_0] [i_0] [i_1])))))) == var_5));
                    var_12 = (((((~(min(var_5, (arr_1 [i_0])))))) ? var_9 : ((~(((arr_4 [i_0] [i_1] [i_2]) ? var_1 : var_6))))));
                    var_13 = (max((((-(arr_6 [10])))), (arr_4 [i_0] [i_0] [i_0])));
                    var_14 = ((((((arr_3 [i_1 - 3] [i_1 - 3]) ? (arr_3 [i_1 + 1] [i_1 + 1]) : (arr_3 [i_1 - 2] [i_1 - 1])))) ? ((((!(arr_3 [i_1 - 1] [i_1 - 1]))))) : (arr_3 [i_1 - 2] [i_1 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
