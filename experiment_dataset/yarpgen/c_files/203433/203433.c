/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (max(20639, 20638));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = (min((((arr_11 [i_1 - 1] [i_1 + 1]) ? (arr_2 [i_1 - 1] [i_1 + 1] [i_1 + 1]) : (arr_11 [i_1 + 1] [i_1 + 1]))), (arr_2 [i_1 - 1] [i_1 + 1] [i_1 + 1])));
                                var_19 = (max(var_19, ((min((511 * -487848027), ((((arr_10 [i_0] [i_1 - 1] [i_1 - 1] [i_2 - 4]) ? (arr_10 [i_0] [i_1 + 1] [i_1 - 1] [i_4]) : (arr_4 [i_0] [i_1 - 1] [i_4])))))))));
                            }
                        }
                    }
                    var_20 &= ((((-20641 ? ((var_4 + (arr_6 [i_0] [i_0] [i_2 - 3]))) : (-20641 + 164740616))) >= (max(var_9, (min(var_9, (arr_3 [i_0] [i_1 + 1] [i_2 - 4])))))));
                }
            }
        }
    }
    #pragma endscop
}
