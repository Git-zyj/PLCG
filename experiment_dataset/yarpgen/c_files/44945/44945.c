/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-var_4 == (-2069713471514177085 | 55587)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 ^= 6404607817928627760;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = -8278854386869693099;
                                arr_13 [i_0] [i_0] [i_0] [i_4] = ((-8278854386869693104 ? 13498373762805688040 : 8278854386869693104));
                                arr_14 [i_0] [i_1] [i_4] [i_3] [i_4] = ((((((((arr_11 [i_0] [3] [i_3] [i_3] [i_3]) ? var_3 : (arr_3 [i_0] [i_0])))) ? ((9948 ? 8278854386869693115 : -8278854386869693099)) : var_8)) - 65526));
                                var_13 = (min(55590, -8278854386869693107));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_14 |= (arr_18 [i_5]);
                    var_15 = (((arr_21 [i_5] [i_5] [i_6] [i_7]) != (min((arr_21 [i_7] [i_7] [i_6] [i_5]), -8278854386869693099))));
                    var_16 &= var_4;
                }
            }
        }
    }
    #pragma endscop
}
