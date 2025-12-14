/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((max(((max((-127 - 1), -5418537510533185224))), 0)), 937838239));
    var_14 = var_10;
    var_15 = var_9;
    var_16 -= -9223372036854775791;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, var_11));
                    var_18 = -121;
                    var_19 = var_5;
                    arr_7 [3] [i_1] [i_0] [i_2] = (arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 |= (min(18446744073709551613, -var_12));
                                arr_14 [i_0] [i_1] [i_2] = ((1 ? ((((var_9 || ((max(var_0, -9223372036854775805))))))) : 17497781222996511544));
                                var_21 = 12;
                                var_22 -= ((-((15 ^ (((!(arr_8 [i_4] [i_3] [i_0]))))))));
                                arr_15 [9] [i_0] [i_2] [i_0] [i_0] = (arr_0 [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
