/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = var_7;
                    var_16 = (arr_1 [i_2] [i_2]);
                    var_17 -= (((arr_2 [i_0]) % (arr_2 [i_0])));
                }
            }
        }
        arr_8 [i_0] = (((var_0 ^ (arr_4 [5]))));
        arr_9 [i_0] |= (var_11 - -198971659);
        var_18 = 11;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = var_5;
        arr_15 [i_3] = (arr_6 [i_3] [i_3] [1] [i_3 + 1]);
        var_19 = 53394;
        var_20 = ((2074981775 ? (arr_4 [i_3]) : ((var_12 ? var_2 : (arr_10 [i_3] [i_3])))));
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_21 = (min((arr_1 [i_4 + 2] [i_4]), (arr_0 [i_4])));
        arr_18 [i_4] [1] = (((arr_16 [i_4 + 1] [i_4 + 1]) - (((arr_3 [i_4 - 1]) ? 2074981775 : 2219985521))));
        var_22 |= (!((max((arr_10 [i_4] [20]), (arr_10 [i_4] [2])))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_21 [0] = ((((((arr_6 [i_5] [i_5] [i_5] [4]) >> ((((226 ? 56 : 120)) - 32))))) || (((var_3 ? 5812940832645176532 : (arr_13 [i_5]))))));
        arr_22 [i_5] = ((135 ? ((0 ? var_10 : (var_11 << 1))) : ((((((var_13 ? 3292090204 : 128968754)) != (arr_4 [i_5])))))));
        arr_23 [i_5] = 2074981762;
        var_23 -= 120;
        arr_24 [i_5] [i_5] = -80;
    }
    var_24 = max(-var_1, (min((max(var_8, var_4)), var_9)));
    var_25 = (!2219985523);
    #pragma endscop
}
