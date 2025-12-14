/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_10 = (((((((((arr_3 [i_1] [i_2]) || 3968385042438453941))) % (arr_1 [13])))) & ((var_0 ? (min(var_5, (arr_7 [i_2]))) : (221 / 63224)))));

                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_12 [i_4] [i_1] = (arr_8 [14] [8] [i_2] [i_4]);
                            var_11 = (min(var_11, ((((arr_11 [i_0] [i_0] [i_3 - 2] [i_3]) * var_9)))));
                            arr_13 [i_0] [i_2] [3] [i_3] = ((!(arr_7 [i_3 - 2])));
                            var_12 = ((var_6 << (((var_9 | var_4) + 83))));
                        }
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            arr_18 [2] [i_5] [i_5] = max(10116, 11876815355468018526);
                            var_13 = (max(var_13, (((((min(var_0, var_4)))) - var_8))));
                        }

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_14 = var_1;
                            var_15 = (max(var_5, ((var_1 ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : (arr_14 [i_0] [i_1])))));
                            var_16 = (min(var_16, (((((max((arr_19 [i_0] [i_1 - 1] [6] [6] [i_6]), (min(542388674, 42059))))) ? (arr_1 [i_1]) : (max((min(42048, -953556615)), var_9)))))));
                            var_17 = ((var_1 - ((((var_6 ? (arr_8 [i_0] [i_2] [i_0] [i_6]) : (arr_17 [i_0] [i_0])))))));
                        }
                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            var_18 = arr_23 [i_0] [i_0] [i_0] [10] [2] [i_0];
                            var_19 &= (max((arr_7 [i_0]), var_1));
                            var_20 = (max(var_20, (max((arr_16 [i_0] [i_1 - 1] [i_3 - 1] [i_3] [i_7] [i_7 + 1] [i_7]), (arr_23 [i_0] [5] [i_1] [i_0] [i_3] [i_7 + 1])))));
                        }
                    }
                }
                var_21 = (min(var_21, (arr_11 [i_0] [i_0] [i_0] [i_0])));
                var_22 = (((((-121 ? 42062 : 11876815355468018531))) ? (arr_5 [i_0] [i_0] [i_0]) : (((((5332 * var_1) < (max(11876815355468018526, 1952877656407988641))))))));
            }
        }
    }
    var_23 = (min(var_23, ((((3072 * 0) ? ((var_1 ? (32763 ^ var_6) : var_2)) : var_0)))));
    var_24 ^= 3062;
    var_25 = (min((((var_9 ? ((65523 ? -1621167146 : -782282543)) : ((var_7 ? var_9 : var_5))))), ((((min(var_0, 4530686519251074882))) ? (var_6 & var_8) : var_5))));
    #pragma endscop
}
