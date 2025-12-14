/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_10 <= (3862024067 ^ var_5)))) + -var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_2 - 1] [i_2] = ((18446744073709551615 ? ((max(var_7, (arr_7 [i_0])))) : 18446744073709551608));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] |= var_6;
                                var_13 = (min((((arr_7 [i_0]) ? (arr_9 [i_0]) : (((arr_7 [i_0]) ? (arr_13 [18] [i_1] [i_2 - 1] [i_3] [i_4 - 1]) : 18446744073709551608)))), ((max((arr_14 [i_0] [7] [10] [i_3] [i_4]), (arr_13 [i_2 - 1] [i_1] [i_2 - 1] [i_4 - 1] [i_4 + 2]))))));
                                var_14 = (max(var_14, (arr_4 [1] [i_4])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] = (min(1, (arr_4 [i_0] [i_1])));
                                var_15 = (((((!(arr_20 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_5])))) % ((((arr_20 [i_2 - 1] [i_2 - 1] [1] [1]) <= (arr_20 [i_2 - 1] [i_2 - 1] [i_2] [16]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = min(128, 524287);
    #pragma endscop
}
