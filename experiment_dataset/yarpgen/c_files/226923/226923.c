/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 *= ((((((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 2]) ? (arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1]) : (arr_5 [i_0 + 2] [i_0 + 1] [i_0 - 1])))) ? ((((!(arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 1]))))) : 4294967295));
                    var_12 = ((((((arr_2 [i_1] [i_1 - 1]) + (arr_2 [i_1 - 1] [i_1 - 1])))) ? ((1 ? (arr_2 [i_1] [i_1 - 1]) : (arr_2 [i_1] [i_1 - 1]))) : (((arr_2 [i_1] [i_1 - 1]) & (arr_2 [i_1 - 1] [i_1 - 1])))));
                }
            }
        }
        var_13 = ((((min((arr_2 [i_0 - 1] [i_0 + 2]), (arr_2 [i_0 - 1] [i_0 + 2])))) ? (arr_2 [i_0 - 1] [i_0 + 2]) : (((arr_2 [i_0 - 1] [i_0 + 2]) ? (arr_2 [i_0 - 1] [i_0 + 2]) : (arr_2 [i_0 - 1] [i_0 + 2])))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_14 |= ((-var_5 ? 2640389175 : (arr_9 [i_3])));
        var_15 ^= ((-(3294737957 <= var_6)));
    }
    var_16 &= ((119 ? 126 : 2640389174));
    var_17 = ((((!(var_2 && 53))) || (((!var_4) && (!var_2)))));
    #pragma endscop
}
