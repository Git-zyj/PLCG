/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = 144044819331678208;
            arr_5 [i_0] [i_0] [i_0] = arr_0 [i_0];
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_10 = (min(var_10, ((((((2731426091 ? var_3 : (arr_2 [i_2])))) ? (min((arr_2 [i_2]), (arr_2 [i_2]))) : ((var_2 ? (arr_7 [i_2] [i_2] [i_0]) : (arr_2 [i_2]))))))));
            var_11 = var_4;
            var_12 *= 8132352889106412543;
            var_13 = (min(var_13, ((((((arr_1 [i_0]) ? 1421473201 : (arr_1 [i_0])))) ? (((arr_3 [i_2] [i_2]) << (((arr_3 [i_2] [i_2]) - 3936557848)))) : ((8662400887514471961 ? (arr_3 [i_0] [i_2]) : 148))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_14 = ((((max((arr_18 [i_5 + 1] [i_5 + 3] [i_5] [i_5] [8] [i_0]), (arr_13 [i_5 + 3] [i_0] [i_5] [9] [9] [i_5 + 2])))) ? (((var_5 ? var_8 : (arr_16 [i_5 + 3] [i_5] [0] [7] [i_0])))) : ((~(arr_17 [i_5 - 1] [i_5 + 1] [i_5] [i_5] [i_0])))));
                            arr_19 [i_0] [i_2] [4] = ((((((((arr_9 [i_0]) ? 15838401248375611623 : 527591503)) * (((var_1 ? 0 : (arr_12 [i_0] [i_4]))))))) ? ((24576 ? ((var_5 ? 36690590 : 1730392625675985871)) : 84)) : ((max(16, 3207417081589616622)))));
                            var_15 += ((((((var_6 ? 63 : var_6)))) && (((((var_5 ? (arr_13 [i_3] [i_2] [i_3] [i_4] [i_3] [i_4]) : var_1)) % (((arr_15 [i_2]) ? 2851153556 : var_0)))))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
        {
            var_16 ^= 1073740800;
            var_17 += (~-3332);
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            var_18 |= ((((arr_12 [8] [0]) ? var_8 : var_1)) | (!-8430493084163520817));
            var_19 = 6816183863673787238;
        }
        arr_25 [i_0] = (((((((-4355 ? var_2 : 63720))) - -var_0)) + ((((13004244317149797205 ? 3916610747087623966 : 15505837419984681907)) + (max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_0))))));
        var_20 += (((((-(arr_15 [0])))) ? ((min(-189, var_2))) : (arr_17 [4] [i_0] [i_0] [i_0] [4])));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_21 = (max(var_21, (((max((((84 ? var_6 : var_1)), (max(var_0, 2738114184875645408)))))))));
        arr_28 [i_8] [i_8] = (arr_27 [i_8]);
        var_22 = (max(var_22, 140737488224256));
        arr_29 [i_8] = var_1;
        var_23 = (min(var_23, (((7 ? var_9 : var_6)))));
    }
    var_24 = var_3;
    #pragma endscop
}
