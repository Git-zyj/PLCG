/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 = (((arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? (((arr_7 [i_1 + 3] [i_1 - 1]) * (arr_7 [i_1 + 2] [i_1 - 1]))) : (((arr_7 [i_1 - 1] [i_1 + 1]) ? 43 : (arr_7 [i_1 + 2] [i_1 - 1])))));
                    var_14 += ((((((arr_2 [i_0] [i_0] [1]) << (((min(-1216745109, (arr_2 [i_0] [18] [i_0]))) - 3078222164))))) ? ((((var_11 ? 177481420 : (arr_6 [i_0] [i_0]))))) : ((min((arr_5 [i_0]), (arr_5 [i_2]))))));
                    var_15 = (((((-(((arr_3 [i_1]) ? var_0 : (arr_0 [i_0])))))) ? (arr_1 [i_0] [i_1]) : (min(((var_2 ? -4303687197225380414 : -4798505744374494518)), ((min(1, var_7)))))));
                    var_16 = (arr_5 [i_2]);
                    var_17 -= (((arr_3 [i_1 + 1]) ? (arr_6 [i_0] [18]) : var_8));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_12 [i_0] [i_3] [i_3] [10] = arr_3 [i_0];
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_18 = (min((((-(arr_9 [i_5] [i_3])))), var_1));
                                var_19 = (max(var_19, ((min(((((arr_13 [i_0] [i_3] [i_4] [i_0]) ? (arr_9 [i_3] [i_5]) : var_9))), (((arr_8 [i_0] [i_4]) ? (max(1216745106, var_6)) : 232)))))));
                                var_20 += (((((-35 <= (((arr_1 [i_0] [i_4]) ? (arr_5 [15]) : 16))))) < 65522));
                                arr_17 [2] [i_4] [21] = ((((max(var_3, (min((arr_1 [i_0] [i_0]), (arr_9 [i_3] [i_5])))))) ? (arr_9 [i_0] [i_3]) : (((min(4294705152, (arr_16 [i_3 + 1] [i_0]))) ^ ((((var_3 && (arr_2 [i_5] [i_5] [i_5])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((((min((~var_5), ((min(-2985, var_1)))))) % var_4));
    #pragma endscop
}
