/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((!((((((1 ? 0 : 1))) ? ((-(arr_2 [i_0] [i_1] [i_1]))) : (((arr_3 [i_0] [i_0]) ? -32764 : var_1)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = ((4953 ? (arr_0 [i_3] [i_3 - 3]) : (min(((-31655 ? (arr_12 [9] [9] [i_2] [9] [i_4]) : (arr_0 [i_1] [i_2]))), 4227858432))));
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_3] [i_4] [i_4] = 1;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_19 = (max(var_19, (((!(arr_2 [i_6] [i_1] [i_5]))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((((!(!-32765)))), ((-(67108847 <= 1)))));
                            var_20 = var_10;
                        }
                    }
                }
            }
        }
    }
    var_21 = ((!(!var_3)));
    #pragma endscop
}
