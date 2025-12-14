/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 = (max((max(var_2, (max(var_10, 46816)))), (arr_14 [7] [5] [7] [i_3] [i_3] [i_3])));
                                arr_15 [i_1] [i_3] [i_1] [i_3] [i_1] [i_1] [i_0] = (((((var_1 ? (24576 + 63657) : (~18719)))) ? ((((max(var_9, (arr_11 [i_3] [i_3] [15] [i_3]))) < 46816))) : var_6));
                            }
                        }
                    }
                }
                var_13 = (((((((arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]) || 46816)))) >= (min((arr_12 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1]), (arr_12 [1] [i_0 - 1] [i_0 - 1] [i_0 + 1])))));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_14 = ((((((arr_17 [i_0 + 1] [i_0 - 1] [i_1] [i_5]) ? (arr_17 [i_0] [i_1] [i_5] [i_5]) : (arr_14 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_5] [i_0 + 1])))) || (((var_9 ? (arr_14 [i_0] [i_1] [22] [i_1] [i_0] [i_0]) : var_9)))));
                    var_15 = (max((((arr_16 [i_1] [i_0 + 1]) ? (arr_16 [i_1] [i_0 + 1]) : var_0)), ((min(var_4, (arr_16 [i_1] [i_0 - 1]))))));
                }
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    var_16 += (min(((((var_7 << (((arr_0 [i_6]) - 31544)))) / (((var_6 + 2147483647) >> (((arr_9 [i_1]) + 17395)))))), (min((arr_18 [i_6] [i_6] [i_6] [23]), ((18700 >> (46816 - 46796)))))));
                    var_17 = (((((((var_3 ? var_4 : 46833))) && ((min(var_2, var_1))))) || (arr_10 [i_0] [i_6] [i_6] [i_6 + 3] [i_6 + 3])));
                    arr_20 [i_1] = ((var_10 ? 255 : ((-((max(254, (arr_14 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))))))));
                    arr_21 [i_1] [i_1] [i_1] = ((-46816 ? (1 <= 8338294092667660526) : var_3));
                }
            }
        }
    }
    #pragma endscop
}
