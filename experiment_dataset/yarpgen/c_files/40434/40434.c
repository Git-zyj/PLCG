/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((-6890322481359768204 ? -24243 : 491520))) + (max(6724684301531874621, 0))));
    var_19 = (((1 ? ((491514 << (2147483647 - 2147483629))) : (~var_12))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = (max((-4323961401558821078 / 2147483647), 4294475784));
                    var_21 = ((~24242) ? (max(0, (!4294475775))) : 491514);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = (((((((30799 ? 1 : var_10))) ? (max(4294475775, 491529)) : (arr_10 [i_0] [i_1] [i_0] [i_3] [i_4])))) ? -24243 : (((arr_6 [i_0] [i_1] [i_2] [i_1] [i_3] [i_4]) % (arr_6 [i_0] [i_0] [i_2 + 2] [8] [i_4] [i_4]))));
                                var_23 = (min(var_23, -23));
                            }
                        }
                    }
                    arr_14 [i_0] = (((arr_11 [i_0] [i_2 + 2] [12] [i_2 - 3]) ? 1 : ((-((((arr_10 [i_0] [i_0] [1] [i_2] [18]) >= var_10)))))));
                }
            }
        }
    }
    #pragma endscop
}
