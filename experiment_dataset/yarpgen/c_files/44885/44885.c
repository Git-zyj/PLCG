/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((-(~215))), var_12));
    var_15 = ((!(((~(-626255099 & 1068720788077251502))))));
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_9 [i_2 - 1] [6] [i_3] [12] = (~(min(var_12, 17684371516854382247)));
                            var_17 &= max(195, ((-(arr_4 [i_2 - 2] [i_1] [i_0 - 2]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_18 = ((((~(arr_2 [i_5]))) >> (((arr_10 [i_4 + 1] [i_1]) - 16))));
                            arr_14 [0] [0] [i_4 + 1] = ((+((9223372036854775807 ? (arr_5 [i_0] [i_0 + 2] [i_0]) : (arr_13 [i_1] [i_1] [8] [i_1])))));
                            var_19 = ((!((((arr_12 [i_4 + 1] [i_4 + 2] [i_4 + 2]) ? (arr_12 [i_4 + 1] [i_4 + 2] [i_4 + 2]) : (arr_12 [i_4 + 1] [i_4 + 2] [i_4 + 2]))))));
                        }
                    }
                }
                arr_15 [i_0] [i_0] = ((-((max(var_5, var_8)))));
            }
        }
    }
    #pragma endscop
}
