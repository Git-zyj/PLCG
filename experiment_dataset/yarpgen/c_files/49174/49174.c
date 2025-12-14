/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_6));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = ((-((((arr_0 [i_1 - 3] [i_0 + 2]) || var_7)))));
                                var_13 = ((((((var_6 ^ var_9) || ((min(var_3, (arr_1 [i_0]))))))) % (max(((min(1, 31690))), var_7))));
                                var_14 = (max((!var_7), (!var_0)));
                                var_15 = (~1);
                            }
                        }
                    }
                    var_16 = (((((-((max(0, 30028)))))) ? (((arr_0 [i_0] [i_0]) / (arr_6 [i_0] [i_0] [i_1 + 3] [i_0]))) : (((-var_2 != (arr_10 [i_0] [i_0] [i_0] [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
