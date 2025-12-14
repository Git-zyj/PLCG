/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_21 = (!var_2);
                        var_22 = var_1;

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_23 = (arr_12 [i_0 - 2] [i_0 - 2] [i_2] [i_4] [i_4]);
                            var_24 = ((((39735 ? -968556397 : -6896506232435777382)) <= (arr_8 [i_0] [i_2] [i_4])));
                        }
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            var_25 = (arr_2 [i_1 + 1] [i_3 + 1]);
                            var_26 = (arr_8 [i_0] [i_1] [i_1 + 1]);
                            var_27 |= var_1;
                            var_28 = (((((var_12 ? var_12 : var_4))) ? 4008134171 : var_13));
                        }
                    }
                    for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_29 = (~var_14);
                            var_30 = (min(var_30, 1));
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_31 = ((((((((arr_16 [8] [1] [5] [i_1 - 1] [i_1] [i_1 - 1]) <= var_0)) ? (max(13036878580170599798, var_4)) : (arr_20 [7] [i_1] [i_2] [i_2] [2] [3])))) ? (14177 * -7102) : (((0 + 1) ? (max(-10112, 18014398509481980)) : ((min(-1412932792, 4035226424602004613)))))));
                            var_32 ^= ((var_18 != ((2147483647 ? 6 : 14635))));
                            var_33 = var_14;
                        }
                        var_34 = (((((((var_16 ? 15237526499293786291 : var_6))) ? (((max(var_12, 1)))) : ((3887256089 ? var_19 : var_18))))) || ((!(81 || -3882296713022164850))));
                        var_35 = ((max(((1 ? 157 : var_7), -8191))));
                    }
                    var_36 = var_19;
                    var_37 = 534773760;
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        var_38 = (((-32767 - 1) & 29532));
        var_39 = ((6 ? (((max(((min((arr_25 [i_9]), (arr_25 [i_9])))), (max(-8192, (-32767 - 1))))))) : 19));
        var_40 = ((((max(2094120965930284571, (((163 ? var_9 : 47412)))))) ? 1 : (max((arr_26 [i_9]), (6955456347688661688 == 13)))));
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        var_41 |= ((-((min(var_9, 48971)))));
        var_42 = ((-(((((var_1 ? var_2 : var_7))) ? var_17 : ((2431100069483385537 ? 123 : (arr_27 [i_10] [i_10])))))));
        var_43 = (((!18590) ? var_17 : ((5 ? 215 : 0))));
        var_44 = (max(((var_0 ^ (max(var_7, (arr_27 [9] [i_10]))))), 1));
    }
    #pragma endscop
}
