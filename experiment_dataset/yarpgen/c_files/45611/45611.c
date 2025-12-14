/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min((((var_2 ? ((min(39269, var_13))) : ((min(var_11, var_14)))))), var_4);
    var_17 = (max(var_17, var_6));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = -1408534793;
                var_19 = ((!(arr_2 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] = min(((((~1753) != 1726))), (min((arr_2 [i_1] [i_1 + 2]), 63809)));
                            arr_13 [i_0] [i_1] [7] [i_0] [i_1] [i_0] = var_1;
                            arr_14 [i_1] [i_1] = (!31648);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
