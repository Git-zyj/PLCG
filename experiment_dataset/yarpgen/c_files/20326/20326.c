/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 |= ((7795 == ((65519 ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        var_13 = ((134217727 ? var_5 : (((((30965 ? (arr_1 [i_0]) : var_9))) ? (65519 * 1) : (arr_0 [i_0])))));
        var_14 = (max(var_14, (((2154739963526086700 ? (((max(65519, var_6)))) : ((20406 ? (-134217727 & -62) : 65519)))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_15 = ((-(((-127 - 1) ? (arr_8 [i_0] [i_3] [i_2 + 2]) : var_10))));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_16 = (((arr_5 [i_1] [i_2 + 2] [i_2]) ? (!var_9) : (arr_9 [i_4] [i_1] [i_1])));
                            var_17 -= var_3;
                            arr_13 [i_2] = ((~(19905 && var_9)));
                        }
                        var_18 = (min(var_18, (arr_3 [i_2 + 1])));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_19 -= ((((1309563267 ? -825733735 : 12)) > (arr_2 [i_1 - 2])));
                            var_20 |= ((max((1 % -2824711049117616652), (((1594959046 ? (arr_3 [i_0]) : 1))))) - ((((arr_14 [i_1] [i_2 + 2] [i_2 - 1] [i_2]) ? ((((arr_10 [i_0] [i_1] [i_2] [i_2] [i_1] [i_5] [i_2]) != 39))) : (arr_4 [i_6] [i_0] [i_2 + 1] [i_0])))));
                            var_21 = (min(var_21, (arr_4 [i_1 + 1] [i_2] [i_5] [i_6])));
                        }
                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            arr_21 [i_2] [i_1 - 2] [i_1] [i_1 - 2] = (((arr_14 [i_2] [i_5] [i_2] [i_2]) ? (((arr_16 [i_1 - 1] [i_1] [i_2 + 1] [i_7 + 3] [i_7] [i_2]) ? -5034246898254115084 : 54)) : (((((max(-18916, 1))) ? (arr_16 [i_2] [i_7] [i_5] [i_2] [i_1 - 2] [i_2]) : ((max(var_5, var_2))))))));
                            arr_22 [i_0] [i_2] [i_5] [i_2 + 2] [i_2] [i_0] = (arr_0 [i_0]);
                        }
                        var_22 |= -8;
                        arr_23 [i_0] [i_0] [i_2] [i_2] [i_5] [i_5] = var_8;
                    }
                    arr_24 [i_2] = 8912172831484205958;
                    var_23 += -134217728;
                }
            }
        }
    }
    var_24 = var_9;
    var_25 = ((1132424270 & 134217724) % var_5);
    var_26 = ((!(((((45130 ? var_9 : var_6)) | ((max(var_1, var_1))))))));
    #pragma endscop
}
