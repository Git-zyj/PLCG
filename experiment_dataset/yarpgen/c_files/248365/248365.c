/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (+-10713268513708119258)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (~4820);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((!((!(!47288)))))));
                                arr_16 [i_3] [i_3] = ((!((!(((-(arr_6 [i_4] [i_3]))))))));
                                var_17 = ((~((~(~var_7)))));
                                arr_17 [i_4] [i_3] [i_3] [i_1] [i_0] = ((~((~(~var_7)))));
                                var_18 = (~31975);
                            }
                        }
                    }
                }
                var_19 = (max(var_19, ((((~((~(arr_5 [1] [i_1] [i_1])))))))));
                var_20 = ((~(((!(~var_7))))));
                var_21 = (((~(!var_13))));
            }
        }
    }
    #pragma endscop
}
