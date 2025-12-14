/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_0] [i_0] [i_0] = (((min(30, 4503599627239424)) < 251));
                                arr_15 [i_4] [i_0] [i_4] = (arr_1 [i_0]);
                            }
                        }
                    }
                }
                arr_16 [12] &= var_5;
                arr_17 [i_0] = var_6;
                var_13 = ((~(((2367898131953896948 == 2869206107) ? (arr_12 [3] [2] [i_0] [i_0] [2] [i_1]) : var_9))));
            }
        }
    }
    var_14 = (((((var_5 ? 3617687816729119863 : 108))) >> var_7));
    #pragma endscop
}
