/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((!var_16) ? var_10 : var_6)))));
    var_19 = ((var_2 - ((var_0 ? var_10 : var_15))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] = var_1;
                    var_20 = (-(arr_5 [i_0] [i_0 + 1] [i_0] [i_0]));
                    var_21 = ((arr_6 [i_1]) ? ((((max(17855, var_8))) ? var_1 : (arr_3 [i_0] [i_0 - 1]))) : ((min(var_14, (arr_2 [i_0] [i_1])))));
                    var_22 &= ((((((1 ? var_16 : var_2)))) / (arr_3 [i_0 - 1] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
