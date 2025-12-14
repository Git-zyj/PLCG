/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((~-1715720904) == 0)))) < (var_0 & var_10)));
    var_13 = ((var_1 ? (min(86150938, ((-1276028322 ? -187145629 : 46458)))) : (max(-10357, (-1031409084 || var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((-30786325577728 ? (30786325577728 % 19082) : (((arr_3 [i_0]) << var_9))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_14 = 510;
                            var_15 = max(((max(57691, (7491564482256108129 || 11)))), ((((min(-187145629, 65025))) ? 187145615 : 1)));
                            var_16 = (max(((((19081 | (arr_6 [i_0]))))), -264474502));
                            var_17 = (((((((19078 + (arr_1 [i_3 + 1]))) / var_9))) < (min(var_5, var_0))));
                            var_18 = (max(var_18, ((((arr_8 [7] [i_2 + 2] [i_3]) % 25598)))));
                        }
                    }
                }
            }
        }
    }
    var_19 += var_4;
    var_20 += (~var_1);
    #pragma endscop
}
