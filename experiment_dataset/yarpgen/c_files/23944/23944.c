/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_10 |= ((((((arr_2 [i_0]) % (arr_3 [i_0])))) ? ((var_2 % (arr_2 [i_1]))) : (1018859557 || 48011)));
                            arr_10 [i_0] [i_1] [i_1] = 127;
                            var_11 = 48023;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_12 = (max((max((arr_11 [i_0] [i_5 - 1] [i_5 - 1]), (arr_11 [i_0] [i_5 + 1] [i_5 + 2]))), 17524));
                            var_13 = (max((((48011 && 17524) & ((min((arr_12 [i_1] [i_4] [i_4] [i_5]), 27805))))), var_7));
                            arr_16 [12] [i_0] [i_0] [12] = var_2;
                            var_14 = (min(var_14, 127));
                        }
                    }
                }
                arr_17 [i_0] [i_0] = var_8;
                arr_18 [i_0] = (max((max(-16, (0 & 48011))), ((((-127 - 1) && 17525)))));
            }
        }
    }
    var_15 += (((min(var_8, ((var_5 ? var_9 : (-32767 - 1))))) >= var_3));
    var_16 = (min(var_16, ((max(((((var_2 >= var_5) != var_1))), ((var_8 ? (((var_1 >= (-127 - 1)))) : 0)))))));
    #pragma endscop
}
