/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_17 = (((!-120) - 0));
        var_18 = (arr_0 [i_0 - 1] [i_0 - 1]);
        var_19 -= (((arr_0 [i_0] [i_0 - 1]) % (((-8 + 2147483647) >> (((arr_1 [i_0]) - 1747788370))))));
        var_20 *= (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 = (max((69 < 1), ((68717379584 ? (arr_2 [i_1]) : (arr_2 [i_1])))));

        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            var_22 = max((arr_6 [i_2 + 3]), ((((arr_6 [i_2 + 2]) + (arr_6 [i_2 + 2])))));
            var_23 = (min(var_23, ((max(-1590598168, (((!((max((arr_2 [13]), (arr_4 [i_1] [i_1] [i_1]))))))))))));
        }
        var_24 = (max(((max(1204, (arr_6 [i_1])))), (arr_6 [i_1])));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_25 = (((max((((-9223372036854775800 + 9223372036854775807) << (((arr_6 [18]) - 204)))), (((~(arr_3 [i_3])))))) | ((max((arr_7 [i_3]), ((max(64, 53))))))));

        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            var_26 = (arr_0 [15] [i_3]);
            var_27 -= ((((((!(arr_4 [i_4 + 1] [0] [i_4]))))) >= (((arr_4 [i_4 + 1] [i_4] [10]) / (arr_4 [i_4 + 2] [i_4] [i_4])))));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_28 = ((((((((var_9 ? 36763 : (arr_8 [i_5])))) ? (((arr_2 [14]) / 9223372036854775807)) : ((((!(arr_10 [i_3])))))))) ? (50291 < 1611313563) : ((max((arr_2 [i_5]), (arr_2 [i_5]))))));
            var_29 = (((((max((arr_4 [i_5] [i_3] [i_3]), (arr_9 [i_5] [i_3])))) ? (arr_8 [i_5]) : (max((arr_7 [i_3]), (arr_2 [i_5]))))));
            var_30 = (((((arr_5 [i_3]) | var_12))));
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_31 = 1;
                            var_32 |= 1851127252;
                            var_33 = (max(var_6, 13573614199024424804));
                            var_34 = (max(((((arr_7 [14]) ? (arr_21 [13] [i_5] [i_6] [16]) : (arr_12 [i_3])))), (arr_5 [i_8])));
                        }
                    }
                }
            }
        }
        var_35 = (max(var_6, (arr_11 [i_3] [i_3])));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_36 = (max(var_36, (((+((((arr_4 [i_9] [i_9] [i_9]) >= (((max(48754, 192))))))))))));
        var_37 = ((~(((arr_8 [i_9]) * (arr_8 [i_9])))));
    }
    var_38 = ((var_11 ? (192 + var_5) : (((var_10 <= (~192))))));
    var_39 += var_9;
    #pragma endscop
}
