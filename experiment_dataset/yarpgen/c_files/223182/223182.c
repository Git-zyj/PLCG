/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((!(((((((arr_2 [i_0 + 2]) ? (arr_2 [i_0]) : 9223372032559808512))) ? ((-2412101748050195587 ? 2412101748050195596 : 8192)) : 795637672))))))));
                    var_15 = ((((+(((arr_0 [i_0] [i_2]) ? var_11 : var_5)))) / ((((var_8 || (-120 && 2032)))))));
                    var_16 = (((((((9223372036854775807 / (-32767 - 1)))) ? (~var_2) : (9223372036854775807 > var_3))) >= ((~(var_5 | var_6)))));
                    arr_8 [1] [i_1] [i_1] [1] = ((((((var_6 % (arr_4 [i_1]))) == (var_11 && var_5))) ? ((-((var_5 ? (arr_6 [i_1]) : var_12)))) : (((!(((var_2 ? (arr_7 [i_1]) : 32767))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (i_1 % 2 == zero) ? (((!(((~(((((arr_11 [i_1] [i_0] [i_1] [i_1]) + 2147483647)) >> (((arr_4 [i_1]) + 13200)))))))))) : (((!(((~(((((arr_11 [i_1] [i_0] [i_1] [i_1]) + 2147483647)) >> (((((arr_4 [i_1]) + 13200)) - 7718))))))))));
                                var_18 = (min(var_18, (((((((((arr_11 [i_4] [i_2] [i_2] [i_0 - 1]) & var_9))) >= (((-9223372036854775807 - 1) + var_10)))) ? (((((-(arr_6 [i_0]))) < (((!(arr_13 [i_0] [i_1] [i_2] [2] [i_0]))))))) : ((((!-9223372036854775807) && ((!(arr_10 [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1])))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((((29049 ? -9223372036854775807 : -7067))) ? (((var_4 & 14336) ? (var_6 ^ -4706693072054323147) : (((-9223372036854775794 ? var_7 : 43570))))) : ((((var_10 ^ var_5) ? (~var_5) : (~0))))));
    #pragma endscop
}
