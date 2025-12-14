/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_2));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((~(arr_1 [i_0] [i_0])));
        arr_4 [8] = ((arr_2 [i_0 - 2]) >> (((arr_2 [i_0 - 1]) - 18706)));
        arr_5 [i_0] |= (2937465367 ^ -287463821);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (arr_0 [i_0 - 1])));
                    arr_12 [i_2] [i_1] [4] [i_1] = arr_1 [i_0] [i_0];
                    var_15 = ((!(arr_8 [i_1 + 1] [i_1 + 1] [i_1])));
                }
            }
        }
    }
    for (int i_3 = 4; i_3 < 10;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_16 = (((((+(((arr_11 [i_4] [1]) ? (arr_1 [1] [1]) : (arr_13 [i_3])))))) ? var_4 : (max((arr_15 [i_3 + 1] [i_4]), ((((arr_8 [i_3] [i_4] [1]) ? (arr_11 [i_4] [i_4]) : 1073741823)))))));
            var_17 = (((arr_6 [i_3] [i_4] [i_4]) + ((var_1 ? (arr_16 [i_3 + 1] [i_3 + 1]) : (arr_16 [i_3 + 1] [i_3 + 1])))));
            arr_17 [i_4] [i_4] = (((arr_11 [i_4] [i_4]) != (((arr_2 [i_3 - 2]) ? (arr_2 [i_3 - 1]) : (arr_2 [i_3 - 1])))));
            arr_18 [i_3] &= (508 * 4100242660);
        }
        arr_19 [i_3 - 4] [i_3 - 4] |= ((((((arr_11 [i_3] [i_3 - 2]) % (arr_11 [i_3] [i_3 - 2])))) ? ((((!(arr_11 [i_3] [i_3 - 3]))))) : (65535 & 18446744073709551601)));
        var_18 = (min(var_18, (((!((((~(arr_14 [i_3]))))))))));
    }
    var_19 = (!var_4);
    #pragma endscop
}
