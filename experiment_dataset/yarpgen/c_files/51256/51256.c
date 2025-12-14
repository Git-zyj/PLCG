/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (((((max(15, var_8))) ? (max(var_6, 36)) : var_1)) & (((((~4294967267) <= var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (((((-(max(var_8, (arr_1 [i_0])))))) ? ((((var_18 || (!4294967257))))) : var_4));
                    var_20 = (min((min(1, 4294967257)), ((min((arr_2 [14] [i_1] [i_2]), ((((arr_1 [i_0]) > var_1))))))));
                    var_21 *= (arr_5 [i_0] [i_0] [i_0]);
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        arr_9 [4] [4] |= ((!(arr_3 [i_3])));
        arr_10 [i_3] [i_3] = ((((~(arr_4 [i_3] [i_3] [i_3])))) ? ((~(arr_4 [i_3] [4] [i_3]))) : (arr_4 [i_3] [i_3] [i_3]));
        var_22 ^= 3632493431;

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_23 = (max(var_23, ((max((arr_12 [i_3] [i_7]), (max((min((arr_0 [i_5]), (arr_2 [i_3 + 3] [i_4] [i_5]))), var_2)))))));
                            arr_23 [i_3] = ((~(((arr_21 [i_3 + 3] [i_4] [i_5] [i_3 + 2] [i_3]) ? (arr_18 [i_3] [2] [i_3] [i_3 - 2] [i_3]) : (arr_11 [i_3] [i_3])))));
                        }
                    }
                }
            }
            var_24 *= (arr_0 [i_3]);
            arr_24 [i_3] = ((((min(var_3, (arr_4 [i_3] [i_4] [i_4])))) ^ (arr_18 [i_3] [i_3] [i_3] [i_3] [1])));
        }
    }
    var_25 &= (!var_18);
    var_26 = (var_18 > var_5);
    #pragma endscop
}
