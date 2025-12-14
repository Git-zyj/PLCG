/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((~var_6), ((var_6 ? var_9 : var_2))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        var_13 ^= (min(var_7, ((((var_4 - var_8) < (((var_11 ? var_10 : var_2))))))));
                        arr_10 [i_0] [7] [i_1] [i_3] [22] = ((!((((arr_9 [i_0]) ? var_10 : (arr_9 [i_3 + 2]))))));
                        var_14 = (2047 | 17750605501391498485);
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_14 [i_0] [i_0] [i_0] = (arr_4 [i_0]);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_24 [i_0] [i_4] [21] [i_6] [19] = (((var_7 || (arr_7 [i_0] [i_6]))));
                            arr_25 [i_0] [i_4] [i_5] [19] [19] = ((((max((((20773 ? 44762 : 44762))), var_5))) ? ((((((arr_2 [i_0] [i_0]) < var_8))) & (arr_15 [i_0] [i_0] [i_0]))) : ((((arr_16 [i_0] [i_0] [i_0] [i_0]) < 2486219002)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
