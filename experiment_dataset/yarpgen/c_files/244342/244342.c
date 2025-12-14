/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(max((1 <= var_13), (~var_13)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((-8785100872634649772 ? (arr_1 [i_0] [i_0]) : (((arr_1 [i_0 - 3] [i_0 - 3]) >> (((arr_0 [i_0]) + 131))))));
        arr_3 [i_0 + 3] [i_0] &= (arr_0 [i_0]);
    }
    for (int i_1 = 3; i_1 < 24;i_1 += 1)
    {
        var_17 = (max(var_17, ((((((((((arr_4 [i_1]) ? 193021468344973096 : 10802994345316485752))) || (arr_5 [i_1])))) > (arr_4 [19]))))));
        var_18 ^= (((((((-67 ? (arr_5 [i_1]) : (arr_4 [i_1])))))) + (max(var_5, ((var_14 ? (arr_7 [i_1]) : 7643749728393065885))))));
        arr_8 [i_1] = arr_7 [i_1 - 2];

        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_19 = (arr_11 [i_1] [1]);
            var_20 ^= ((!(((~(arr_6 [i_1]))))));
            var_21 = (((arr_4 [i_1 - 3]) ? (!6524813697956333948) : (28999 != 18489)));
        }
    }
    var_22 = var_4;
    var_23 = (max(var_23, var_1));
    #pragma endscop
}
