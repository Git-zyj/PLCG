/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_21 = (min((max(var_14, -4972134343150152823)), ((max(var_18, (arr_12 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]))))));
                                var_22 = (-2147483647 - 1);
                            }
                        }
                    }
                    arr_13 [i_2 + 3] [i_0] [i_0] [i_0 - 1] = var_15;
                }
                var_23 = var_18;
                var_24 = ((((arr_10 [i_0 - 2] [i_0 - 2] [i_1] [17]) ? -var_15 : (((-4972134343150152826 ? (arr_0 [i_1 + 1]) : var_9))))));
            }
        }
    }
    #pragma endscop
}
