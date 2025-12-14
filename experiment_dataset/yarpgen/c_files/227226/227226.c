/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((-6872483735592638302 < (((var_5 ? 42282 : var_10))))) ? var_1 : ((min(((var_13 ? 3836 : var_15)), (var_10 <= 42274))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0 + 2] [i_1] [i_1] = -1554931154;
                    arr_10 [i_0] [i_1] [i_2] = (arr_1 [i_1 + 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [16] [i_3] [i_4] = (((((-1027670358 ? var_10 : (((arr_1 [i_1 + 1]) - (-9223372036854775807 - 1)))))) && (((arr_2 [i_0 + 2]) < (arr_2 [i_0 + 1])))));
                                var_17 = (max(var_17, ((min((((-660373123 ? (arr_3 [i_0 - 1] [i_1 + 1] [i_0 + 1]) : (arr_3 [i_0 - 1] [i_1] [i_0 + 1])))), -9223372036854775807)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0 - 1] [15] [i_0] = 42288;
                                var_18 = (max(((((arr_18 [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_0 + 1] [i_5]) ? ((var_10 >> (var_5 - 256530425))) : (arr_2 [i_1])))), (((((23261 ? var_13 : var_5))) ? ((1996638905 ? 16193124800633346961 : 4144880493)) : var_7))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 15;i_8 += 1)
        {
            {
                var_19 = (((((122521768 ? 1357154098461592802 : (((min(0, 23255))))))) && ((((((8256 ? -31677 : 3714))) ? var_2 : (arr_25 [i_7] [i_7]))))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            arr_31 [i_10] = ((max((((arr_13 [i_7] [i_7] [i_7] [19] [i_7] [i_10]) ? -871442240 : (arr_19 [i_7]))), 16376)));
                            var_20 = (min(52402, 4294967283));
                            arr_32 [i_7] [i_7] [i_7] [i_10] = (arr_28 [i_8] [13] [i_10]);
                            arr_33 [i_7] [i_7] [i_7] [i_7] &= ((((((((var_12 + 9223372036854775807) << (1554931153 - 1554931153)))) ? 3714 : (arr_12 [i_7] [i_10]))) / var_1));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 15;i_12 += 1)
                    {
                        {
                            var_21 = (arr_25 [i_7] [i_7]);
                            var_22 = ((-((((((arr_37 [i_11] [i_11] [11] [i_7]) * (arr_16 [i_11] [i_8] [i_11] [8]))) >= var_13)))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (max((((-var_1 ? var_13 : (65531 ^ var_8)))), (max((var_1 - 4294967283), (((var_12 ? -660373123 : 31904)))))));
    #pragma endscop
}
