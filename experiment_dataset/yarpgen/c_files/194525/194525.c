/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((2693940133 ? (var_0 + var_8) : (max(var_3, var_7)))) + var_12);
    var_14 = -var_11;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 - 2] [i_0] = ((-(!var_9)));
        arr_3 [i_0] [6] |= (--1);
        arr_4 [i_0] = (((arr_1 [i_0] [i_0 - 1]) ? var_8 : (max(var_10, ((var_5 ? var_5 : var_11))))));
        var_15 = ((((min(var_6, (arr_1 [1] [i_0 - 2])))) ? (var_8 ^ var_7) : 1));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_8 [i_1] = (((((-(arr_6 [i_1 + 2])))) ? ((((arr_6 [i_1 + 2]) | var_8))) : (var_9 + var_6)));
        var_16 &= 3152763574;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_17 *= max((arr_9 [i_1 + 3]), (min(51570, (arr_12 [i_1 + 2] [i_2] [i_1 - 1] [i_1 - 1]))));
                        arr_16 [i_1] [i_3] [23] [i_4] = min((max(((min(var_1, var_5))), ((-(arr_14 [i_1 + 4] [i_2] [i_2] [i_3] [i_3]))))), ((var_2 ? 1 : var_3)));
                        arr_17 [i_1 + 4] [i_2] [i_3 - 1] [i_3] = 13966;
                        arr_18 [i_1 - 1] [i_4] [i_3] [i_4] [i_3] [i_4] = (min(((1804242376 & (var_4 >> 1))), var_1));

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_18 = (((max((var_2 >= var_7), ((51583 << (2806 - 2796))))) > 1));
                            var_19 = (min(var_19, (((1804242375 ? (min(var_2, (arr_19 [i_1 + 1] [i_2] [i_1 + 1] [1] [i_4] [i_1 + 1] [i_5]))) : (((((((arr_10 [i_5]) | var_4))) && var_8))))))));
                            var_20 = (min(var_6, ((((((arr_11 [i_1 + 2] [i_2] [i_3] [i_5]) && (arr_15 [i_3]))) || (!var_3))))));
                            arr_22 [i_3] [i_3] [i_3 + 2] [i_3 + 2] [i_5] [i_5] [i_3] = (((min((max(var_2, (arr_15 [i_3]))), (arr_11 [i_4] [i_2] [i_3] [i_4]))) - 1));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_21 = (max(var_21, ((((arr_5 [i_1 + 1] [i_1 - 1]) ^ var_0)))));
                            var_22 = ((-(var_10 <= 1)));
                        }
                    }
                }
            }
        }
        arr_25 [i_1] = -1804242376;
    }
    #pragma endscop
}
