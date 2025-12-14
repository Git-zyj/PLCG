/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= 1;
    var_20 *= (var_13 <= var_13);

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 = (arr_3 [i_0]);
                    arr_7 [i_0] [i_1] [i_0] = (min((((((1 ? 0 : (arr_2 [i_0] [i_1])))) ? (min(0, 1)) : (arr_3 [i_0]))), -65535));
                }
            }
        }
        var_22 = (max(var_22, 1));
        var_23 |= (max((min(114, 2147483647)), ((140737488355327 >> (3359977848 - 3359977845)))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {

        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            var_24 -= (255 | -2065575949);
            arr_12 [i_3] [i_3] [i_4 - 2] = (((-(arr_9 [i_4 + 1] [2]))));
            arr_13 [i_3] [i_4] [i_4 - 3] = (((((arr_9 [i_3] [i_3]) ? 90 : 1)) << (((((~(arr_11 [i_3])))) - 231906279))));
            var_25 -= (min((((arr_9 [i_3] [i_4 + 1]) / (arr_9 [i_3] [i_3]))), (((arr_9 [i_3] [i_4 - 2]) - (arr_9 [i_3] [i_4 - 1])))));
        }
        arr_14 [7] [i_3] = ((((var_18 << ((((arr_10 [i_3] [i_3] [i_3]) >= 3359977848))))) >= var_3));
    }
    #pragma endscop
}
