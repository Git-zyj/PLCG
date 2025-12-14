/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(((-575623417 ? 48 : var_2)), var_2))) / var_4));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (((((-97 ? -58 : 22))) ^ ((((2 || (arr_2 [i_0 + 4]))) ? 70 : 3666))));
                var_12 = (((((min((arr_1 [i_1]), var_3)) < (arr_1 [i_0 + 2])))) | ((max((arr_1 [i_0]), 75))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_13 [i_4] [i_3] [i_2] = (-76 & -52);
                    arr_14 [1] [i_3] [i_4] = (max(var_2, ((-32 ? 65535 : var_3))));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_13 = (min(var_13, ((((((arr_1 [i_2 + 1]) ? (arr_5 [i_2 - 1] [i_2]) : -71)) % ((min(-10104, 1))))))));
                                arr_22 [i_6] = ((((((arr_18 [i_6] [i_6] [i_6] [i_6]) ? var_5 : (arr_4 [i_6] [i_3]))) & (var_8 / 54109))));
                                var_14 = (max(1, (((arr_11 [i_6] [i_6] [i_6] [i_6]) % ((var_7 | (arr_4 [i_2] [7])))))));
                                var_15 = (max(((11426 ? (arr_12 [i_2] [i_3] [i_5]) : 92)), (arr_18 [i_2] [i_2] [i_6] [4])));
                            }
                        }
                    }
                    var_16 -= 196;
                }
                var_17 -= var_6;
            }
        }
    }
    #pragma endscop
}
