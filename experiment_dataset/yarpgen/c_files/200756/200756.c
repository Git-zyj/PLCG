/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = max(((17491 ? var_12 : ((24399 & (arr_0 [i_0]))))), var_7);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, (((!(((max((arr_7 [i_2] [i_1]), var_1)) != var_5)))))));
                            arr_11 [i_2] [i_2] [i_2] = 26212;
                            arr_12 [i_0] [i_1] [i_2] = var_3;
                        }
                    }
                }
                arr_13 [i_0] [i_1] [i_1] = var_1;
            }
        }
    }
    var_15 = var_11;
    var_16 = ((max(var_6, (max(var_2, var_3)))));
    #pragma endscop
}
