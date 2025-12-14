/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = ((!(!var_12)));
                var_18 &= ((~(max((arr_0 [i_0] [i_1]), var_4))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_19 ^= ((((max((max(var_15, (arr_3 [i_0] [i_1] [i_2]))), ((min(var_2, var_1)))))) ? (max((max(-1598428716927553481, 10436611179515349660)), (((arr_0 [i_1] [i_0]) ? (arr_0 [i_0] [i_1]) : var_10)))) : (((-127 - 1) ? 8010132894194201962 : 0))));
                    var_20 = (max(var_20, var_4));
                    var_21 = (max(var_14, ((60 ? 8010132894194201953 : 9223372036854775789))));
                    var_22 -= (max((!328767798), ((var_6 ? var_4 : (((max((arr_1 [i_2] [i_1]), (arr_1 [i_1] [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_23 ^= (((arr_10 [i_0] [14] [i_0] [i_3] [i_1] [i_3] [i_4]) ? (~-var_6) : (((((min((arr_0 [i_3] [i_4]), var_9))) ? var_15 : ((var_11 ? var_11 : var_13)))))));
                                var_24 = (min(((~(min(var_0, var_5)))), (((min(-60, 33))))));
                                var_25 ^= ((((((60 ? 255 : (arr_4 [i_0] [i_0] [i_0] [16]))) ? var_0 : var_2))));
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    arr_14 [i_5] = (arr_13 [i_1] [i_5]);
                    var_26 = min(var_5, var_7);
                    var_27 = (min(var_27, (((2176926025 ? 3072 : 204426057)))));
                }
            }
        }
    }
    #pragma endscop
}
