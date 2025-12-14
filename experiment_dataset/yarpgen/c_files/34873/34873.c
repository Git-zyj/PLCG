/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [2] [i_3 + 1] = (min(((min((5945042470423362317 >= -24729), (max(0, -14438))))), ((var_9 ? (arr_0 [i_4] [i_2]) : 32764))));
                                var_18 = (0 ? 16874946415306184991 : 66977792);
                                arr_13 [i_0 + 2] = ((((((((arr_6 [i_4] [i_3 + 1] [21] [5] [19]) ? (arr_10 [i_0] [i_1] [14] [i_3] [i_4]) : 17767)) > ((((arr_2 [i_4]) + 23))))))) ^ ((-5666158967698363073 ? var_6 : ((4294967295 ? var_0 : var_2)))));
                            }
                        }
                    }
                }
                arr_14 [0] [i_1] [15] &= ((((((~(arr_11 [i_1] [i_1] [i_0] [i_0] [i_1] [i_1] [i_0]))))) >> (65535 - 65523)));
            }
        }
    }
    var_19 = (((((var_1 ? (var_3 | 67043328) : (~4988094650414435988)))) ? (172 + -6696659597002728703) : (((max(var_2, var_12)) | (!var_6)))));
    var_20 = 85;
    var_21 ^= var_13;
    #pragma endscop
}
