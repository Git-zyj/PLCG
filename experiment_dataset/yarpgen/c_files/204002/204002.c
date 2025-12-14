/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_9 ? 11619746139580417393 : (6826997934129134223 != 79)));
    var_13 = (5286299401268680772 + 6826997934129134239);
    var_14 += (max((~11619746139580417410), var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] = (var_7 / 6826997934129134230);

                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    var_15 = ((85 < (max((arr_3 [i_0] [i_1]), (101 | 176)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 += (max((6826997934129134222 % 6826997934129134245), (((((187 >> (6826997934129134245 - 6826997934129134231)))) ? -8016912328131730101 : 6826997934129134222))));
                                var_17 = var_2;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_18 ^= max(0, 3323196823);
                        var_19 = (min(var_19, (((1 ? 1 : 105553116266496)))));
                    }
                    arr_16 [i_2] = ((((max(101, 187))) + (arr_0 [i_0] [i_1])));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    arr_19 [i_0] [i_6] = ((-1892784898 - (68 / -2792118560921629249)));
                    arr_20 [21] [i_0] [i_1] [i_6] = -1;
                }
            }
        }
    }
    #pragma endscop
}
