/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_12));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_2] = ((((((arr_3 [9] [i_0 + 1] [i_2]) ? var_5 : (arr_3 [i_2] [i_0 + 1] [i_0 + 1])))) ? (!1) : ((-(arr_3 [i_0 - 1] [i_0 - 1] [i_2])))));
                    var_14 = (max(var_14, (max(-91, var_11))));
                    var_15 *= (((~var_1) - var_7));
                }
                var_16 &= ((max(var_4, var_9)));
                var_17 = (max(var_17, (max((!var_2), (var_8 || 2305843009213693951)))));
            }
        }
    }
    var_18 = var_1;
    #pragma endscop
}
