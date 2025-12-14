/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = (((var_13 % var_7) == (min((var_10 - var_9), (min((arr_2 [i_0]), (arr_3 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_18 [i_3] [i_0] [i_3] [i_3] [i_3] [i_3] = ((-(((((((arr_8 [i_0]) ^ var_6))) && (!-3850521881439937471))))));
                                var_16 = ((~(((arr_14 [i_0]) + 1))));
                                var_17 += ((~(((arr_1 [i_3]) | var_15))));
                            }
                            var_18 = ((-((min((max(0, var_6)), (max(41, var_1)))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = ((((((!var_14) < (var_3 - var_9)))) >> ((((~(!-2946795379261870986))) + 5))));
    #pragma endscop
}
