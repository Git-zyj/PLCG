/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_11 = (max(var_11, -36));
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0 + 1]) % (arr_0 [i_0 - 1] [i_0 + 2])))) ? (arr_1 [i_0 + 1]) : ((-(arr_0 [i_0 + 2] [i_0 + 1])))));
    }
    var_12 = ((var_1 == ((max(var_7, var_10)))));
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {
                arr_7 [i_2] [i_2] = (((arr_5 [i_1] [i_2]) & (((var_2 % var_6) ? (arr_5 [i_1] [i_1]) : (((!(arr_4 [i_1] [i_2]))))))));
                var_13 = (min(var_13, -60));
                var_14 += (min(7264, (arr_6 [i_1])));
                arr_8 [i_1] [i_2] = ((~(((var_5 < (((min(-7262, 14645)))))))));
                var_15 |= (((var_9 / (arr_4 [i_1] [i_1 + 1]))));
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 9;i_5 += 1)
            {
                {
                    var_16 = (max(var_16, -var_6));
                    var_17 = 63;
                }
            }
        }
        arr_18 [i_3] = 241;
    }
    var_18 ^= (((-var_3 * var_1) && (((var_10 - ((var_2 ? var_10 : var_3)))))));
    #pragma endscop
}
