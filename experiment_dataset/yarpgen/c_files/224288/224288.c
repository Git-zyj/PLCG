/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (max((max((min(1, var_2)), (var_3 ^ 30549))), ((min((-1939696136 % -53), ((min(30525, var_8))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_12 -= 167;
                                var_13 = (min(var_13, (((!(min(((!(arr_3 [12] [12] [i_2]))), (((arr_9 [11] [17] [11] [i_3]) && var_0)))))))));
                                var_14 = ((-((+(max((arr_11 [i_0] [i_1] [i_0] [i_3] [i_4]), 11609209773093257402))))));
                            }
                        }
                    }
                }
                arr_12 [i_0] = min(((-(min((arr_6 [i_1]), var_1)))), (((((max(var_7, (arr_6 [i_0])))) - ((-(arr_6 [i_0])))))));
            }
        }
    }
    var_15 = (min(var_15, ((((max((-1939696134 ^ var_0), ((min(var_5, -70))))) != (min(1939696136, (var_3 | -1566409480))))))));
    #pragma endscop
}
