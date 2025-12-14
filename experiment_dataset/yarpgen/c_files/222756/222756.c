/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((+(((!var_14) ? (!var_2) : var_12))));
    var_19 = (!255);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((!((((((var_16 ? var_13 : (arr_10 [i_4] [i_3] [i_2] [i_2] [i_1] [i_3] [i_0])))) ? (~9223372036854775807) : (((~(arr_7 [i_0] [i_1] [i_1]))))))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_4] [i_4] = ((+(((arr_7 [i_0] [i_0] [i_2]) ? (arr_1 [i_4]) : 226))));
                                var_21 = (((((0 ? 9223372036854775807 : 1))) ? (((arr_3 [i_0] [i_1] [i_1]) ? (((arr_4 [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : 79)) : (arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]))) : ((102 ? ((var_5 ? var_17 : (arr_8 [i_0] [i_1] [i_1] [i_4]))) : 183))));
                                var_22 = ((var_7 ? var_7 : (((arr_10 [i_0] [i_0] [i_1] [i_0] [i_0] [i_4] [i_4]) ? var_9 : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_4] [i_4] [i_4])))));
                                var_23 = ((((((((8538120256565932750 ? -1 : -3608902670749584407))) ? 79 : ((9223372036854775807 ? var_8 : 7))))) ? (((((163 ? 13 : var_13))) ? 35 : (arr_8 [i_1] [i_1] [i_3] [i_1]))) : (((!(arr_7 [i_2] [i_0] [i_0]))))));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] = ((+(((!var_3) ? ((195 ? var_15 : var_12)) : (((arr_5 [i_0]) ? -25 : var_16))))));
                arr_15 [i_0] [i_0] [i_1] = ((+((+(((arr_5 [i_0]) ? -6918 : 13))))));
            }
        }
    }
    var_24 = (min(var_24, (((((((((var_3 ? var_2 : 9223372036854775785))) ? (~8) : ((var_9 ? var_7 : var_3))))) ? (((!var_17) ? ((var_10 ? var_17 : 1)) : ((var_7 ? 94 : var_9)))) : (((!(((28 ? var_3 : -109)))))))))));
    #pragma endscop
}
