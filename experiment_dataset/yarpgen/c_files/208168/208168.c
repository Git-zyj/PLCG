/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_19 = (arr_0 [1]);
        var_20 = ((-9223372036854775789 & (((~(var_14 <= 13118))))));
        arr_2 [i_0 + 1] [i_0 - 1] = (~var_5);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_21 = (min(((((-27267 + (arr_8 [i_2]))) + ((var_3 ? (arr_7 [i_1]) : (arr_8 [i_2]))))), ((((arr_6 [i_3]) ? (arr_13 [i_1] [i_2]) : (arr_6 [i_4]))))));
                        var_22 &= (((~165) ? ((-(arr_8 [i_4]))) : (((-2050 ? 39 : -2052)))));
                        var_23 += ((((((arr_9 [i_1] [i_3] [17]) ^ (((arr_5 [20] [i_4] [10]) ? (arr_4 [i_3]) : (arr_9 [14] [i_2] [i_2])))))) & (arr_8 [i_4])));
                    }
                }
            }
        }
        var_24 = ((~(arr_10 [i_1] [7] [1] [4])));
        var_25 |= ((((arr_13 [i_1] [i_1]) && (arr_13 [i_1] [i_1]))) || ((((arr_13 [i_1] [i_1]) ? (arr_13 [i_1] [i_1]) : (arr_13 [i_1] [i_1])))));
        arr_15 [i_1] = 810500182;
    }
    var_26 |= var_0;
    #pragma endscop
}
