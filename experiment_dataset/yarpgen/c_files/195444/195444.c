/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = -148245032;
                var_13 = (max(var_13, (arr_0 [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_14 = 0;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_16 [i_2] [i_2] [i_2] [i_4] [i_2] = ((-6698 ? 1 : 33479));
                                arr_17 [i_4] = (max((arr_7 [i_2] [i_3 - 1] [i_4]), (arr_7 [i_3 + 3] [i_3 - 1] [i_3 - 1])));
                                var_15 = var_0;
                            }
                        }
                    }
                    var_16 = ((127 ? 32767 : (min((arr_6 [i_4] [i_3] [i_4]), (arr_11 [i_3 - 1] [i_3 + 2])))));
                }
            }
        }
    }
    #pragma endscop
}
