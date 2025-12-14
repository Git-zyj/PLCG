/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_18 += ((var_14 <= (arr_8 [i_0] [i_0] [i_4 - 1])));
                                var_19 = (((((-((2376 % (arr_0 [i_4])))))) ? (((((((arr_7 [i_2] [i_1] [i_2] [i_4]) ? 16899 : 16776)) <= -var_16)))) : ((((max((arr_7 [i_2] [i_3] [i_2] [i_2]), var_1))) ? (max(1832178526357988491, 0)) : (arr_9 [i_2] [i_2] [i_2] [i_3])))));
                                var_20 = (((arr_6 [i_0]) ? ((max((-127 - 1), (arr_5 [i_1 - 3] [i_1 - 3])))) : (((arr_8 [i_1 + 1] [i_1 + 2] [i_4 - 1]) ? (arr_8 [i_1 - 2] [i_1 - 1] [i_4 + 1]) : (arr_8 [i_1 + 3] [i_1 - 1] [i_4 - 1])))));
                            }
                        }
                    }
                }
                arr_14 [3] [i_0] [i_0] = (max(-1, 1));
                var_21 = ((var_14 % ((((((arr_8 [i_1] [i_1] [6]) ? -16894 : -1261541465583186043))) % var_2))));
                var_22 = ((~((((arr_10 [i_1 - 2] [i_1 - 2] [6]) <= (arr_10 [i_1 + 3] [i_1 - 3] [i_0]))))));
                var_23 = -11;
            }
        }
    }
    var_24 = var_0;
    #pragma endscop
}
