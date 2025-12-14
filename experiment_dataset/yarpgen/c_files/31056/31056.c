/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = ((var_2 % ((1451901201954669149 % (arr_1 [i_0])))));
                arr_6 [i_0 + 1] [i_0 + 1] [0] |= (((0 < (((var_6 >= (arr_0 [i_0])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_2] = ((((max(((max(var_8, var_10))), (((arr_11 [i_2] [i_2] [i_2]) ^ 1))))) <= var_7));
                var_12 = (((((((var_1 | 21) > 18446744073709551615)))) % -var_7));
                arr_13 [i_2] [i_2] [i_3] = (max(18446744073709551615, (arr_10 [i_2] [i_2] [i_2])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    arr_21 [i_4] = (~((min(var_1, (arr_19 [i_4] [i_4] [i_6])))));
                    var_13 = -var_1;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    arr_30 [i_7] [i_7] [i_7] = (((max(((((var_10 + 2147483647) >> 1))), var_5)) == (((arr_27 [i_9] [i_8] [i_9] [i_9]) % (arr_28 [i_9] [i_8] [i_7])))));
                    var_14 = (max(var_14, var_4));
                    arr_31 [i_8] [i_7] [i_8] [i_7] = (((var_10 ? (arr_26 [i_8]) : (arr_26 [i_7]))));
                }
            }
        }
    }
    #pragma endscop
}
