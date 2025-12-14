/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_16 ^= ((((max(-1, (arr_1 [i_0 - 1] [i_0 - 1])))) && ((!(20154 || 1)))));
        var_17 = (max(var_17, (arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (arr_4 [i_2] [i_2] [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_19 = -28;
                                var_20 = (max(var_20, var_14));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1] = (((((arr_2 [i_4] [i_4 - 2] [i_0 - 1]) & (max((arr_13 [i_3]), -497)))) < (((-500 || ((!(arr_4 [3] [1] [i_2] [3]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (var_4 - var_6);
    #pragma endscop
}
