/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [18] [i_0] [10] [i_0] = -324892303;

                    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        var_17 = (max(var_15, (arr_1 [10])));
                        var_18 ^= ((var_11 ? ((((min((arr_10 [14] [14] [14] [14]), var_0))) ? var_1 : ((var_15 ? var_6 : (arr_3 [18] [0]))))) : ((((arr_2 [i_0]) + var_8)))));
                        arr_13 [i_0] [i_1] [i_3] = var_3;
                        arr_14 [i_0] [i_1] [i_3] = ((((-(max(var_15, 272050066)))) >= (((((1 << (var_6 - 14587549094716692376)))) ? var_1 : (((!(arr_1 [5]))))))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, ((((max((((65535 ? 182 : 44436))), ((var_4 ? (arr_2 [i_0]) : (arr_3 [6] [19]))))) << ((((((182 >= (arr_3 [i_0] [i_0])))) <= (arr_12 [i_0] [i_2] [i_2] [i_2] [i_0])))))))));
                        var_20 += 566553226;
                        var_21 = 7801414710257494537;
                    }
                }
            }
        }
    }
    var_22 = var_14;
    var_23 = (var_9 != ((var_10 & (((-3028 ? var_11 : var_4))))));
    #pragma endscop
}
