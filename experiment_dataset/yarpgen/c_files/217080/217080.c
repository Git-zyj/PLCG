/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] = 4294967293;
                                var_13 *= ((((((max(var_4, (arr_12 [i_0] [14] [i_4]))) > ((((-2147483647 - 1) + (arr_11 [3] [3] [6] [i_3] [i_4]))))))) / ((((arr_2 [i_0] [i_0]) <= ((20 ? 1 : 0)))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] = ((~((-(arr_1 [i_1 - 1] [i_0])))));
            }
        }
    }
    var_14 -= 5;
    var_15 -= var_6;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                var_16 = ((((3 ? 1297248940 : (arr_17 [i_6])))) ? (((1297248943 ^ (((130 ? 3065 : 32767)))))) : 18446744073709551611);
                arr_21 [i_5] = (((((arr_3 [i_6]) ? 10 : 1763474590))) ? (arr_3 [i_5]) : ((max((arr_3 [i_6]), (arr_3 [i_6])))));
                var_17 -= var_2;
                var_18 = (min(var_1, 4));
            }
        }
    }
    #pragma endscop
}
