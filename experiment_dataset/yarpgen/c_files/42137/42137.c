/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -8582721787951527051;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    arr_10 [12] [i_1] [12] [i_2] = (((((((arr_2 [i_0] [i_0]) || 199)) ? (arr_7 [i_0] [i_0] [i_2] [i_2]) : ((1 + (arr_6 [i_0]))))) * ((((5 / (arr_7 [i_2] [i_1] [i_0] [i_0])))))));
                    arr_11 [i_0] [i_1] [i_0] [i_2] = (((-338952783 != -1379) | ((((~338952783) != ((min(1, -1379))))))));
                    var_16 = ((((min((((184 && (arr_5 [i_1] [i_0])))), (((arr_7 [i_0] [i_1] [i_2] [i_2]) ? (arr_7 [i_0] [i_2] [i_0] [i_1]) : 338952783))))) ? ((((72 ? 182 : 17826)))) : -15823981864689689));
                    arr_12 [i_0] [i_1] [i_1] [i_2] = (((-(179 * 1))));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            {
                                arr_22 [i_4] = (((((max(1, (arr_21 [i_4] [i_1] [i_3])))) <= ((0 ? 182 : -83)))));
                                var_17 |= (((((!(((50 >> (((arr_21 [i_1] [i_1] [i_5]) - 73)))))))) >> ((((((65535 % (arr_7 [i_0] [i_1] [i_3] [i_5]))) + ((99 % (arr_4 [i_3] [4]))))) - 18543))));
                            }
                        }
                    }
                    arr_23 [i_0] [i_1] [i_3] [i_3] |= (((min(2289480170987544204, (arr_13 [i_0] [i_1] [i_3] [i_3]))) - 8771159878145573672));
                }
                arr_24 [i_1] [i_0] [i_0] |= ((arr_5 [i_0] [i_1]) - -9223372036854775807);
            }
        }
    }
    var_18 = (min(var_18, ((((min((((var_3 ? 31478 : var_7))), -9)) | 49549)))));
    var_19 = var_6;
    #pragma endscop
}
