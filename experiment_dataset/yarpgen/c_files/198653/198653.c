/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = (min(var_20, (47326 <= 2147483647)));
        arr_4 [i_0] [i_0] = ((((max(47329, -2147483647))) ? 751849021 : -26088));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_21 -= (((arr_6 [i_0]) % 25122));
            arr_8 [i_0] [i_1 + 3] [i_0] = var_16;
        }
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            var_22 = ((((max((~var_7), (arr_7 [i_2 + 1] [i_2 + 2] [i_0])))) ^ ((((((arr_7 [i_2] [11] [11]) ^ var_3))) ^ ((var_10 ? (arr_2 [i_0]) : 7028840047393289590))))));
            var_23 = (((~(-2147483647 - 1))));
            arr_11 [i_0] [i_0] [3] = (((max(2147483647, ((var_13 ? var_5 : -81)))) < (arr_7 [i_2 + 2] [i_2 - 2] [i_2 + 1])));
            arr_12 [i_0] [i_2] = ((!(((-751849012 ? ((~(arr_10 [i_0] [i_0]))) : (arr_9 [i_2 + 2] [i_2 + 2]))))));
            arr_13 [i_0] [i_0] [i_0] = var_2;
        }
        var_24 = min((arr_6 [i_0]), ((~(min(var_12, -7)))));
    }
    #pragma endscop
}
