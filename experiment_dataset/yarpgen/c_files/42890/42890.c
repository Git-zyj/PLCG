/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((!(((var_12 ? 127 : var_8)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = (((!(!4193280))));
                    var_22 = (arr_6 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_23 = min((arr_7 [0] [12] [7] [12]), (max(var_16, (arr_6 [i_0 - 1]))));
                                var_24 = (((!2743714920706954795) || ((max(15703029153002596821, 127)))));
                            }
                        }
                    }
                    arr_14 [i_2 - 2] [i_0 + 1] [i_0 + 1] = (min((((!((min(24134, (arr_0 [i_0]))))))), (arr_2 [i_2] [i_0] [i_0])));
                }
            }
        }
    }
    var_25 = (!15703029153002596821);
    #pragma endscop
}
