/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((max(((max(62, 28307))), ((var_8 ? var_6 : var_5)))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_11 = var_0;
                        arr_15 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1] = var_3;
                    }
                    var_12 = (((min(((var_7 ? 43015 : 1)), (arr_4 [i_0] [i_0] [i_0])))) | 6397500914095126421);
                }
            }
        }
    }
    var_13 = min(((5525374413715074684 ? -1 : (max(-28307, var_10)))), ((((var_9 == -5525374413715074684) == (-8 == var_6)))));
    #pragma endscop
}
