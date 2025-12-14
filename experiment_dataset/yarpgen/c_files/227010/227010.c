/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(var_3, var_6))) + var_9));
    var_13 = (max(var_13, (((!(((0 ? 0 : 32374))))))));
    var_14 = (var_8 | var_1);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_15 = ((50 ^ (arr_0 [i_0 - 2] [i_0])));
        var_16 |= (((arr_3 [i_0 - 3]) ? (arr_2 [i_0 - 1]) : (arr_3 [i_0 + 1])));
        arr_4 [i_0] [i_0 - 1] = ((((((arr_3 [i_0 + 1]) ? var_4 : (arr_1 [i_0])))) ? ((var_4 ? 0 : 255)) : var_2));
        var_17 = (arr_0 [i_0] [i_0 + 1]);
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_18 &= (((((!((((arr_6 [i_1 - 1]) ? 255 : (arr_8 [i_1] [i_1]))))))) - (arr_8 [i_1 + 1] [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    {
                        var_19 = (max(var_19, (((var_10 ? ((~(arr_17 [i_2] [i_2 + 1] [i_2 + 3] [i_2]))) : ((((!(arr_12 [i_1 + 1] [i_2 + 3] [i_2]))))))))));
                        var_20 = (max((((arr_13 [i_4 - 1] [i_4 - 2] [i_2 + 2] [i_1 - 3]) ^ 14)), (((arr_13 [i_4 - 2] [i_4 - 1] [i_4] [i_3]) << (((arr_13 [i_4] [i_4 + 3] [i_2] [i_2]) - 6467062485859122629))))));
                    }
                }
            }
        }
        var_21 ^= (((((~(arr_15 [6] [i_1] [i_1] [i_1 - 1] [i_1])))) ? (arr_17 [i_1] [i_1] [i_1 + 1] [i_1 - 3]) : (((((!(arr_7 [i_1] [i_1 - 3]))))))));
    }
    var_22 = (-65535 + var_5);
    #pragma endscop
}
