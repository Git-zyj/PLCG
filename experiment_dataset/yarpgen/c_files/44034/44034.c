/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= -1031035793;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_19 = (arr_2 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_20 = (+(((arr_3 [i_0 - 2] [13]) ^ var_14)));
                        var_21 = (arr_6 [i_0]);
                        var_22 = 2;
                        var_23 = var_13;
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = var_11;
        var_24 = 95;
        var_25 ^= ((((max((arr_8 [i_0] [i_0] [8]), (arr_0 [i_0] [6])))) ? ((max(2583639148, var_1))) : var_3));
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    arr_22 [i_4] [8] = 114;
                    var_26 = (arr_19 [i_4 + 1] [i_4 + 2] [i_4 - 1]);
                }
            }
        }
    }
    var_27 |= 8438;
    var_28 = ((78 && (((56165 ^ ((max(56180, -31517))))))));
    #pragma endscop
}
