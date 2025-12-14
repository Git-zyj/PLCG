/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_8 [i_0 + 1] [i_0 + 1] [2] [i_0] = (1420099811141369542 || 65535);
                            arr_9 [i_0] = (((((7763287669849349370 ? var_6 : (arr_3 [i_0]))) == 43707)));
                            arr_10 [i_0] [i_2] [i_1] [i_0] = var_8;
                            var_15 = ((~(arr_4 [i_3] [i_1] [i_0])));
                        }
                    }
                }
                var_16 = var_11;
            }
        }
    }
    var_17 = (((((var_1 - var_7) ? (((var_13 ? 1103841525 : 2147483647))) : ((6078879908855228790 ? 11307997115646178619 : 32767)))) - -17765125521023823846));
    #pragma endscop
}
