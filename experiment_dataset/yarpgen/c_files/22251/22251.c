/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (arr_0 [16]);
        arr_3 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_22 = -87;
        arr_7 [i_1] = (max((-18467 != var_18), (arr_6 [i_1])));
        var_23 = (max((((min(11335512428245980445, 0)) | ((max(-1, (arr_2 [i_1])))))), 2147483647));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = var_16;
        var_24 = ((255 ? 1 : -42));
        var_25 = ((~(arr_10 [i_2] [i_2 - 1])));
        arr_12 [i_2] = (263392780109503465 ? (((var_11 && (arr_5 [i_2])))) : -6621);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 17;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            var_26 &= var_13;
                            var_27 = (max(var_27, (arr_20 [i_2 - 1] [i_5 + 1])));
                            arr_23 [i_2] [i_4] [i_2] [i_6] = 1;
                        }
                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            arr_28 [i_2] [i_3] [i_3] [i_3] [i_2] [i_7] = var_4;
                            arr_29 [i_2] [i_3] [i_4] [i_2] [i_5] [i_7] = var_6;
                        }
                        arr_30 [i_2] [i_2] = (-(((arr_16 [i_2] [i_3] [i_2] [i_5]) ? (arr_27 [i_2 - 1] [i_2] [i_2 - 1] [i_4] [i_5 - 1]) : (arr_9 [i_2]))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 17;i_8 += 1) /* same iter space */
    {
        arr_35 [i_8] = ((18467 ? 4681112609363225373 : (arr_33 [i_8])));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 16;i_10 += 1)
            {
                {
                    var_28 = 0;
                    arr_41 [i_10] [i_9] [i_8] = var_4;
                }
            }
        }
        arr_42 [i_8] = ((-(~7636254896075405189)));
    }
    var_29 = (((((1 ? var_10 : 325016371))) != ((((((max(var_16, var_11))) != ((var_1 ? var_3 : 39))))))));
    #pragma endscop
}
