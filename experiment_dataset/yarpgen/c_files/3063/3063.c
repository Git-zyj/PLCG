/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(max(-0, 0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [5] [i_1] [0] = (((arr_1 [i_2] [i_0]) & ((var_10 ? 61586 : 19))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            arr_13 [i_3] [i_3] [i_2] [i_1] [i_1] [6] [i_3] = ((!((min(((~(arr_2 [i_1]))), (arr_12 [i_4 - 2] [i_4 + 1] [i_4 + 3] [i_4 + 2] [i_4 + 3] [i_4 + 3] [i_4 + 1]))))));
                            var_12 ^= (((!33918) != ((((-(arr_5 [i_0] [i_1] [i_2] [12]))) - (arr_6 [i_3])))));
                        }
                        var_13 = (max(var_13, (65535 - 31619)));
                        var_14 = (min(var_14, (((~(((arr_5 [i_0] [i_1] [i_2] [i_3]) << (((arr_5 [i_0] [i_1] [i_2] [i_3]) - 100)))))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        var_15 ^= (arr_0 [1]);
                        arr_16 [i_1] [i_1] [i_5] = (arr_0 [i_0]);
                        arr_17 [i_5] [21] [i_2] [21] [i_1] [i_0] &= (-68 && 21);
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        arr_20 [15] [i_2] [i_6] = ((!((!(arr_4 [i_0] [i_2])))));
                        arr_21 [i_6] [i_1] [i_1] [i_0] = 28054;
                    }
                    arr_22 [i_2] [i_0] [i_0] = (((((arr_19 [i_2]) | (arr_11 [i_2]))) * var_10));
                }
            }
        }
    }
    var_16 = max(3256083772, 18446744073709551601);
    #pragma endscop
}
