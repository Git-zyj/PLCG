/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (max(var_5, var_11));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (max(48, (arr_2 [i_0])));
                var_14 -= ((-((-var_11 ^ (max(var_5, var_10))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = (((((-(arr_13 [8] [10] [6] [i_0 + 1] [i_0 - 1])))) ? -121 : 65));
                                var_16 = (min(-43, ((-(arr_9 [i_0 + 1] [i_3 + 1])))));
                                var_17 = (max(var_17, (!43)));
                                var_18 -= var_10;
                                arr_14 [i_0] [i_1] [i_1] [i_2] [5] [i_1] [i_4] |= var_1;
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_19 = (var_2 / -440769512);
                    var_20 = (min(var_20, (var_0 || var_8)));
                    var_21 -= (~136);
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_22 = (!440769529);
                    var_23 = ((!-440769512) ? var_10 : (max(-4526616738953018463, (arr_6 [i_0 - 1]))));
                    var_24 = (((~(((arr_0 [i_6]) ? 5989068085489604754 : var_10)))));
                }
            }
        }
    }
    #pragma endscop
}
