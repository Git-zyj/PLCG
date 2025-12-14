/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((arr_0 [i_0 + 1] [i_0 - 2]) ? ((~(arr_0 [i_0 + 2] [i_0 - 2]))) : ((-(arr_0 [i_0 + 1] [i_0 - 2]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = (arr_5 [21] [i_0] [i_1]);
                    arr_8 [i_1] [15] [i_1] = ((-(~18270543102742056013)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 *= (-9223372036854775807 - 1);
                                var_18 = (max(var_18, -1));
                                arr_15 [i_1] = (arr_6 [i_0] [i_1] [i_1]);
                                arr_16 [i_1] [i_1] [i_1] [i_1] [1] = ((-(arr_9 [i_0] [i_2] [i_2] [i_3])));
                            }
                        }
                    }
                    var_19 |= ((-1 ? (+-62843) : ((-(arr_13 [i_0] [i_0 - 1] [4] [4] [i_0 - 2] [i_0] [i_0 - 3])))));
                    arr_17 [i_0] [7] [i_1] [i_2] = -71;
                }
            }
        }
    }
    var_20 = -var_0;
    var_21 &= 68;
    #pragma endscop
}
