/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, ((((((14902 ? (((1355299884857073199 ? var_4 : var_6))) : (((arr_3 [i_3] [8] [i_3]) ? (arr_12 [i_0]) : 28))))) ? ((var_4 ? -112 : ((var_2 ? (arr_2 [i_0] [i_0] [i_0]) : 1355299884857073224)))) : (((arr_0 [i_2 - 2] [i_4 - 1]) ? (arr_14 [i_0] [i_4] [4] [4] [i_0]) : -1355299884857073196)))))));
                                var_12 = (((~34) ? ((124272619 ? 1355299884857073203 : 0)) : 65535));
                                var_13 = (max(var_13, (((((((arr_8 [i_2] [i_2] [i_2 + 1] [i_4 - 1]) ? (((var_5 ? var_1 : 64996))) : 1355299884857073210))) ? -14 : (((((124272619 ? (arr_11 [i_0] [i_0] [i_1] [i_3] [i_4 - 1] [i_1]) : 1355299884857073210))) ? (((-4973780861269059054 ? 65535 : -1355299884857073210))) : (arr_6 [i_4] [i_4]))))))));
                                arr_17 [i_2] [i_1] = (((18446744073709551591 ? 3176919924370453548 : (-127 - 1))));
                            }
                        }
                    }
                }
                var_14 = ((~(((arr_4 [i_0] [i_1]) ? 0 : var_6))));
                var_15 *= (((((49641 ? var_4 : var_3))) ? 9392501368233626532 : (((arr_2 [i_0] [i_1] [i_1]) ? var_0 : var_8))));
                arr_18 [i_0] [i_1] [i_1] = (((((29425 ? -1363664572 : 28))) ? ((((((arr_3 [1] [1] [i_0]) ? var_4 : -1355299884857073199))) ? var_6 : var_4)) : (((61136 ? (arr_1 [i_0] [i_0]) : ((185 ? 0 : var_4)))))));
            }
        }
    }
    var_16 = (2147483647 ? 18446744073709551595 : 2679);
    #pragma endscop
}
