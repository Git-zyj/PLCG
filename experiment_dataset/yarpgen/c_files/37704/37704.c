/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= 6996939746878762936;
    var_11 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = 127;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 = (((max((max(2147483644, (-9223372036854775807 - 1))), (arr_7 [i_0]))) + (arr_7 [i_0])));
                                var_14 = (((arr_7 [i_0]) == ((-((min(-18859, (arr_9 [i_0] [i_0]))))))));
                            }
                        }
                    }
                    var_15 -= ((~((((arr_7 [6]) == ((var_9 ? (arr_15 [i_0] [i_0] [i_0] [i_1] [i_2]) : 64)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                var_16 = 1073377885;
                arr_22 [i_5 - 2] [i_6] [i_5] = ((9223372036854775780 ? (~9223372036854775807) : 25146));
            }
        }
    }
    #pragma endscop
}
