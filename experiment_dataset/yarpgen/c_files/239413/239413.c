/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_5 ? ((var_0 ? var_0 : var_9)) : (~1039184098))) == ((((var_1 / var_0) ? ((var_5 ? var_4 : var_0)) : var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((3255783168 ? (((9223372036854513664 ? 38 : 64))) : 2000609759))) ? 2251799813685244 : (((38 | ((2251799813685240 ? 38 : -910335543)))))));
                var_11 = ((((((((1 ? -22710 : 23))) ? ((var_5 ? var_2 : var_0)) : var_0))) ? (((var_7 ? (!22709) : var_7))) : (((((var_4 ? var_1 : var_8))) ? (((22 ? 10993 : 1))) : ((1 ? 1852998954 : -347882168))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_0] = ((-(((var_2 / var_8) ? -var_3 : var_2))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] = ((((((var_4 ? var_2 : var_4)) ? (((var_8 ? var_4 : var_6))) : var_2))));
                                arr_16 [i_0] [i_0] [i_2] [i_4] = ((((14469 != ((68 ? 5802672186148147713 : var_9)))) ? var_6 : -1499768378));
                                var_12 = (!2);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
