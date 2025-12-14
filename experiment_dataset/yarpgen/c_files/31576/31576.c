/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((var_10 == (((-47 ? var_2 : ((var_5 ? var_9 : var_4))))))))));
    var_12 *= var_7;
    var_13 = 768;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_3 + 1] [i_2] = (((arr_2 [i_4] [i_3]) ? -3548147470002375670 : ((((((13120893868655987066 ? 64768 : -202044731))) ? ((54662 ? var_6 : 1)) : (arr_8 [i_0] [i_2] [i_2] [i_2] [i_4]))))));
                                arr_13 [i_2] = ((-((1 ? (arr_11 [i_0] [i_1] [i_0] [i_3 - 1] [i_4] [i_2] [i_3]) : (arr_5 [i_4] [i_1] [18] [i_3 - 1])))));
                            }
                        }
                    }
                    arr_14 [i_2] = ((((min(((min((arr_9 [21] [i_0] [i_1] [i_2] [i_0] [i_0]), (arr_1 [i_0])))), (arr_11 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2] [i_2])))) ? (((arr_8 [i_2] [i_2] [i_1] [i_2] [i_0]) ? (arr_5 [i_0] [i_1] [i_1] [i_0]) : (arr_5 [19] [1] [1] [1]))) : 0));
                    arr_15 [i_2] [i_1] [i_2] = ((var_0 ? var_3 : ((~(arr_10 [4] [i_1] [i_1] [i_1] [i_1])))));
                    var_14 -= (min((arr_7 [i_0] [i_1] [i_0] [i_0]), (arr_7 [i_0] [i_2] [i_2] [i_2])));
                    arr_16 [i_2] [i_1] = 65535;
                }
            }
        }
    }
    var_15 = min(-27228, 11695526466408454726);
    #pragma endscop
}
