/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (max((max(((var_10 << (var_11 + 5749698453170243254))), var_9)), var_15));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((((((arr_0 [i_0]) < (arr_0 [i_0]))))) + 6499148831288478001));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_17 = (min(var_17, (arr_5 [i_1] [i_1] [i_0])));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_18 |= (max((((5399915968930286840 >= (((arr_8 [i_0]) / (arr_9 [i_2])))))), (arr_3 [i_2] [i_2])));
                var_19 = (((((arr_9 [i_0]) || (arr_4 [i_0] [i_1]))) || (!5826985162372842495)));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_20 = (arr_9 [i_0]);
                            arr_15 [i_0] [i_1] [i_1] [2] [i_4 + 1] &= var_13;
                        }
                    }
                }
            }
            var_21 = (var_2 ? (arr_5 [i_0] [i_1] [i_1]) : (min((arr_8 [i_1]), (arr_5 [13] [i_1] [i_1]))));
            var_22 = (((max(((((arr_9 [i_0]) && (arr_3 [i_0] [i_0])))), (((arr_0 [i_0]) ^ (arr_3 [i_0] [i_1]))))) + (((((arr_8 [i_0]) < (arr_12 [8] [i_0] [i_0] [i_0] [i_1])))))));
            arr_16 [i_1] [i_0] [i_0] = ((((((((var_3 ? -2147483631 : (arr_5 [i_0] [i_0] [i_0])))) ? (((arr_1 [i_0]) ? (arr_10 [i_0] [i_1] [i_1] [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0]))) : (arr_5 [i_0] [i_1] [i_0])))) / (((arr_3 [i_0] [i_1]) ? (arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1]) : ((max(-1, (arr_11 [i_1] [i_1] [i_1] [6] [13]))))))));
        }
    }
    for (int i_5 = 1; i_5 < 6;i_5 += 1) /* same iter space */
    {
        arr_21 [1] [i_5] = (~(!5));
        var_23 += (((arr_6 [i_5] [1] [i_5] [i_5 + 2]) && ((((arr_6 [i_5 + 2] [i_5 + 2] [15] [i_5]) ? (arr_12 [i_5 + 2] [i_5] [8] [i_5] [i_5]) : var_3)))));
    }
    for (int i_6 = 1; i_6 < 6;i_6 += 1) /* same iter space */
    {
        var_24 = ((((var_0 ? (arr_19 [i_6 + 3]) : (arr_1 [i_6 + 4]))) + -var_5));
        var_25 ^= (arr_4 [i_6] [i_6 + 2]);
        var_26 = var_12;
    }
    var_27 = (((~var_0) > 6421766217236714021));
    var_28 = (max(var_28, var_13));
    var_29 = var_11;
    #pragma endscop
}
