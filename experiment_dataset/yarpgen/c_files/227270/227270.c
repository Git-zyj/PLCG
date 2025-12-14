/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        var_19 = max((min(98, ((-32 ? -3942983392622200334 : (-2147483647 - 1))))), var_18);
                        var_20 = min(var_9, ((max(var_17, (arr_9 [15] [i_0 - 3] [i_2])))));
                    }

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_21 = (arr_8 [i_0 + 1] [i_1] [i_1] [i_4] [i_0]);
                        arr_13 [i_4] [i_0] [i_0] [i_0 - 2] = var_11;
                        var_22 = (max((min((max(var_4, (arr_5 [i_4]))), (arr_10 [i_0] [i_1 + 1] [1] [i_4] [1] [i_0]))), var_10));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_23 = (min(((min((arr_0 [i_0 - 3]), (arr_9 [i_0] [i_0 - 2] [i_1 - 4])))), ((-3942983392622200358 ? (arr_15 [1] [i_0] [i_0]) : (arr_0 [i_0 - 1])))));
                                var_24 += (((((((max((arr_10 [1] [13] [13] [i_5] [i_1] [i_6]), (arr_10 [3] [i_1 + 1] [3] [i_5] [16] [3])))) - ((min((arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5]), (arr_0 [i_0]))))))) ? (~3942983392622200347) : (arr_10 [i_1] [0] [0] [i_5] [11] [i_5])));
                                var_25 = var_15;
                            }
                        }
                    }
                }
                var_26 = (i_0 % 2 == 0) ? ((min(((((((arr_16 [6] [i_1 - 1] [i_1 - 3] [11] [i_1 - 3] [i_1] [i_1 - 4]) ? var_10 : (arr_7 [i_0] [i_0]))) << (((arr_15 [i_0] [i_0] [i_1 + 2]) - 35))))), ((((min(215, var_0))) ? ((((arr_12 [i_1 + 1] [5] [5] [1]) & var_17))) : (min((arr_0 [i_1 - 3]), -3942983392622200327))))))) : ((min(((((((arr_16 [6] [i_1 - 1] [i_1 - 3] [11] [i_1 - 3] [i_1] [i_1 - 4]) ? var_10 : (arr_7 [i_0] [i_0]))) << (((((arr_15 [i_0] [i_0] [i_1 + 2]) - 35)) + 79))))), ((((min(215, var_0))) ? ((((arr_12 [i_1 + 1] [5] [5] [1]) & var_17))) : (min((arr_0 [i_1 - 3]), -3942983392622200327)))))));
                var_27 = ((((max(((max((arr_8 [i_0 + 1] [19] [3] [i_1 + 2] [i_0]), (arr_5 [i_1])))), (arr_2 [i_0 + 1] [i_1 - 1])))) ? 0 : (arr_11 [i_0 - 2] [i_1 - 1] [i_1 - 2] [i_1 - 1])));
            }
        }
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_28 += (max((~var_7), ((max(var_12, (arr_10 [i_7] [i_7] [i_7] [4] [i_7] [i_7]))))));
        arr_20 [i_7] = (min((arr_18 [i_7] [i_7]), ((((arr_18 [i_7] [i_7]) > (arr_18 [i_7] [i_7]))))));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_29 = (max(((min(-7960304576329203789, 3942983392622200333))), var_4));
        arr_24 [i_8] [i_8] = ((((min(var_6, (arr_16 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [11]))))) ^ 0);
    }
    var_30 = var_7;
    #pragma endscop
}
