/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= 2078911397;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    var_21 = (max(var_5, (7 + -2078911377)));
                    var_22 = (min(var_22, ((((~1998306355482590762) ? ((((arr_4 [i_1 - 1] [i_1 - 1]) && (arr_4 [i_1 - 1] [i_1 - 1])))) : (!9223372036854775791))))));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = (arr_2 [i_0]);
                }
                var_23 = arr_7 [i_1] [i_1] [i_1];
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_24 = (var_13 || var_12);
                            var_25 = (max(var_25, (((222099057 ? 1018806974120013153 : ((((!((2078911392 < (arr_3 [i_1 + 1]))))))))))));
                            var_26 = (max(var_26, (arr_12 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [4])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
