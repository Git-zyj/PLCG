/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = ((32 && (((1757 ? 1 : var_3)))));
                var_13 -= (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((((!(((var_5 & (arr_3 [i_1] [i_3 - 1])))))) ? var_10 : ((var_4 + ((min(var_0, (arr_4 [i_3 - 1] [i_0] [i_1]))))))));
                            var_14 *= ((((((max(var_1, var_11))) ? ((-108 ? (arr_0 [10]) : 1152921504606584832)) : var_0)) < ((-(arr_8 [17] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                            var_15 = (min(var_15, (((((((-7534 - (arr_9 [i_0] [18] [i_0 + 1]))))) ? (max(((~(arr_2 [i_3] [i_1]))), var_5)) : ((((var_9 ? 17293822569102966784 : (arr_5 [i_0] [i_1 - 1] [17]))))))))));
                        }
                    }
                }
            }
        }
    }
    var_16 += ((((!(((var_4 ? var_8 : var_0))))) ? var_1 : (min(((1762 ? -75 : 17293822569102966783)), (var_9 && -64)))));
    var_17 = (max(-72, 7745753727426362221));
    var_18 |= ((~(((min(1762, var_1))))));
    var_19 = (~((-((var_4 ? var_1 : 30)))));
    #pragma endscop
}
