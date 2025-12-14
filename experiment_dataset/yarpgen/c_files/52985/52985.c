/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [20] [i_0] |= (max((max(var_12, (!var_6))), (((!((((arr_2 [i_0] [i_0]) - (arr_3 [i_0] [i_0])))))))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_14 = (!8612114535731235361);
            var_15 = ((((min(105, (min((arr_3 [i_1] [i_0]), (arr_7 [i_0] [i_0])))))) ? (arr_6 [i_1] [i_0]) : var_3));
        }
    }

    /* vectorizable */
    for (int i_2 = 4; i_2 < 8;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        {
                            var_16 = (max(var_16, (((~(arr_14 [2]))))));
                            var_17 *= (((((var_8 ? (arr_20 [2] [6] [i_4] [6] [i_2]) : var_6))) ? (arr_10 [i_5 + 1]) : var_12));
                            arr_21 [i_5] [i_3] [2] [i_2] [i_6] = ((9897610363946579742 ? 41 : 1712634332));
                        }
                    }
                }
            }
            var_18 = (((arr_2 [i_2] [i_3]) && (arr_20 [i_2] [i_2] [i_2 + 3] [i_2] [i_3])));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_19 = ((~(arr_13 [i_2 + 2])));
            var_20 = (((arr_12 [i_2 + 3] [i_7] [i_7]) < (arr_5 [i_2 + 3] [i_2 - 4] [i_2])));
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_21 *= arr_10 [i_2];
            arr_27 [i_2] = var_0;
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_22 = (arr_14 [4]);
            var_23 &= ((211 << (214 - 195)));
        }
        var_24 += (arr_16 [i_2 - 2]);
        var_25 = (arr_28 [i_2]);
    }
    #pragma endscop
}
