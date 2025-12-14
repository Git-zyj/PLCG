/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(-30729, 6807)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_18 ^= ((arr_2 [i_1 + 1] [i_1 - 1] [i_1 + 3]) ? (arr_2 [i_1] [i_1 - 1] [i_1 - 1]) : ((max(153, 198))));
                var_19 = (!(arr_2 [i_0] [i_0] [i_0]));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] = (min(((((max(55, 30484))) == ((var_14 ? 16946 : var_6)))), (((min(-55, 15)) > 2898))));
                            var_20 = arr_4 [i_1 - 2];
                            var_21 = var_2;
                        }
                    }
                }

                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        var_22 = (min(var_22, ((((((!(arr_10 [i_0] [i_0] [i_0] [i_0])))) % ((min((arr_0 [i_4]), (arr_0 [i_4])))))))));
                        var_23 = ((+(max((((arr_0 [8]) ? (arr_18 [i_0] [i_4 - 1] [i_4 + 4] [i_5]) : (arr_1 [i_1 - 2]))), (!-2898)))));
                        var_24 = (max(var_24, (arr_14 [i_0] [i_1 + 3] [i_4] [i_5 - 2])));
                        var_25 += ((-(-1877615907 ^ -58)));
                    }
                    var_26 -= (min(var_0, var_15));
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_27 = (((((max((arr_16 [i_0] [i_1] [i_0] [i_0] [i_0]), (arr_17 [i_0] [i_1]))))) ? (max(((max(56, 85))), (min((arr_6 [11] [i_1 + 3] [i_6]), 2920)))) : (var_9 | var_16)));
                    var_28 *= (min(-2888, 4294967295));
                    var_29 = (((min((min(15, var_2)), (arr_9 [i_0] [i_0]))) / (((((1925003907 ? var_13 : -2917)))))));
                }
            }
        }
    }
    var_30 = (max((5561 / 1), ((204 ? -2072381683 : 15062816282916315619))));
    #pragma endscop
}
