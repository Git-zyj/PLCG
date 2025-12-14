/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_12;
    var_19 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (((arr_0 [i_1]) | (min((arr_4 [i_0] [i_1]), 268369920))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    arr_7 [i_1] [i_1] [i_1] [i_1] = (arr_5 [3] [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_3] [i_3] [i_2 - 1] [13] [i_1] = ((!(arr_3 [i_0] [i_1])));
                                var_21 = 1455493523;
                                var_22 = 9;
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_4] = (arr_0 [9]);
                                var_23 += ((~var_16) << ((((~(arr_8 [0] [12] [i_3] [i_3] [i_1] [i_0]))) - 5871317014904170969)));
                            }
                        }
                    }
                }
                var_24 = (min(var_24, 16));
                var_25 = (((max((1728633782 ^ 673436608), (arr_10 [0] [i_1] [6] [i_0] [i_1] [i_0])))) ? (2074 & 685653830) : ((~((1 ? 855691191 : 122)))));
            }
        }
    }
    #pragma endscop
}
