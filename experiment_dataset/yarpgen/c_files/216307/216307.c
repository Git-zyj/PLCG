/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [14] [i_0] = (((max((arr_1 [i_0]), ((max(var_8, (arr_1 [i_0])))))) * (((((arr_2 [i_1] [i_1] [i_1]) / var_7)) * (((arr_0 [i_0] [17]) * 0))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_10 = (((((arr_2 [3] [i_1] [i_2]) ? (arr_6 [i_0] [i_1] [i_2 - 2]) : (arr_6 [i_0] [i_0] [21]))) <= (arr_7 [i_3] [i_1])));
                            arr_11 [14] [14] [i_1] [14] = min(1, -27);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_17 [i_4] [1] [15] [9] = (max(((min((arr_6 [i_0] [i_0] [i_0]), (arr_1 [i_0])))), ((var_1 & (arr_0 [i_0] [13])))));
                            arr_18 [i_4] [i_4] [i_1] [i_4] = (((max(var_4, (max((arr_10 [i_0] [i_0] [17] [i_5]), (arr_5 [i_0] [1] [1] [12])))))) * (min((arr_6 [14] [14] [14]), (min(var_1, 5663906578130729698)))));
                            arr_19 [9] [9] [i_4] [i_4] [i_4] = (max((arr_9 [i_0] [i_1] [i_1] [i_1]), (arr_5 [i_0] [13] [i_1] [i_0])));
                        }
                    }
                }
                arr_20 [i_0] [12] = (max((7 >= 2842419880767596444), -9223372036854775797));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    var_11 = (min((arr_16 [i_7]), 18446744073709551615));
                    var_12 = (((((arr_27 [i_8] [i_7] [i_7] [i_6]) & 0)) | ((~(17348 | 31)))));
                }
            }
        }
    }
    var_13 = (min(var_5, var_2));
    #pragma endscop
}
