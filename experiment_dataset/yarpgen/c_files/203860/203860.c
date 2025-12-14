/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = ((!(((-(!9223372036854775807))))));
                                arr_12 [i_2] [i_1] [i_1] [i_1 - 2] [i_1 - 3] = ((~(min((arr_11 [i_4] [i_4] [i_4] [i_4 + 1] [i_4] [i_4] [i_4 - 1]), (arr_11 [i_2] [1] [i_2] [i_4 + 1] [i_4] [i_4] [i_4])))));
                                arr_13 [12] [i_2] [i_2] [i_0] = ((~(arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_2] = -842789447333682783;
                                var_20 = ((~((-(1 > 1)))));
                            }
                        }
                    }
                    arr_15 [i_2 - 1] [17] [i_2] [i_2] = (((~85132205902043701) ? 109 : -114260829));
                    var_21 = (min((arr_6 [i_0] [i_1 + 2] [i_2]), (max(22527, (6860879930117441448 + 34357)))));
                    arr_16 [i_2] [i_1] [i_1] = ((((((((arr_6 [12] [i_1] [i_1 + 1]) > var_13))) == (((!(arr_11 [4] [i_2 + 1] [i_2] [4] [i_0] [i_1] [i_0]))))))) + ((~(!39409))));
                }
            }
        }
    }
    var_22 = 135921105;
    #pragma endscop
}
