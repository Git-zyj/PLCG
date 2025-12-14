/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_9;
    var_12 = 6047367300239144463;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_13 = var_6;
                        var_14 = var_6;
                        var_15 = (arr_4 [i_2 - 2] [i_2 - 2] [i_2 - 2]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_16 = (((arr_10 [i_0] [i_0]) || (!6047367300239144450)));
                                var_17 |= (arr_6 [i_0]);
                                var_18 = var_4;
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_19 = var_9;
                        var_20 = (arr_11 [i_5] [i_4]);
                        var_21 = (!16948019471694910912);
                    }
                    var_22 = (min(var_22, (arr_14 [i_0] [i_0] [i_5])));
                    var_23 = (min(var_23, (((!(arr_17 [i_0] [i_4] [i_4] [i_0] [i_5]))))));
                    var_24 = (arr_13 [i_5] [i_4] [i_5]);
                }
            }
        }
    }
    #pragma endscop
}
