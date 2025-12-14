/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(((-48 / 7172091334048532543) * -var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min((arr_1 [i_0]), (((arr_4 [i_0]) & 7172091334048532543))));
                arr_6 [i_1] [i_0] = (((((3104 ? 75 : 213))) ^ ((7172091334048532565 ? 7172091334048532550 : 231))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                            {
                                var_14 = ((-249952608 ? 7172091334048532538 : (max(-7172091334048532551, 224))));
                                arr_16 [0] = -1358699189;
                                arr_17 [i_0] = (min((var_4 & 2336304026), 1));
                                var_15 = ((((1958663270 ^ ((-7172091334048532563 ? (arr_4 [i_1]) : 16388)))) & 404233882));
                            }
                            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                            {
                                var_16 = 1958663270;
                                arr_21 [i_0] [i_1] &= ((-(-598 * 404233877)));
                                arr_22 [i_5] [i_1] [i_1] [5] [i_5] = (((((-25147 ? 1358699188 : 5390))) ^ (min((max((arr_1 [i_0]), (arr_14 [1] [i_1] [i_2] [i_3] [i_5]))), (((-(arr_13 [i_0] [i_1] [i_2] [i_3] [i_5]))))))));
                            }
                            arr_23 [i_0] [i_3] [i_0] [i_3] = -1862;
                            arr_24 [i_0] [i_1] [i_2] [i_3] &= (((((7172091334048532543 & 201) ? 105 : (arr_14 [i_3] [i_1] [i_2] [i_1] [i_0]))) ^ (max(1762330429, (var_2 + 37)))));
                            arr_25 [i_0] [i_1] [i_0] [i_2] [i_0] = (max(((min((arr_12 [i_0] [i_0] [i_0] [i_3]), 0))), ((max((arr_7 [i_2 + 1] [i_2] [i_2] [i_2 + 1]), var_9)))));
                        }
                    }
                }
            }
        }
    }
    var_17 = ((var_9 & (max((var_1 ^ 9083539879077453712), -359515743))));
    var_18 = var_3;
    #pragma endscop
}
