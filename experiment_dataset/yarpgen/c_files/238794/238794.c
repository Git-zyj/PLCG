/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((~((-((max(var_17, -49)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_20 ^= 1503935441;
                        var_21 = ((!(((arr_8 [i_0] [i_2 + 3]) || (arr_8 [17] [i_2 - 2])))));
                    }
                    var_22 = (max(((((arr_3 [i_2]) ? (arr_5 [i_1]) : (arr_4 [i_2 + 1] [i_0] [i_0])))), (((!(((var_15 ? 255 : -8438168733361040321))))))));
                }
                for (int i_4 = 4; i_4 < 23;i_4 += 1)
                {
                    var_23 = var_15;
                    var_24 = ((var_16 << (((((((49 ? 74 : -96))) ? (((arr_10 [13] [i_1] [i_4]) ? 38 : 1640197196)) : (!16383))) - 1640197188))));
                    arr_11 [i_4 + 2] [i_1] = (arr_8 [i_0] [i_0]);
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    arr_14 [16] [i_1] [i_1] [i_5] = ((-(min(-47, (arr_4 [i_0] [i_0] [i_0])))));
                    arr_15 [i_0] [i_0] [i_1] [i_0] = (max((max((max(16054632731964008012, -37)), ((max((arr_1 [i_0]), 46228))))), var_5));
                    var_25 &= (arr_6 [i_0] [i_0] [i_0]);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_26 = ((-8438168733361040317 ? (!46213) : (arr_13 [i_1] [i_1] [i_6])));
                    arr_18 [i_0] [i_0] [i_0] = ((!(((47209 ? 16054632731964008012 : 28903)))));
                    var_27 = ((!(arr_5 [i_6])));
                    var_28 = (-127 - 1);
                }
                var_29 = ((-((max(127, 51191)))));
                var_30 = ((~(max(-var_11, (arr_2 [i_1] [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
