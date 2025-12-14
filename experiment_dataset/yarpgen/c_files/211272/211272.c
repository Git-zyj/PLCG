/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_11 = (arr_6 [i_0] [i_0] [i_3]);
                        var_12 |= (min((((-9093730567842946939 >= (arr_7 [i_1])))), (var_0 & 18446744073709551602)));
                        var_13 ^= ((-(arr_0 [i_2])));
                        var_14 ^= ((max(((max(26342, var_9))), -4814058989751514372)));
                    }
                }
            }
        }
        var_15 -= (min(-9093730567842946938, (max((arr_5 [i_0 + 1]), ((min(-37, (arr_4 [i_0 - 1] [i_0]))))))));
        var_16 = ((((((var_10 ? (arr_7 [i_0]) : (arr_7 [i_0])))) || ((min(15, var_3))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_17 *= (!-9093730567842946942);
        var_18 = (((18446744073709551609 < var_3) >= ((-(arr_12 [i_4] [i_4])))));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    arr_19 [i_5] [i_5] [i_6] [i_7] = (((((max(5, 10161962868459608524))) && ((max((arr_11 [i_5]), 12721346840630028020))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_19 = (max(var_19, 18446744073709551604));
                                var_20 = (((arr_18 [i_8] [i_6] [i_7] [i_5]) >= (((((-(arr_23 [i_5])))) ? ((((arr_12 [i_6] [i_8]) | 23153))) : (((arr_23 [i_5]) ? var_10 : var_1))))));
                                var_21 = ((!(((-(var_9 >= var_5))))));
                                var_22 += (((arr_12 [i_9 + 1] [i_9 - 2]) ? (~var_10) : 23156));
                                var_23 = (max((arr_22 [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9 - 2] [i_9] [i_9]), (min((arr_22 [i_9 + 1] [i_9 - 2] [i_9 - 1] [i_9 + 1] [i_9] [i_9 - 2]), var_1))));
                            }
                        }
                    }
                    arr_24 [i_5] [i_6] = ((6 >> (((min((16390349537914224943 >= -9093730567842946939), var_6)) + 4965642363735740262))));
                }
            }
        }
    }
    var_24 = (min(var_24, (((((((!(((9 ? -31809 : 42374))))))) ^ ((min(32767, -7672224970997532908))))))));
    #pragma endscop
}
