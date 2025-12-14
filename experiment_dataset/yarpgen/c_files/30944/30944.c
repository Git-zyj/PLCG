/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = ((!var_1) - -867709542);
                    var_13 = (((~(!var_0))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_13 [i_0] [0] [13] [13] [i_2] [13] [i_0] = (!(~-75));
                            var_14 |= ((-((-(((859601720 <= (arr_2 [i_1] [i_2] [i_4]))))))));
                            var_15 = ((!(((+(max((arr_4 [i_1] [i_1] [i_0]), 9001309834040831112)))))));
                            var_16 = ((((~((1 | (arr_6 [i_0] [i_0] [4]))))) < (max((~var_0), (!1)))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_17 = (min((!-var_8), ((-(arr_3 [i_0] [i_0] [i_3])))));
                            var_18 = (((((!(arr_10 [i_5] [i_0] [i_2] [i_1 - 2] [i_1] [i_0] [i_0]))))));
                        }
                        var_19 = ((!(((-(arr_9 [i_3]))))));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_20 = (max(var_20, (((-((((((!(arr_7 [i_0] [i_2])))) > (!var_0)))))))));
                        var_21 = ((-(max(-var_4, var_4))));

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_22 = (((~var_1) ^ ((((var_1 <= 0) > (0 ^ 246))))));
                            var_23 = ((~(((((!(arr_6 [i_1] [i_1] [i_7]))) || var_1)))));
                        }
                        var_24 = ((!((!(~var_6)))));
                        var_25 |= (~(min((!1), (max(var_1, var_4)))));
                    }
                }
            }
        }
    }
    var_26 += ((!(--32645)));
    var_27 -= ((!(+-3108918570094782615)));
    #pragma endscop
}
