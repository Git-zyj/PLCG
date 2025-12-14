/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 &= 21;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [2] [i_0] [i_0] [11] [i_1] [i_0] [i_0] = ((((max((min(9579, 54527)), (arr_6 [i_1 + 3] [i_1 - 3] [i_1 + 3])))) ? ((((((arr_3 [i_0] [i_0] [i_0]) < (arr_2 [i_1 - 2] [i_0]))) && ((max(-8, var_10)))))) : (((arr_5 [i_0 - 1] [i_0 - 1] [7]) ? -32 : 0))));
                                arr_14 [i_4] [i_0] [i_0] [i_0] [i_0] = (max((((-22 && (arr_9 [i_0] [i_1] [i_2] [i_3] [i_4])))), (arr_7 [i_2])));
                                var_17 ^= ((-56 && (((~(11029 < 1))))));
                                var_18 &= ((((((((arr_9 [7] [7] [7] [i_3] [i_4]) >= (arr_6 [i_0] [i_0] [i_0]))) || ((217 <= (arr_8 [i_3] [i_1])))))) | (~255)));
                            }
                        }
                    }
                    var_19 ^= (max(((((((-127 - 1) * (-127 - 1)))) ? 1 : ((1 ? 1 : var_4)))), (max(10, ((27401 ? var_10 : 1))))));
                    arr_15 [i_0] [i_0] [i_1] [i_1] = (((((arr_9 [4] [i_2] [i_1 + 1] [7] [i_0 - 1]) == (arr_9 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1]))) ? ((max(891, (arr_9 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1])))) : ((1 ? (arr_9 [12] [i_0] [12] [9] [i_0]) : 1))));
                }
            }
        }
    }
    var_20 = (max(var_20, (((3052864737557389253 != ((var_2 ? var_5 : ((max(1, 7641))))))))));
    #pragma endscop
}
