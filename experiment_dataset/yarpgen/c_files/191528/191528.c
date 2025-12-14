/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((((4273167328392551970 ? var_2 : 15))) ? ((((var_7 || (((4 >> (var_6 - 21534)))))))) : (max(var_10, (!var_8)))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_13 = (max(var_13, 230));
        var_14 = -5735030401223037661;
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (-(((arr_4 [i_1 + 1]) ^ (((max(0, 230)))))));
        var_15 = ((((min((arr_1 [i_1 - 1]), (max((arr_2 [i_1]), (arr_2 [7])))))) ? ((((arr_1 [i_1 - 1]) ? -4273167328392551970 : (arr_1 [i_1])))) : (arr_4 [1])));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = var_9;
        var_16 = ((max((arr_6 [i_2]), (arr_3 [i_2]))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_17 = (max(var_17, (arr_0 [i_3])));
        arr_12 [i_3] &= (arr_2 [i_3]);
        arr_13 [i_3] = var_6;
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            {
                arr_18 [i_4] [10] &= (((-642254051 % (arr_7 [i_4] [0]))));
                var_18 = (min(var_18, (!var_3)));

                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    arr_22 [i_4] [i_4] [12] [i_4 + 2] = -4273167328392551966;
                    var_19 &= ((~((var_4 << (207 - 192)))));
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    arr_25 [i_4] [1] [13] [i_4] = (((arr_17 [i_4] [i_4 - 1]) || (((-(arr_3 [i_4]))))));
                    var_20 = ((~(!-6)));
                    var_21 = (min(5735030401223037661, (arr_2 [i_4 - 3])));
                }
                var_22 -= 14377373490999682671;
            }
        }
    }
    #pragma endscop
}
