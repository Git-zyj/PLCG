/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (max((max(((3168743778 ? -9223372036854775805 : 0)), (var_4 + 3454643860))), 1));
    var_14 = min((((-(var_4 + var_2)))), (min(((3454643880 ? var_6 : 7090085953325861777)), ((var_2 ? var_12 : 32767)))));
    var_15 |= (((-2147483647 - 1) ? (~1) : ((((((min(44016, 224)))) < var_12)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = (min(((-(arr_4 [i_0] [i_0] [i_0]))), (!3168743778)));
            var_17 = (((((-(((arr_1 [i_0]) ? var_10 : 1))))) ? (((((1126223517 ? var_2 : 3454643880))) ? (1 > 110) : (!1187553794))) : (((min((arr_1 [3]), 1))))));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_18 = (min(var_18, (arr_7 [i_0] [i_0])));
            var_19 = (((219 / 1) ? 1 : 260523332));
            var_20 = (max(var_20, ((!((max((arr_2 [i_2]), ((var_2 ? (arr_3 [i_0] [i_0]) : 840323435)))))))));
            arr_8 [i_2] [i_2] [i_2] = ((-(((arr_2 [i_2 - 1]) ? (arr_2 [i_0]) : 0))));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_21 = ((+((-((((arr_6 [i_2]) > -9223372036854775802)))))));

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    arr_16 [i_0] [i_2] [i_2] [i_3] [i_2] [i_2] = ((((max(74, ((1 ? 145 : 1))))) ? (arr_11 [14] [i_2] [i_2 - 1] [i_2]) : ((110 ? var_8 : (max(var_7, 4294967295))))));
                    var_22 -= (((max(840323431, (arr_4 [i_0] [i_2] [i_3])) - 1)));
                    var_23 = (max(var_23, var_3));
                }

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    arr_19 [i_2] [i_0] [i_3] = (((max(8216074859044109440, 8216074859044109440)) < (min(var_4, (((arr_14 [i_0] [i_2] [i_3]) ? -5230044247754807079 : 3454643860))))));
                    var_24 += ((-(((arr_17 [i_0] [i_0] [i_2] [10] [i_3] [i_3]) & (arr_5 [i_2 - 1])))));
                }
            }
        }
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            var_25 = (!-28468);
            var_26 = ((127 ? (arr_11 [i_6 - 1] [i_6] [i_6 + 2] [i_6 - 1]) : (!840323428)));
        }
        arr_22 [i_0] [8] = (min((arr_7 [i_0] [i_0]), (-9223372036854775807 - 1)));
        var_27 = (max(4393751543808, (((arr_3 [i_0] [i_0]) ? var_1 : 28468))));
    }
    var_28 = ((((!(((-1 ? 1 : var_10)))))));
    #pragma endscop
}
