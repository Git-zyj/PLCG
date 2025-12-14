/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (1 > -8282839741439734262);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = (min(var_18, ((((arr_2 [i_0] [i_0]) > var_12)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = ((var_4 || (arr_4 [i_0] [i_0])));
                    var_20 = 42596;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_21 = (arr_3 [i_3] [i_3] [i_3]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_17 [i_3] [i_4] = -42579;
                        arr_18 [i_4] [i_6] = (min((((var_8 <= ((min(22940, var_12)))))), ((189 << ((((112 ? (arr_1 [i_3] [i_3]) : (arr_13 [i_3]))) - 63308))))));
                    }
                }
            }
        }
        var_22 = (max(var_22, (arr_4 [i_3] [i_3])));
    }
    var_23 -= var_15;
    var_24 = -28;
    #pragma endscop
}
