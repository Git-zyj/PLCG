/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 *= (min(((var_11 + (((var_0 <= (arr_3 [i_0] [i_1])))))), ((min(0, (!var_8))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, var_3));
                                var_16 -= (arr_2 [i_1]);
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_4] = (max(((var_0 / (arr_7 [i_0] [i_3 + 2] [i_3 + 1] [i_4]))), ((min(1, 1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                arr_20 [i_5] = 1;
                var_17 = 2147483647;
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        {
                            arr_27 [i_5] [i_5] [i_7 - 1] [i_5] [i_5] = ((-(((!(var_12 || 3179735861))))));
                            var_18 -= (min(((((((-2147483647 - 1) ? -16170 : 1404500750))) ? 6 : 0)), (28618 && 2890466543)));
                        }
                    }
                }
                arr_28 [i_5] = ((((((arr_16 [i_5]) ? var_9 : var_3))) % (arr_21 [i_6])));
            }
        }
    }
    #pragma endscop
}
