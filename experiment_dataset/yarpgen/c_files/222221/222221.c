/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_1] = ((((min(-var_0, ((var_4 ? var_2 : var_5))))) ? -1669538978907747501 : (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 = 1669538978907747506;
                                arr_16 [i_0] [i_1] [i_0] [i_3] [3] [i_1] = 0;
                                var_13 = (!((var_4 >= (arr_0 [i_4 - 4] [i_1]))));
                                arr_17 [i_4] [i_1] [i_3] [i_0] [i_1] [i_0] = (arr_4 [i_4 - 3]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((min(1669538978907747514, 1)));
    var_15 = 0;
    var_16 = var_10;
    var_17 = var_10;
    #pragma endscop
}
