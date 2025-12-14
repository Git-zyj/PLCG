/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_15 = (max(var_15, -393383026));
                    arr_9 [i_0] [i_1] [i_1] = var_3;
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_16 = var_13;
                    arr_14 [i_0] [i_0] [3] [i_3] = ((2147483647 ? (((((arr_3 [i_0 - 1] [i_0]) == var_3)))) : (arr_1 [i_0])));
                    var_17 = ((-(((arr_4 [i_0 - 3] [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
                    var_18 = (min(var_18, 239));
                    var_19 = (max(((+(max((arr_1 [i_0]), var_7)))), (arr_0 [i_0])));
                }
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    var_20 = -var_11;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_21 = ((var_8 <= (arr_10 [i_4 + 3] [i_0] [i_4 + 1])));
                                arr_23 [i_6] [i_0] [i_4] [i_0] [i_0] = (arr_4 [i_0] [i_0]);
                            }
                        }
                    }
                    arr_24 [i_0] = (max((((~var_10) ? 560090170 : ((13 << (var_10 - 25))))), var_5));
                }
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_22 = 1442449031417133603;
                                var_23 = var_9;
                                var_24 = ((var_13 << (((((arr_4 [i_0] [i_0]) ? 18149 : (arr_32 [i_0 - 4] [i_0 - 2] [i_0] [i_0 - 3] [i_7 + 1]))) - 18137))));
                                var_25 = (min((((((4294967295 ? (arr_6 [11] [11] [i_8] [i_0]) : 24376))) ? -108 : (arr_1 [i_0]))), ((min(60, 204)))));
                            }
                        }
                    }
                }
                arr_36 [11] [1] [i_0] = (min(((var_1 >> (((arr_34 [i_0 - 4] [i_0 - 4] [i_0 - 2] [i_0] [i_0] [i_0 - 3] [i_0]) - 171)))), ((((arr_20 [i_1] [i_0] [i_0] [i_0] [i_0 - 3]) ? var_0 : (arr_20 [i_0] [i_0 + 2] [i_0] [i_1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
