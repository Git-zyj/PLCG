/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~-var_13);

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_15 = (1030453699 <= 1);
        var_16 *= (arr_1 [i_0 - 1] [i_0 - 3]);
        var_17 &= (min(-4682385249808540852, 1));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_18 = ((-((var_4 ? var_7 : var_7))));
        var_19 ^= ((var_0 == (arr_4 [i_1 - 2])));
    }
    var_20 |= (min(3, 79974690311728418));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_21 += (max(var_0, (~-32732)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((((min(-6254227404676025011, -4))) + (min((arr_11 [i_3 + 2] [5] [5]), var_5)))))));
                                var_23 = ((!(arr_14 [i_5] [i_3 - 2] [i_3 - 1] [i_3 - 2])));
                                var_24 = (min(var_24, (arr_16 [i_2] [i_3] [i_4] [i_5] [i_4])));
                            }
                        }
                    }
                }
                var_25 = ((+((var_11 ? (arr_11 [i_2] [i_2] [i_2]) : var_2))));
            }
        }
    }
    #pragma endscop
}
