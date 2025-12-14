/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (((var_2 <= (arr_0 [i_1 - 1] [i_1 - 3]))) ? (min((!var_0), (min(var_13, var_0)))) : ((max((arr_1 [i_0] [i_0]), (min((-2147483647 - 1), -24570))))));
                arr_6 [i_1 - 1] [12] = ((((~(arr_0 [i_0] [i_1 + 1])))) ? ((-(arr_0 [1] [i_1 - 2]))) : (arr_2 [i_0] [i_1 - 2]));
                var_15 = (max(var_15, (((~(((~var_7) % var_12)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_16 = 1;
                            var_17 -= (((205 / var_9) ? ((var_8 - (arr_8 [i_0] [i_0] [i_2] [i_3 - 1]))) : (((min(var_0, var_9)) % (arr_12 [i_0] [i_1])))));
                            arr_13 [0] [i_0] [i_0] [18] |= ((((((min(113, var_1))) ? (min((arr_2 [i_2] [1]), var_9)) : (((var_3 ^ (arr_10 [i_0]))))))) ? (~var_5) : var_3);
                        }
                    }
                }
            }
        }
    }
    var_18 = var_7;
    var_19 = (max(var_19, var_5));
    #pragma endscop
}
