/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((((arr_0 [i_1] [i_1 - 1]) ^ (max((arr_0 [i_1] [i_0]), -39)))) & (39 ^ -39)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_18 ^= (((-70 + 2147483647) << (((-39 + 61) - 22))));
                            arr_12 [i_0] [i_1] [i_2] [i_0] = (max(((((arr_3 [i_0]) + (arr_3 [i_0])))), (((arr_3 [i_0]) ^ 6564005406918323589))));

                            for (int i_4 = 1; i_4 < 17;i_4 += 1)
                            {
                                arr_15 [i_2] [i_3] [i_0] = 48833;
                                arr_16 [i_0] [i_1] [i_2] [i_4] = (min(((((arr_3 [i_0]) > (arr_3 [i_0])))), (arr_3 [i_0])));
                                arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = (i_0 % 2 == zero) ? ((((arr_13 [i_4] [i_4 + 1] [i_3] [i_0] [i_3] [i_3] [i_2]) >> (((((arr_13 [i_4] [i_4 - 1] [i_4] [i_0] [i_4] [i_4] [i_1]) & (arr_13 [i_4] [i_4 + 1] [i_4] [i_0] [i_4] [i_2] [i_1]))) - 1534938048551924288))))) : ((((((arr_13 [i_4] [i_4 + 1] [i_3] [i_0] [i_3] [i_3] [i_2]) + 9223372036854775807)) >> (((((((arr_13 [i_4] [i_4 - 1] [i_4] [i_0] [i_4] [i_4] [i_1]) & (arr_13 [i_4] [i_4 + 1] [i_4] [i_0] [i_4] [i_2] [i_1]))) - 1534938048551924288)) + 3386083607629544355)))));
                            }
                            for (int i_5 = 3; i_5 < 16;i_5 += 1)
                            {
                                arr_21 [i_0] [i_2] [i_1] [i_0] = 65524;
                                arr_22 [i_0] [i_0] = ((((((arr_8 [i_0] [i_3] [i_0] [i_0 - 1]) - (arr_8 [i_0] [i_1] [i_0] [i_0 - 1])))) == 1178678078));
                                arr_23 [i_0] [i_5] [i_2] [i_0] [i_5] [i_5] [i_0] = (arr_14 [i_0]);
                            }
                            arr_24 [i_3] [i_3] [i_2] [0] [i_3] &= (min(((1425256763 / (arr_13 [i_0] [i_1] [i_2] [12] [i_2 + 2] [i_2] [i_1]))), (((arr_0 [i_1 - 3] [i_0 - 1]) / (arr_13 [i_0] [i_0] [i_2] [2] [i_2 + 1] [i_3] [i_1])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                arr_31 [i_8] [i_0] [i_6] [i_1] [i_0] [i_0] = (arr_4 [i_6]);
                                arr_32 [i_0] [i_0] = (((((arr_28 [i_1 - 3] [i_7 + 2]) + (arr_28 [i_1 + 2] [i_7 + 2]))) > (((((arr_28 [i_1 - 2] [i_7 - 3]) >= (arr_28 [i_1 + 2] [i_7 - 2])))))));
                                arr_33 [i_0] [i_1] [i_6] [i_0] [i_8] = ((65518 ^ (((arr_29 [i_0] [i_1]) << (-24 + 41)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, ((max(2869710532, var_2)))));
    var_20 = (min(var_20, var_6));
    var_21 = (2869710532 | 1425256747);
    #pragma endscop
}
