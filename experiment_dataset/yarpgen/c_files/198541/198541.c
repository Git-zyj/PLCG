/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((min((min((arr_0 [i_0 - 1]), 1)), ((((arr_4 [i_0 + 1] [i_0] [i_0 - 1]) >= (arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1])))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_22 -= 12146966303070305721;
                            arr_9 [i_1] [i_1] [i_3] [i_1] |= 0;
                            var_23 += (((min((arr_7 [i_0 - 1] [i_1]), (arr_7 [i_1] [i_3 + 1]))) ? (~var_15) : (min(((min((arr_7 [i_0] [i_3]), -761212421072660904))), (min(18446744073709551608, 121))))));
                        }
                    }
                }
                arr_10 [i_0] [i_0] |= (~((var_8 - (min(27443, 12)))));
            }
        }
    }
    #pragma endscop
}
