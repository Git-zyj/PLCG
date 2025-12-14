/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_14 ^= (!(((((-127 - 1) ? (arr_6 [i_0] [i_0] [i_2] [i_2] [i_4]) : 64774)))));
                                arr_12 [i_0] [i_0] = ((((arr_8 [i_1] [8] [10] [i_1 + 1]) ? (arr_10 [i_0] [i_1] [i_2] [i_1 + 1] [i_1]) : (arr_8 [i_0] [i_0] [i_0] [i_1 + 1]))));
                                arr_13 [i_0] [i_1] [i_0] [1] [0] [0] [i_0] = ((((arr_6 [i_0] [i_1] [i_2] [i_3] [i_4]) & 33554431)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_19 [i_6] = (((((((30231 ? 1 : 1))) ? ((var_6 % (arr_0 [i_5]))) : (1456987877 > var_7)))) ? (((var_8 ? (max(1, (arr_3 [4] [4]))) : 5003))) : (max(var_0, 33554431)));
                                var_15 = (arr_8 [i_1 + 1] [2] [i_1 + 1] [i_6 + 1]);
                                arr_20 [i_0] [i_6] [i_2] [i_0] [i_6] [i_6] [i_2] = (min((((min(1, (arr_5 [i_5]))))), 770));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (((((min(var_7, 4269401413)) ^ -1)) << (((min((var_7 / 51215), (((69 ? 215 : 27332))))) - 197))));
    #pragma endscop
}
