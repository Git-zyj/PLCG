/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (min(var_15, ((-((((arr_0 [7]) >= (arr_0 [4]))))))));
        var_16 = (min(var_16, (((15928068116610613376 < (arr_1 [i_0]))))));
    }
    var_17 = ((((-(var_2 == var_0))) == (((((var_10 ? var_3 : 15928068116610613376)) == var_1)))));
    var_18 = (max(var_18, var_1));
    var_19 = (max(var_1, var_11));

    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_20 = (max(2518675957098938240, (-9223372036854775807 - 1)));
                    var_21 = (((((((min(13398543024740065261, (arr_8 [3] [3] [i_3])))) ? (-7146149596333531000 - 1476125624) : ((1476125631 ? (arr_8 [i_1] [i_2] [14]) : (arr_5 [i_1])))))) ? ((~(-2147483647 - 1))) : (((var_4 && (((~(arr_6 [i_2] [i_3])))))))));
                    var_22 -= (1909932906 ^ -1476125608);
                }
            }
        }

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        var_23 &= (max(var_13, 1476125631));
                        var_24 = -23439;
                    }
                }
            }
            var_25 = ((-(max(var_3, (((var_11 > (arr_0 [i_1 + 2]))))))));
        }
    }
    #pragma endscop
}
