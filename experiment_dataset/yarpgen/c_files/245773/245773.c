/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(0, 70))) & var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (min((arr_6 [12] [i_1] [i_1] [5]), var_9))));
                    var_12 = ((((!(!var_2)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            {
                arr_16 [i_3] [i_3] [i_4 - 1] = var_4;

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_13 = ((~((((arr_12 [i_5] [i_3]) > var_6)))));
                    var_14 = arr_12 [6] [i_5];
                }
            }
        }
    }
    #pragma endscop
}
