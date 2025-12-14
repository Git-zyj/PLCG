/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = (arr_5 [1] [i_0] [9] [i_2]);
                    var_15 = (((((89 ? 29 : 1))) < ((min((arr_6 [i_0] [1]), (arr_2 [i_1]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            {
                var_16 = (arr_5 [i_3] [i_3] [i_4 - 1] [i_4 + 1]);
                arr_13 [i_4] [i_4] = (((((+(((arr_4 [i_3] [i_4 - 1]) - 1))))) ? ((((var_11 ? (arr_10 [i_3] [i_4 - 1]) : 1)) + (arr_0 [20] [i_3]))) : 1));
                arr_14 [i_4] = var_3;
            }
        }
    }
    var_17 = ((-var_4 & 1187234902) & (1081021056 == 19));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                var_18 = ((-(arr_2 [i_5])));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_19 = (((min(-2424, var_10))) ? (((((min((arr_18 [i_5] [i_6]), (arr_24 [i_5])))) <= 1141811623683703260))) : 313322639);
                            var_20 = (arr_5 [8] [8] [1] [8]);
                            var_21 = (min(var_21, (((var_10 ? ((((min(-14783, var_14)) ^ 1))) : var_8)))));
                            arr_25 [i_6] [i_8] = (max((~32767), (!1)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
