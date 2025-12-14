/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 43725;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_21 *= min(1, 1);
                    arr_8 [i_0] [i_1] [i_2] = (max(-var_17, (min((arr_6 [i_0] [i_0]), ((min(var_12, 6)))))));
                    var_22 = (arr_0 [i_0 + 2]);
                }
                arr_9 [i_1] = max((((((((arr_2 [i_0]) | (arr_0 [i_1])))) && (1 != 44559)))), (~var_0));
                var_23 = (min(var_23, (((((-(arr_2 [i_0 - 2]))) << (((arr_3 [i_0 - 3]) / (arr_3 [i_0 + 1]))))))));
            }
        }
    }
    var_24 = (((((var_17 << ((((min(1, -1))) + 4))))) / ((((max(var_4, -25714))) ? (var_17 / var_8) : (min(var_4, -6371535061473674175))))));
    var_25 = ((((((var_17 ? var_9 : var_6)))) ? (min(883435237, var_4)) : var_10));
    #pragma endscop
}
