/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = (~var_4);
            var_17 = (max(var_17, (((((~(arr_0 [i_1])))) ? ((max((min(1, var_13)), 1))) : ((-(!1035240051)))))));
            arr_7 [i_0] [i_0] = (((((arr_2 [i_0]) ? var_14 : ((var_10 ? 65535 : (arr_3 [i_1] [i_0] [i_0]))))) * 1));
        }
        var_18 &= 1;
    }
    var_19 *= (min((((-1901780687080201329 ? (1 != var_8) : var_4))), ((14336 ? var_8 : (var_13 > -1981693940)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_2] [i_2] = ((((((arr_11 [i_2] [i_3]) ? -18 : (arr_8 [i_2])))) ? 1 : var_3));
                arr_14 [i_2] [i_3] = (arr_11 [i_2] [i_2]);
                var_20 -= ((((((max((arr_8 [i_3]), (arr_11 [i_2] [i_2])))) ? ((max((arr_10 [i_2]), 127))) : ((max(20024, 65535))))) > (arr_12 [i_2] [i_3])));
                arr_15 [i_3] [i_2] [i_2] &= 1;

                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    arr_20 [i_2] [i_3] [i_4] = (max((((~var_14) | (arr_10 [i_3]))), (max(((max((arr_9 [i_3] [i_3]), (arr_19 [i_3] [i_3] [i_3])))), (((arr_9 [i_3] [i_4 - 2]) ? 1 : var_6))))));
                    arr_21 [i_3] [i_4] = ((((-124 == (((var_2 || (arr_19 [i_2] [i_2] [i_2]))))))) * (arr_10 [i_4]));
                    arr_22 [i_2] [i_2] [i_2] [i_4 - 1] = var_14;
                }
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    arr_25 [i_2] [i_2] [i_5] = (((arr_12 [i_5 + 1] [i_2]) ? (((2050981130 + -16901) + (1 / 1))) : (min(((-(arr_17 [i_2] [i_2] [i_2] [i_2]))), (arr_16 [i_5 + 1] [i_5] [i_5 + 2])))));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_32 [i_2] [i_2] [i_6] [i_6] [i_2] [i_6] |= (!1);
                                arr_33 [i_2] [i_2] [i_2] [i_6] [i_2] |= (((-2147483647 - 1) ? 6186 : 1));
                                var_21 |= ((-((1 ? (arr_9 [i_7] [i_7]) : -126))));
                                var_22 = (((arr_24 [i_5] [i_5] [i_5]) ? 1 : 4267025712));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_12;
    var_24 = (11069310079451737050 == 1);
    #pragma endscop
}
