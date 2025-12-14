/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((3 ? var_11 : var_9));
    var_13 = max(var_8, 6);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((~(((arr_3 [i_1] [i_1]) ? var_11 : 1549081928))))) && -6));
                arr_6 [i_1] = (0 || 4194303);

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_14 = (30 ? 938388788 : 938388772);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_15 = var_2;
                                arr_15 [i_0 + 1] [i_0 + 1] [i_1] [i_3] [i_4] = 13873;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = var_3;
    #pragma endscop
}
