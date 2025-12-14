/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 51;
    var_18 ^= ((var_13 ? ((-142 ? var_2 : var_8)) : (((var_16 ? var_5 : 63)))));
    var_19 = ((var_14 >= (((((!112) == ((230 ? 112 : 149))))))));
    var_20 = (min(var_20, ((231 & (min(8256364630361618946, (var_5 & 16462)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_21 ^= ((-(((118 <= var_2) ? 119 : 1353395819352533109))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((((-9 - 15699) || ((((5347164968725336939 ? 245 : (-9223372036854775807 - 1))))))))));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_23 -= (37353 > 2661641159624770793);
                                arr_12 [i_0 + 3] [i_0 + 1] [i_0] [i_0] [6] [i_0] [i_0 + 3] = 17;
                                var_24 |= 5347164968725336923;
                                arr_13 [i_4] = ((~(~-50)));
                                var_25 &= -63;
                            }
                            var_26 = (-(min(((32086 / (arr_10 [i_2] [i_1]))), -255)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
