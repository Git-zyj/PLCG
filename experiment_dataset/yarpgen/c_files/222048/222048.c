/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 ^= ((-((min(8191, var_6)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_10 [i_0 - 1] [i_0 - 1] [i_2] [i_2] [i_2] [i_4] [i_4] = -667237631;
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = (arr_1 [i_2]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 21;i_7 += 1)
            {
                {
                    arr_19 [i_5] [i_5] [i_7] = (max(var_4, ((((max(57345, (-2147483647 - 1)))) * ((var_3 ? 12860320589818005305 : -646930318))))));
                    var_15 = -1976890789;
                    var_16 += ((-(max(5586423483891546310, (arr_18 [i_6] [i_6] [7])))));
                    arr_20 [i_7 - 1] [i_5] [i_5] [i_5] = var_8;
                }
            }
        }
    }
    #pragma endscop
}
