/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_19 = (~-var_0);
                            var_20 = (min(var_20, (((~(((((1 ? var_3 : var_7))) ? -4611096245445047771 : (((((arr_6 [i_0] [i_0]) < var_15)))))))))));
                            var_21 |= ((+((var_7 ? (var_9 - 1) : 4999851068199153496))));
                            arr_13 [i_0] [i_2] [i_2] [i_0] [i_1] = ((~(((!var_10) >> ((((~(arr_11 [i_2] [i_0]))) + 7004459280871576182))))));
                        }
                    }
                }
                var_22 = (max(var_22, (((((((var_3 ? -9223372036854775794 : 84)))) ? ((-((-6073075016354335476 ? 95 : -76)))) : (((((-9223372036854775794 ? var_15 : -1444621195347576907)) < 13978))))))));
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_23 += (((!29) >> (((arr_10 [i_5 + 1]) + 20414))));
                                var_24 = ((((((var_3 ? (arr_11 [i_0] [i_0]) : var_2)))) ? (((((arr_9 [i_5 - 1] [i_4 - 3] [i_4 + 1]) != (!1))))) : (~4999851068199153496)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 3; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_25 = ((~(arr_2 [i_0] [i_7])));
                                var_26 = ((~(min(((0 ? 9242 : 26614468552857557)), var_4))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (!var_2);
    #pragma endscop
}
