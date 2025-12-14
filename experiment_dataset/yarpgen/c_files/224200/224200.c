/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_12 = (((14771843810897881976 < var_9) ? (arr_0 [14]) : -3674900262811669657));
        var_13 = ((~(arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (((2800144885 % 36343) ? (arr_2 [i_1] [11]) : (var_5 + 15728640)));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_14 = (!49433);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_15 = 1;
                                var_16 = (min(var_16, -27463));
                                var_17 = (max(var_17, (((var_3 ^ (arr_15 [i_1] [i_3] [i_2 - 1] [i_2 - 1] [16]))))));
                                var_18 = (max(var_18, (arr_9 [i_5] [i_5] [i_5] [i_5])));
                                var_19 = 3674900262811669639;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_20 = (arr_24 [i_1] [i_6] [i_7] [i_8]);
                        arr_26 [5] [i_1] [i_6] [i_6] [i_7] [i_8] = (((var_9 + 1) <= (arr_21 [18] [3] [i_7] [i_7])));
                        var_21 = var_1;

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_22 = 14508;
                            arr_29 [i_1] [i_1] = (((var_8 <= 74) + 17189));
                            var_23 = (max(var_23, (((var_2 ? var_6 : (((arr_13 [i_8] [i_7] [i_6] [i_1]) & 14771843810897881979)))))));
                        }
                    }
                    var_24 = (((~50095) ? (arr_15 [i_7] [i_7] [i_6] [i_1] [i_1]) : var_9));
                }
            }
        }
    }
    var_25 = (min((((((min(var_7, 108))) ? ((max(1, 1))) : (max(var_5, 255))))), (min(var_6, var_1))));
    #pragma endscop
}
