/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_10 = (min(var_10, (((!(((var_7 << (12795537948253445058 - 12795537948253445000)))))))));
                                var_11 *= ((((min((((arr_4 [i_2] [i_1] [i_3]) >> (-88 + 103))), ((~(arr_8 [i_2])))))) && ((min(1, (max(101, (arr_5 [i_0 + 1] [i_1] [i_0] [i_0]))))))));
                                var_12 = (max(var_12, ((27217 | (((-(arr_5 [i_0 + 1] [i_2] [i_3] [i_4 + 2]))))))));
                            }
                        }
                    }
                }
                var_13 -= var_3;
                var_14 += ((-(max(((18446744073709551615 ? (arr_5 [i_1] [i_1] [i_1] [i_0 + 3]) : (arr_9 [i_0 + 2]))), ((-(arr_2 [i_0])))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_16 [i_0] [i_1] [i_5] [i_6] &= (-(((6700549668611843541 & var_1) & ((var_0 ? 10933 : (arr_0 [i_5]))))));
                            var_15 += (((arr_1 [i_5]) >> 1));
                            var_16 = (max(var_16, (((181 || (((-(arr_0 [i_0 + 1])))))))));
                            var_17 ^= (min((((min((arr_10 [i_0] [i_0] [i_0] [i_6] [i_0 + 2]), (arr_14 [i_0 + 1] [i_1] [i_5] [i_6]))))), var_5));
                        }
                    }
                }
            }
        }
    }
    var_18 = var_5;
    #pragma endscop
}
