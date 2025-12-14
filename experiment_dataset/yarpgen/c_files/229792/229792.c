/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_2] = ((((max((arr_1 [1] [i_1]), var_11))) ? (((arr_6 [i_0] [i_1] [i_2]) ? (arr_7 [i_2] [i_1] [i_0]) : 7849619880810496622)) : ((((1497210132 <= 58679) ? var_7 : (-869934208 % 47259))))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] &= max(((((-22480257 || (arr_11 [i_0]))) ? (max(2797757163, 4294967295)) : 869934228)), (13058 <= 9669));
                        arr_14 [i_0] [9] [i_0] [i_3] = (max(((min(1, 1))), (max((arr_3 [i_0] [i_0]), (arr_3 [1] [i_2])))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_17 [4] [1] [i_2] [i_4] [2] [9] = (min((!869934228), ((-((21396447 ? var_11 : 1))))));
                        var_13 = (min(1, 13143227425574720429));
                        arr_18 [5] [6] [i_4] [i_4] = (65535 | 2797757164);
                    }
                    arr_19 [4] = (max((min((((25383 ? (arr_6 [i_2] [9] [i_0]) : 17333))), (max((arr_2 [i_0]), 3896560347)))), ((min(626020589, 55866)))));
                    arr_20 [i_0] = (max(var_7, ((min((arr_9 [i_0] [i_0] [i_1] [i_2]), (arr_9 [i_2] [i_1] [7] [i_0]))))));
                }
            }
        }
    }
    var_14 = (min(var_14, ((((((var_9 ? (max(18446744073709551602, 1)) : var_1))) ? var_8 : (min((10429 || 4476041138096260434), var_2)))))));
    var_15 = 4294967295;
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                {
                    var_16 = (((max(var_11, ((((arr_21 [i_6]) <= var_3))))) > ((max(((11770566755042580221 ? -869934228 : 1)), (arr_21 [i_5 + 1]))))));
                    arr_29 [i_6] [6] [10] = 4689;
                }
            }
        }
    }
    #pragma endscop
}
