/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = ((~(((((~(arr_3 [i_1])))) ? (((arr_3 [i_1]) & var_9)) : -5940005716546039211))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_14 = -5940005716546039211;
                                var_15 = ((~((~(arr_6 [i_2 - 3] [i_2 - 1] [i_0 - 4])))));
                                var_16 += var_2;
                            }
                        }
                    }
                }
                var_17 += (!4900908272946911636);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    var_18 = (max(var_18, ((min(5940005716546039210, 12599142813136491914)))));
                    var_19 = (min(1, -163));
                    var_20 = -12599142813136491933;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_21 -= ((!((((250 || var_7) ? (arr_11 [i_5 - 2] [i_5 - 3]) : (!-9))))));
                                var_22 = (982623271 && 1094449144);
                                var_23 += (arr_15 [i_7] [12] [2]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
