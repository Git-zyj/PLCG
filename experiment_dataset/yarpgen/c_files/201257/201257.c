/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((((!(((var_8 ? var_3 : 2884391375)))))), var_2));
    var_12 = (~-16383);
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_14 = (((((!((((arr_0 [i_0 + 2] [i_0]) ? var_10 : 0)))))) | (0 > 0)));
                            arr_12 [i_0] [i_1] [i_0] = (((!var_1) ? (var_5 - var_8) : var_1));
                        }
                    }
                }
                var_15 = (min(((((((arr_6 [i_1]) & 5))) ? (arr_5 [i_0 + 4]) : 18446744073709551600)), ((((((var_2 ? var_7 : var_2))) != ((var_10 ? (arr_8 [i_0] [i_0]) : var_9)))))));
            }
        }
    }
    #pragma endscop
}
