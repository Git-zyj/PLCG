/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (((((var_5 ? (-5142574887379841216 | 224552349) : (~5142574887379841216)))) ? (min((~var_4), (~var_11))) : (((var_17 + 2147483647) >> (var_16 + 2206)))));
    var_19 &= var_10;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_20 = ((var_15 == (((!(~40558))))));
        var_21 = (((!(40585 + var_14))));
        var_22 = (max(var_22, -38));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_23 = (min(var_23, (arr_5 [9])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    {
                        var_24 = (min(var_24, (((+(((arr_10 [i_1] [i_1] [i_1 - 1] [i_1 + 2]) ? var_11 : (arr_10 [i_1] [i_1] [i_1 - 1] [i_1 + 2]))))))));
                        var_25 = (((((-(arr_8 [i_4 + 1])))) ? ((((arr_9 [2]) <= (arr_4 [i_1] [i_3])))) : 2013265920));
                        var_26 = (arr_5 [3]);
                        var_27 |= ((~(!var_15)));
                        var_28 = max((((arr_6 [i_2] [i_3] [i_4]) ? (arr_6 [i_1 + 3] [i_1 + 3] [i_3]) : var_9)), ((((arr_6 [i_2] [i_3] [i_4 + 4]) && (arr_6 [2] [i_2] [i_2])))));
                    }
                }
            }
        }
        var_29 = (min((arr_8 [11]), (arr_1 [i_1 + 2])));
    }
    #pragma endscop
}
