/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += -12259686;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) ? -7641210769630809225 : var_14));
        arr_3 [i_0] [i_0] = ((~(arr_0 [i_0])));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1 - 1] = (max(((var_16 ? ((((arr_5 [i_1]) == 6))) : (var_0 >= var_6))), var_4));
        arr_8 [i_1] = ((34 ^ (var_8 ^ 50807)));
        var_18 = (arr_1 [i_1 + 1]);
        var_19 = (arr_4 [i_1]);
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [10] = (max(var_1, (10916143821347371546 <= var_3)));
                            arr_23 [i_2] [i_3] [i_4] [i_5] [i_2] = (((var_4 ? 7641210769630809224 : (arr_16 [i_3 - 1] [i_3 - 1] [i_2] [i_3]))));
                            arr_24 [i_2] [i_3] [i_2] [i_3 - 3] [i_2] [i_3] = var_5;
                        }
                    }
                }
            }
            var_20 += (((arr_16 [i_2] [2] [2] [i_3]) || (~var_6)));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_21 ^= (((((((5419148316329064577 == (-127 - 1))) ? 0 : (-2147483647 - 1)))) ? ((~(max(var_11, 115)))) : (arr_0 [i_2])));
            arr_27 [i_2] [i_2] [i_2] = ((var_3 >> (var_16 - 18323)));
        }
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            var_22 = (min(var_2, var_6));
            var_23 = (max(var_23, ((min(((min(var_12, 7641210769630809220))), ((((7641210769630809223 ? 122 : 7641210769630809217)) * 1)))))));
            arr_30 [i_2] [i_2] [i_2] = ((((var_10 - (arr_1 [i_8 + 1]))) & (arr_13 [i_2])));
            arr_31 [i_2] [i_2] [i_2] = (((arr_29 [i_2] [i_8]) ? ((~(((arr_1 [i_8]) & var_4)))) : (((~var_1) | (~7641210769630809225)))));
            var_24 = ((((arr_16 [i_8 - 2] [i_8 - 2] [i_2] [i_8 + 1]) ? (arr_16 [i_8 + 2] [i_8 - 2] [i_2] [i_8 - 2]) : (arr_16 [i_8 + 2] [i_8 - 1] [i_2] [i_8 - 2]))));
        }
        arr_32 [i_2] [i_2] = ((((((max(1, var_4))) != ((min((arr_16 [3] [i_2] [i_2] [3]), -1))))) ? (arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]) : (((7641210769630809224 >= var_3) ? (!-1719638082) : ((~(arr_19 [i_2] [i_2] [i_2] [i_2] [i_2])))))));
    }
    #pragma endscop
}
