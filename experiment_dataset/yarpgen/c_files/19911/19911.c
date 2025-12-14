/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((((~(((-9223372036854775807 - 1) % 611119371)))) < (~-3238039904122135763)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 23;i_4 += 1)
                            {
                                arr_12 [i_3] = (max((((arr_6 [i_0] [i_0 - 1] [i_3 - 2]) ? (arr_6 [i_0] [i_0 - 1] [i_3 - 2]) : 580838582)), (min((arr_6 [i_0 - 1] [i_0 - 1] [i_3 - 2]), var_11))));
                                var_12 = ((~(arr_1 [i_0] [i_0])));
                                var_13 = max((((~1) ? (arr_6 [i_0] [i_0] [14]) : (arr_9 [i_3 + 2] [10] [i_4] [i_4 - 1] [i_4]))), var_9);
                            }
                            for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                            {
                                arr_15 [i_3] [i_3] [i_2] [i_3] = ((((max((arr_11 [i_1] [10]), (arr_9 [i_1] [i_1] [i_5 - 1] [i_5] [i_5])))) ? ((((max(7323400013356238422, 9920672687272671124))) ? (min(12674327126427388314, 50)) : 1049390836)) : 22836));
                                arr_16 [i_0] [i_0] [i_3] [i_0] = ((max(-580838583, (max(var_4, 582108541)))) ^ ((max((max(-27773, var_3)), (!6590404614444389849)))));
                                var_14 |= ((((!((min(206, -908953711)))))));
                                var_15 -= ((((((arr_5 [i_5 - 1] [i_5] [i_5 - 1] [i_5]) % var_7))) | (~var_6)));
                            }
                            for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                            {
                                arr_21 [i_2] [i_3] [i_3] = 255;
                                var_16 -= (((var_2 + 2147483647) >> ((((~(min(var_11, (arr_3 [i_0] [i_0] [i_0]))))) - 46))));
                            }
                            var_17 = (((~50) >= ((((arr_0 [i_0 + 1]) ? (~var_8) : (~2730448532))))));
                            var_18 = ((max((arr_3 [i_3 + 2] [i_2] [i_0 - 2]), (arr_3 [i_0 - 3] [i_2] [i_2]))));
                        }
                    }
                }
                arr_22 [i_0] [i_0] [i_1] = ((((!((min(var_6, (arr_8 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1])))))) ? ((min(((-1913858084 ? 0 : 255)), (var_3 + var_8)))) : (((arr_18 [i_0 - 1] [1] [i_0] [i_0] [i_0] [i_0]) / (arr_18 [i_0 - 1] [0] [0] [i_0] [i_0] [0])))));
            }
        }
    }
    var_19 = (max(var_19, var_6));
    #pragma endscop
}
