/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((27533 ? 13880593480627587944 : 4137501469))) && ((max(var_4, var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = 12874695847499459153;
                                var_14 += (arr_4 [i_1 - 2] [i_1 - 1]);
                                var_15 |= (((((arr_5 [14] [i_1 + 1]) ? (((arr_5 [i_2] [i_0]) + 12874695847499459153)) : ((-(arr_1 [i_2]))))) | (min((((~(arr_8 [11] [5] [i_2] [17] [i_0])))), -var_12))));
                            }
                            var_16 = ((((((27520 == 13880593480627587944) && (arr_10 [i_0] [i_3] [i_2] [i_0] [i_0])))) << (1879048192 - 1879048178)));
                        }
                    }
                }
                var_17 = ((~(arr_9 [i_0] [15] [11] [i_0] [i_0])));

                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    arr_14 [16] [i_0] = ((!(((-(3 && 4833903370701876360))))));
                    var_18 = (min(((var_3 ? 12874695847499459171 : (arr_12 [16] [i_1 - 1] [0] [i_5]))), (((~(arr_10 [i_0] [i_1 + 1] [10] [i_5] [i_1 - 2]))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    var_19 = 5572048226210092463;
                    var_20 = (max(var_20, (arr_0 [i_0])));
                    var_21 += ((-((var_2 ? (arr_7 [i_0] [6] [i_6] [i_6] [i_6]) : var_3))));
                    arr_17 [i_1] [i_0] = (-(arr_13 [i_1 + 1] [i_1 - 2] [i_1 + 1]));
                }
            }
        }
    }
    #pragma endscop
}
