/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_14 += (max(0, 12180877971201555048));
                            arr_12 [i_3] [i_2] [i_2] [i_2] [i_2] [i_0] = ((((!(arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1]))) ? (arr_4 [i_0] [i_1] [i_2] [i_2]) : ((max((arr_6 [i_0] [i_0] [i_2] [i_0]), 14)))));
                            var_15 += (max(20, (((((2477945953 ? (arr_0 [i_0] [i_1]) : (arr_1 [i_3])))) ? 400844978 : (arr_0 [i_0] [i_0])))));
                            var_16 += (((max(400844978, 14)) ^ (max(61157, 2477945953))));
                        }
                    }
                }
                var_17 = ((((max(400844978, ((var_13 ? 3659029656 : 255))))) ? 1795551768 : 24229));
            }
        }
    }
    var_18 = var_0;
    var_19 = 4372;
    #pragma endscop
}
