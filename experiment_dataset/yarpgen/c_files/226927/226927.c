/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_7;

                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    var_14 -= ((-((((248 ? var_4 : (arr_3 [4]))) & var_4))));
                    var_15 *= max(61, 195);
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            var_16 = ((0 + ((((arr_10 [i_1 + 2] [i_1 + 2] [i_1]) >= (arr_7 [i_3] [i_4 - 1] [i_3]))))));
                            arr_16 [8] [i_1] [i_1 + 1] [6] [i_1 + 1] [i_1] = ((((((-(arr_7 [i_3] [i_1] [0]))) / 61)) / 61));
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_19 [i_0] [2] [i_0] = (~((((((arr_15 [i_0] [i_0] [i_0]) - var_6))) ? var_7 : 1397562531639412984)));
                            var_17 *= 8;
                        }
                        var_18 = (max((max(10285374132019641889, ((var_10 ? 76 : 10623608105043845653)))), (((((var_2 ? var_3 : 247))) ? var_5 : (((arr_8 [i_0] [i_1 - 1] [i_3] [i_0]) ? var_10 : var_7))))));
                        var_19 = (min(var_19, (((((~(((arr_1 [i_0]) ? var_13 : 15097548255566315004)))) < 12441382664214887656)))));
                    }
                    arr_20 [2] &= ((~((((arr_14 [i_0] [i_0] [i_3] [i_0] [i_3]) != -247)))));
                }
                arr_21 [i_0] = ((min(12441382664214887656, var_5)));
            }
        }
    }
    var_20 = ((var_9 >> (var_11 - var_5)));
    #pragma endscop
}
