/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((((max(var_0, (arr_8 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 + 2]))) - (((var_4 < (arr_4 [4] [i_1] [i_2])))))))));
                    var_12 = ((((-(~4288308340685475130)))) ? ((((arr_4 [i_1 + 2] [i_2] [i_0]) <= (arr_4 [i_1 - 1] [4] [3])))) : ((((((!(arr_1 [i_0])))) > var_3))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [2] [i_0] [i_0] = 278449116;
                                arr_15 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0] = var_9;
                                var_13 = -2954055330905138117;
                                var_14 = (min(var_14, ((((arr_5 [i_0] [i_0] [i_0]) / (((((-695463251 ? var_7 : 15463383601954148126))) ? -787107684853826216 : 16380)))))));
                                var_15 = arr_1 [i_1];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
