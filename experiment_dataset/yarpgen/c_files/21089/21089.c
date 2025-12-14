/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((max(((((min(1009769544, 49292)) >> ((((0 ? var_1 : var_2)) + 132))))), ((~(-1 ^ var_9))))))));
    var_11 = (min(var_11, ((max(var_5, (((((725363369 ? 4377534708695429009 : var_7))) ? (1 * -1) : (min(var_1, var_4)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = ((!(min((!-2033220086), 1))));
                var_13 = ((~(arr_2 [i_1])));
                var_14 = ((~(((var_5 || (((2164663517184 ? 6327 : 0))))))));
                var_15 = (max(var_15, var_5));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_2] [i_4 - 2] = (((arr_3 [i_2 - 2] [3] [i_2 + 1]) & var_1));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] [i_5] [i_2] [i_2] [i_3] [i_2] = (!((((~var_0) ? (6327 < 949601253) : (max(4294967295, var_9))))));
                                var_16 = ((((32767 ? var_9 : (arr_11 [i_2] [i_2 - 2] [i_2 - 2]))) < (((-(((arr_10 [i_2]) ^ (arr_6 [i_2] [i_2]))))))));
                                var_17 = (-9223372036854775807 - 1);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (min((((!(var_9 + var_2)))), var_3));
    #pragma endscop
}
