/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] = ((65535 ? (arr_1 [i_0]) : ((var_11 ? (arr_8 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3]) : ((var_6 ? (arr_4 [i_0] [19] [i_2] [i_3]) : var_6))))));
                            arr_10 [i_0] = (min(1, -22610));
                            arr_11 [i_0] = arr_5 [i_0] [1];
                        }
                    }
                }
                var_13 += (~(min(3152273356, 65529)));
                var_14 = var_8;
                var_15 = ((var_1 ? (!6962219212965524025) : 0));
                arr_12 [i_0] [i_0] = (((~65535) / 4294967289));
            }
        }
    }
    var_16 &= (13941159937912476923 ? 2029727611 : 65535);
    #pragma endscop
}
