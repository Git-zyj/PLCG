/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = 1;

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_19 += ((var_10 | ((((min(var_15, var_16)))))));
                    arr_7 [19] [i_2] [i_2] = (max((((max(1, 1)) ? ((max((arr_1 [i_2]), (arr_2 [i_0])))) : (max(15961, 5982672357417673618)))), ((((max((arr_6 [i_0] [i_0]), 3917513626048628510)) < var_15)))));
                }
            }
        }
    }
    var_20 &= ((((((var_7 < ((var_16 ? var_12 : var_2)))))) == var_12));
    var_21 = var_2;
    #pragma endscop
}
