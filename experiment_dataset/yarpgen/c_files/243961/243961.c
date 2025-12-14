/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((min(var_10, -1))) ? var_2 : (!var_12)))) != ((var_14 ^ (((0 >> (var_2 - 107))))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = -2147483643;
        arr_3 [i_0] = ((+((-722459288 ? (arr_1 [i_0]) : (arr_0 [i_0])))));
    }
    var_17 = var_9;

    for (int i_1 = 3; i_1 < 7;i_1 += 1)
    {
        var_18 = ((~(((arr_0 [i_1 + 2]) & (arr_5 [i_1 - 1])))));
        arr_6 [i_1 - 2] = 110;
        arr_7 [i_1 + 1] = (min(218034908, -118));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_19 *= (((arr_9 [i_2] [i_2]) << (((arr_9 [i_2] [i_2]) - 4520))));
        arr_11 [i_2] = ((var_4 % (arr_10 [i_2] [i_2])));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_20 [i_3] [i_3] [i_5] [i_3] = (min(-120, 10513396636021154650));
                        arr_21 [10] = ((((((((arr_18 [i_6] [i_4] [i_5] [6] [i_3]) & var_9)) | (((min(-110, 119))))))) ? ((((((arr_18 [i_3] [i_4] [i_5] [i_4] [i_5]) ? 0 : (arr_17 [i_3] [i_4] [i_5] [i_6])))) ? ((~(arr_18 [i_3] [i_3] [i_3] [i_3] [i_3]))) : ((max(119, -119))))) : (((((~(arr_14 [i_3])))) ? 1 : var_3))));
                    }
                }
            }
        }
        arr_22 [i_3] = ((~((min((arr_14 [i_3]), (arr_14 [i_3]))))));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        arr_25 [i_7] = (arr_19 [i_7] [i_7] [i_7]);
        var_20 -= (max(((min((arr_9 [i_7] [i_7]), (arr_10 [i_7] [i_7])))), (((arr_10 [i_7] [i_7]) ? 1046315292 : (arr_9 [16] [i_7])))));
        arr_26 [i_7] [i_7] = (min((((!((min(var_1, 69)))))), ((-(arr_17 [i_7] [i_7] [i_7] [i_7])))));
        var_21 = ((-(arr_15 [i_7] [i_7] [2])));
    }
    #pragma endscop
}
