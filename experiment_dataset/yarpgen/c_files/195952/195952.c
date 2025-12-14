/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    var_18 = (((22058 && 255) ? ((~(arr_7 [i_0 - 2]))) : 43477));
                    arr_8 [i_0] [i_1] [i_2] = ((!(((5207 ? 83 : ((14 ? 4873608715680202212 : 2640629881)))))));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_19 ^= (max((var_9 & 3), 65535));
                    var_20 = min(-9086231293350443269, (!-43477));
                    var_21 = ((~(((-3370862203873744600 > var_3) ? ((min((arr_2 [i_0] [i_0]), (arr_6 [i_0] [i_1] [3] [1])))) : ((var_14 ? (arr_5 [i_3]) : (arr_3 [i_3] [i_0])))))));
                    var_22 = (min((min(var_16, (arr_0 [i_0 - 3]))), -0));
                    var_23 = (((((-(arr_10 [i_0 - 3] [i_0 + 1] [i_0 - 3])))) || ((((23067 >> 0) - -15990)))));
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_24 = (min(var_24, ((((((-9086231293350443269 ? (arr_17 [i_6] [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 4]) : (arr_0 [i_0 - 4])))) ? ((((!(arr_0 [i_0 - 4]))))) : (~3101051009151500263))))));
                                var_25 = (max(var_25, (((1776021488252073204 ? (arr_14 [i_5]) : ((max((~-1), ((((arr_10 [i_5 - 1] [i_4] [i_1]) < var_17)))))))))));
                                arr_18 [i_0 + 1] [i_1] [i_0 + 1] [13] [i_6 - 1] [i_0 - 2] [i_5 - 1] = ((-((max(3228399221660917300, 1400873)))));
                                var_26 = (arr_9 [i_6]);
                            }
                        }
                    }
                    arr_19 [i_0] [i_0] [i_4] = ((var_16 ? ((~(min(5269710450866806023, (arr_0 [i_0]))))) : (((~-16574) ? 89 : (var_6 & 43478)))));
                }
                var_27 = (min(var_27, (arr_3 [i_1] [0])));
                var_28 = ((-27920 ? (((arr_4 [i_0 - 1] [i_0 - 1]) ? (arr_4 [i_0 - 1] [i_1]) : (arr_4 [i_0 - 4] [i_0 - 4]))) : (((-(((!(arr_15 [i_0 - 2] [i_1])))))))));
            }
        }
    }
    var_29 = var_6;
    #pragma endscop
}
