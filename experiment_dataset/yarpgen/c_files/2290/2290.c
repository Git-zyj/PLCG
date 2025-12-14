/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 44482;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_1 + 4] = ((12852637801381558854 < (max(((var_5 ? (arr_0 [i_0]) : var_1)), (var_1 < var_4)))));
                            var_11 |= ((((-8325814861379565391 ? (((arr_4 [11] [i_3] [i_3] [i_3]) ? var_0 : var_0)) : var_5))) + (min(((((arr_7 [i_2] [i_1] [6] [12] [i_0]) % (arr_7 [20] [i_2] [10] [i_2] [i_0])))), (arr_8 [10] [i_1 + 1] [i_2] [i_3 + 1]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_12 += (min(((((((-(arr_10 [i_0 - 2] [i_1])))) ? (arr_4 [i_5] [i_4] [i_1 + 4] [i_0]) : (min(var_5, (arr_15 [i_0] [i_1] [i_4] [i_0] [9] [i_5])))))), ((((((arr_1 [i_0]) << (var_9 - 1199532263)))) ? var_0 : ((var_6 ? (arr_8 [2] [6] [20] [i_1]) : (arr_7 [i_5] [i_5] [16] [i_5] [16])))))));
                            var_13 *= ((((((var_0 && (arr_10 [17] [17]))))) + (max(-5868621399819900615, (arr_0 [4])))));
                            arr_16 [i_5] [i_5] [i_4] [2] [2] [4] = (min(((9223372036854775807 ? 1 : -8011885675719755773)), (9223372036854775802 == 576616098565298540)));
                        }
                    }
                }
            }
        }
    }
    var_14 = (((((~4681) || var_8)) ? ((((((6386 ? 853 : var_8))) ? ((var_3 ? var_2 : var_7)) : ((max(var_4, var_0)))))) : (max((-9223372036854775807 - 1), ((max(9285, var_2)))))));
    #pragma endscop
}
