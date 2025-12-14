/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_21 = (min(((((arr_6 [i_0] [i_1]) == (((-6055801545937286615 == (arr_6 [i_1] [i_1]))))))), 129024));
                            arr_11 [i_3] [i_3] [i_3] [2] &= (12761295311021795864 % 18446744073709551615);
                        }
                    }
                }
                arr_12 [i_0] [i_1] = ((((((((arr_9 [i_0] [i_0] [i_0] [i_0]) & (arr_5 [i_1] [i_1] [i_1])))))) >= (((((arr_5 [i_1] [i_1] [i_0]) ? 1 : 126)) << (var_10 + 4496005223444974081)))));
                arr_13 [i_0] [i_1] [i_1] = 32;
            }
        }
    }
    var_22 = var_9;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {
            {
                var_23 = (arr_17 [i_4] [i_5]);
                arr_18 [i_4] = ((min((arr_14 [i_4] [i_5]), (arr_16 [i_4] [i_4] [i_4]))));
            }
        }
    }
    #pragma endscop
}
