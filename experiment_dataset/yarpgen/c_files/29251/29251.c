/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((-437545514 ? 8462135351627053329 : 8462135351627053315))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_1] = 0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 = 8462135351627053329;
                                var_14 += ((((((var_2 > (arr_10 [i_4] [i_4 + 1] [i_4] [5] [i_4 - 1]))))) * ((var_7 ? (arr_1 [i_4 + 2]) : (arr_4 [i_4 + 2])))));
                                var_15 = (arr_10 [i_0] [i_1] [i_2] [i_0] [7]);
                                arr_13 [i_1] [i_1] [i_1] [i_1] = (((((min(31910, var_11)))) ? (((((1 ? (arr_8 [i_0] [i_1]) : (arr_3 [i_4] [i_1])))) ? ((var_12 ? 126 : 8462135351627053321)) : (((~(arr_12 [i_4] [i_3] [i_1] [i_1] [i_0] [i_0])))))) : 65534));
                            }
                        }
                    }
                    var_16 &= (((((((-(arr_12 [i_0] [i_0] [i_0] [i_1] [3] [i_2])))) ? (max(var_2, 9541681641592695563)) : (~var_9))) >= (arr_9 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2])));
                }
            }
        }
        var_17 = (max(var_17, 989106429));
    }
    var_18 = ((var_3 ? ((var_5 & (!var_11))) : (-1261579476751012058 + 48329)));
    #pragma endscop
}
