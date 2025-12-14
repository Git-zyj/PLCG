/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 &= ((-(arr_10 [i_2 - 1])));
                    var_14 ^= (((arr_0 [i_0]) + (((((arr_5 [i_0] [3]) / (arr_2 [6]))) | ((-(arr_1 [i_0])))))));
                    var_15 &= (((arr_1 [i_1]) >= (((((((arr_1 [i_0]) <= (arr_4 [i_2] [i_1] [i_1])))) - -24640)))));
                }
            }
        }
    }
    var_16 -= (!var_9);
    var_17 = var_1;
    var_18 = ((+((((var_6 <= var_5) > -var_12)))));
    var_19 = (max(var_19, (!19046)));
    #pragma endscop
}
