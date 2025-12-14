/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((-((max(var_4, var_4))))) >= (((max(var_7, 226))))));
    var_16 = (5428791079324762485 >= var_5);
    var_17 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_8 [i_0 - 3] [i_0 - 3] = (max(1, ((max(24451, (arr_5 [i_0] [i_1 + 2] [i_1 + 1] [i_1 + 1]))))));
                            var_18 = max((((29 >= 52) >= (max((arr_2 [i_0 - 2]), var_2)))), (((((var_6 >= (arr_7 [i_0] [i_2])))) >= 18479)));
                            arr_9 [1] [8] [i_1] = ((((min(97, ((((arr_1 [i_0 - 1]) >= 13017952994384789106)))))) >= (((arr_0 [i_2] [i_3]) ? (((arr_0 [i_3] [17]) ? (arr_2 [i_0]) : (arr_2 [i_2]))) : 30))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_15 [i_0] [i_1] [13] [i_5 - 2] |= var_8;
                            var_19 = 25000;
                        }
                    }
                }
                var_20 = arr_1 [16];
            }
        }
    }
    #pragma endscop
}
