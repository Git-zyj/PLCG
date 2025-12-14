/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;
    var_17 = ((-11032 % ((((max(275512261, 94)) >= (180 && -11))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [5] [2] [i_1] [3] = ((2745974392 >> (((((27027 * 0) ? ((((-11 + 2147483647) << (((var_8 + 105) - 6))))) : (((arr_5 [3] [3]) & var_8)))) - 4806944922895160964))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [1] [16] [i_1] [1] = (max(var_4, ((((-106 ? -3460516348338577841 : -3899682890610024501)) / (((23471 ? var_13 : var_9)))))));
                                var_18 |= (max(0, ((((max((arr_10 [3] [3] [13] [14] [1] [14]), var_15))) ? ((var_15 ? 0 : 32759)) : (-3460516348338577841 >= 32734)))));
                                var_19 = ((((max(6435447727257949127, var_13))) ? ((((18446744073709551610 < ((max(2141677270267663639, 2141677270267663661))))))) : -var_9));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
