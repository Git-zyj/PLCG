/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = 66;
        var_17 = var_3;
        var_18 += (min(((-((var_7 ? var_0 : 18256)))), ((-(max((arr_1 [i_0]), var_5))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_19 = (max((arr_0 [i_0]), ((var_9 ? var_6 : (arr_0 [i_0])))));
            var_20 -= ((18256 | (arr_4 [i_0] [11] [i_0])));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_21 ^= ((((min((arr_0 [i_0]), (arr_5 [i_2] [i_2] [i_2])))) - ((89 - (arr_5 [i_0] [i_2] [i_2])))));
            var_22 = (((!567453553048682496) << ((((23 ? (arr_0 [i_2]) : (arr_0 [i_0]))) - 50751))));
            var_23 = var_2;

            for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_24 = ((((((arr_1 [i_0]) ? var_8 : (((arr_14 [i_0] [i_0] [i_3] [i_4] [i_5]) ? var_1 : var_9))))) ? ((((max(91, var_12))) ? (!1) : var_2)) : (((((arr_4 [i_2] [i_2] [17]) & var_2)) - var_7))));
                        var_25 = (-32767 - 1);
                        var_26 = (min((min((var_6 & -1040212225), (((arr_7 [11] [i_2] [i_2]) ? var_11 : (arr_15 [i_0] [i_2] [i_3] [i_4] [i_4] [1]))))), var_1));
                        var_27 = (var_14 ? var_8 : 62);
                    }
                    var_28 ^= (max((((-(((arr_15 [i_4] [i_3] [i_3] [i_3] [i_2] [i_0]) - var_8))))), (((((arr_14 [i_4] [i_0] [i_2] [i_0] [i_0]) ? (-32767 - 1) : var_0)) | var_3))));
                    var_29 = (min(var_29, (((911531631 ? 0 : 47279)))));
                    var_30 = (((min(6568921130744396558, 75)) - (max(((min(189, -3038))), ((62 ? (arr_8 [i_0] [i_2] [i_3]) : (arr_11 [i_4] [i_4])))))));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_31 = var_1;
                        var_32 = (min(var_32, (max((((var_4 ? (75 / var_4) : ((max((arr_0 [i_0]), var_15)))))), (var_0 * var_5)))));
                        var_33 -= 11877822942965155057;
                        var_34 = (((((1169792272 ? var_1 : ((1 ? var_7 : var_8))))) ? (max(10302009810733960803, 1)) : ((((!((min(var_4, var_6)))))))));
                    }
                    var_35 = ((((max((min(var_12, var_5)), var_10))) ? (~var_1) : (((((var_1 ? (arr_18 [4] [4] [i_3] [i_3] [15] [i_3]) : var_15))) ? 0 : (((max((arr_3 [i_6] [i_6]), var_14))))))));
                    var_36 = (((~15930334936293025239) ? (arr_6 [i_3] [i_2] [i_0]) : (arr_21 [i_0] [13] [i_0] [i_0] [i_0] [i_0] [i_0])));
                }
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    var_37 = var_4;
                    var_38 = ((((min((arr_21 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8] [i_8] [i_8]), (arr_21 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [7])))) ? (!var_1) : (((arr_21 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8]) | -911531632))));
                    var_39 -= (max(((((arr_7 [i_0] [5] [15]) / var_13))), (min(((max(var_15, var_14))), (var_0 + 106)))));
                }
                var_40 = (min(var_40, (((max(((var_10 ? var_12 : var_9), (((arr_16 [i_0] [i_2] [i_2] [8] [13] [i_3]) ? var_4 : var_14)))))))));

                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    var_41 = (max(var_41, (((var_3 ? var_14 : (min(((var_7 ? var_5 : 911531631)), (arr_15 [i_2] [i_2] [11] [i_2] [i_2] [i_3]))))))));
                    var_42 = (max(var_42, ((min((~80), (((max(11877822942965155057, var_4)) + (var_9 * var_3))))))));
                    var_43 += (~(max(((min(151, 66))), 11877822942965155057)));
                    var_44 ^= (-(max(var_9, (!-3034))));
                }
            }
            for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
            {
                var_45 = (max((((-var_11 || (arr_21 [i_0] [i_0] [i_0] [i_0] [12] [9] [12])))), (max((min(-3037, var_11)), var_3))));
                var_46 = min((~var_13), var_12);
                var_47 ^= 66;
                var_48 = var_8;
            }
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                var_49 += (((((arr_0 [i_0]) ? (arr_0 [i_11]) : (arr_0 [i_0]))) | (~var_8)));
                var_50 = (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    for (int i_12 = 2; i_12 < 17;i_12 += 1)
    {
        var_51 = ((+(((arr_15 [i_12 + 1] [i_12 + 1] [i_12 - 2] [i_12] [9] [i_12 - 1]) ? (arr_15 [i_12] [7] [i_12 - 1] [i_12] [i_12 - 1] [i_12 - 1]) : (arr_15 [i_12] [13] [i_12 + 1] [22] [i_12] [i_12 - 2])))));
        var_52 = (min(((((var_15 ? 66 : var_8)) ^ (min((arr_32 [i_12]), var_4)))), var_14));
    }
    var_53 = ((var_8 ? (((((var_4 ? 12929 : 911531631))) & (min(1033157709, -1482094645)))) : (21208 * var_1)));
    var_54 ^= var_8;
    #pragma endscop
}
