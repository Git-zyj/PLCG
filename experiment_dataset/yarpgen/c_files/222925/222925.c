/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((-2073187370 > (-32767 - 1)))) == ((((((arr_1 [i_0] [i_1 - 1]) * var_2)) < (((min(var_14, -1964)))))))));
                var_16 ^= var_0;
            }
        }
    }
    var_17 = 2221779930;
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_18 = (max(var_18, (((((!((max(var_12, (arr_10 [i_3] [i_4])))))) ? ((1686487758 / (arr_13 [i_2 - 3] [i_3] [1]))) : var_6)))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_19 = 157;
                        var_20 = (!57202);
                        arr_18 [i_5] [i_5] [i_5] [i_4] = ((1023 ? ((-(arr_16 [i_2] [i_3 + 2] [i_4] [i_4]))) : 56));
                        var_21 = ((var_3 || (arr_14 [i_4])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
