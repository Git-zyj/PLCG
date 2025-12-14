/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (165 == 1);
    var_17 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = (((arr_2 [i_0 - 2]) ? ((max((arr_8 [i_0 - 2] [i_1] [i_2]), (arr_5 [i_0 + 1])))) : (arr_5 [i_2 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [22] [i_1] [i_3] = ((((max(13274, ((max(1, 1)))))) ? (arr_4 [i_2 + 1] [i_1] [i_0 + 1]) : (min(((11 ? var_12 : -8009338196212214559)), (((!(arr_3 [i_1] [i_1]))))))));
                                arr_15 [i_1] [i_1] [i_1] [i_1] = (max(2083, -2094));
                                var_19 = (min(var_19, ((max((((((max(65504, (arr_13 [23] [i_1] [i_1] [i_1])))) == 3840349865))), (arr_6 [i_0 - 1]))))));
                            }
                        }
                    }
                    var_20 = (max(var_20, ((min((min(-2078, 1060901790)), ((69 >> ((((1 ? (arr_1 [8] [i_1]) : -2094)) - 8885)))))))));
                    var_21 = (((((((max(0, 1)))) ^ (arr_11 [i_0] [i_0]))) + ((+(max((arr_8 [1] [i_1] [i_2]), var_13))))));
                }
            }
        }
    }
    var_22 = (min(var_22, (((-((-(var_3 + var_15))))))));
    #pragma endscop
}
