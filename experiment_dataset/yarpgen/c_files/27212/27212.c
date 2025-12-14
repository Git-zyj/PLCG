/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (274071813865577220 * 18172672259843974395);
        var_10 += var_6;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_15 [i_2] [i_2] = ((1 ? 18172672259843974404 : 35741));
                            var_11 -= (((-127 - 1) > -7));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_12 += -1211754997;
                            var_13 += (((arr_1 [i_6 - 2]) ^ (((~(arr_10 [i_1] [i_1] [i_1]))))));
                            var_14 += (arr_4 [i_2] [i_6 - 2]);
                            arr_21 [i_1] [11] [i_1] [i_2] = (max(4294967295, 224));
                            var_15 = (max(((14 ? 47 : -77)), ((~(arr_11 [i_1] [i_6 - 1] [i_5 + 1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
