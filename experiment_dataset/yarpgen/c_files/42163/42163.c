/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_13 = (((((arr_6 [i_0] [i_0] [i_1] [i_1]) | (arr_6 [i_0] [i_0] [i_1] [i_1]))) > var_0));
                    var_14 *= (max((arr_6 [i_1] [i_1 + 3] [i_1] [i_0]), (((arr_6 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_2]) - (arr_6 [i_1] [i_1 + 1] [i_1] [i_2])))));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_15 = (var_5 ^ var_3);
                        arr_13 [i_0] [i_3] &= -712300918;
                        var_16 = (min(var_16, ((((!171) || var_1)))));
                    }
                    var_17 = (max(var_17, ((max((arr_0 [i_0]), (max(712300918, var_8)))))));
                }
                var_18 = ((949508305 ? (((((arr_10 [i_1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1]) >= var_2)))) : (arr_5 [i_1])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_19 [i_1] = (((~1) ? (54199 | 1) : (max(1257089993, (arr_17 [i_1 + 3] [i_1] [i_1 - 1] [i_1] [i_1] [i_1 + 2])))));
                            var_19 += (((((-712300918 - var_4) ? (var_2 - var_1) : (((246 ? 27 : 1))))) >= (((((arr_8 [i_1 + 1]) <= var_12))))));
                            var_20 = (((((arr_9 [i_1]) ? (arr_9 [i_1]) : var_9)) >= (((3345458966 * (arr_17 [i_0] [i_1] [i_1] [i_5] [i_6] [i_6]))))));
                            var_21 |= (((((~(arr_6 [i_0] [i_1] [i_5] [i_0])))) && ((max((((63 << (arr_18 [i_1] [i_5] [i_6])))), var_1)))));
                        }
                    }
                }
            }
        }
    }
    var_22 &= ((((((!var_11) ? (min(var_12, 1025372839)) : (-1025372840 <= var_9)))) ? ((~(3319994972187064482 / -1025372832))) : (((var_5 ? var_6 : var_2)))));
    var_23 = (max(var_11, var_11));
    #pragma endscop
}
