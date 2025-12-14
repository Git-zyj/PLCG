/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((max(var_10, var_11)))));
    var_14 = (min(var_0, var_7));
    var_15 &= 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (arr_2 [i_0] [i_1 + 1])));
                var_17 ^= (min((((var_4 && (1 || 0)))), var_1));

                for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_18 = var_7;
                    var_19 -= ((((max((var_5 >= var_9), 10883171789662897058))) ? ((((arr_4 [i_2 - 1] [8] [8]) + 1))) : ((((((arr_5 [i_0] [i_0] [i_0]) ^ 10883171789662897058))) ? ((max((arr_7 [16] [i_0] [i_0]), var_3))) : (arr_2 [i_0] [i_0])))));
                    var_20 = (min(var_20, var_9));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        var_21 = (max(var_21, (((var_2 & (((3065202892 >= (arr_6 [i_0] [i_0] [i_0])))))))));
                        var_22 -= (var_6 * var_2);
                    }
                    var_23 &= (arr_2 [1] [i_1]);
                    var_24 = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
