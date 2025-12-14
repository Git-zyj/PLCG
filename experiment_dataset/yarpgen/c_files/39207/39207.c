/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_2 + 2] [i_2] [i_0 + 1] [i_0 + 1] = ((+(((arr_7 [i_2] [i_0]) - (7868402855007802246 + -7868402855007802246)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] = (((!((min((arr_8 [i_2 - 3] [i_3 - 1]), 7868402855007802246))))));
                                arr_17 [i_0 + 1] [i_1] [i_2 + 1] [i_3] [i_2 + 1] = ((4964 < (arr_1 [i_1])));
                                arr_18 [i_0] [i_1] = (max(13, (!7868402855007802246)));
                            }
                        }
                    }
                    arr_19 [i_1] = 7868402855007802246;
                    arr_20 [i_0] [i_0] [i_1] [i_0] = (((arr_3 [i_1]) ? ((((-7868402855007802258 + 9223372036854775807) << (((-1073741824 + 1073741862) - 37))))) : (min(18446744073709551603, (arr_15 [i_2 - 2] [i_0 + 1] [7])))));
                }
            }
        }
    }
    var_13 = (!-7868402855007802247);
    #pragma endscop
}
