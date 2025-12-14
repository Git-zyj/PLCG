/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241374
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_14 = (unsigned short)47393;
                                arr_16 [i_3] [i_1] [i_2] [i_1] [i_0 - 1] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_4] [i_3] [i_2] [i_2] [(unsigned short)4] [i_0 + 1])) + (((((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_3])) ? (((((/* implicit */int) var_5)) / (((/* implicit */int) arr_0 [i_2])))) : (((/* implicit */int) max((var_12), (var_9))))))));
                                var_15 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_6 [i_3 + 2])) >> (((((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_3 + 1] [i_3])) - (50802))))) != (min((((((/* implicit */int) arr_12 [i_1])) * (((/* implicit */int) arr_13 [i_0] [i_0] [i_0 - 2])))), (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 2] [i_0] [i_0] [(unsigned short)9])) != (((/* implicit */int) var_2)))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)30010)) ? (((((((/* implicit */int) (unsigned short)32768)) != (((/* implicit */int) (unsigned short)65534)))) ? (((((/* implicit */_Bool) (unsigned short)58759)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned short)32767)))) : (((/* implicit */int) max((arr_9 [i_2] [i_2] [i_1]), ((unsigned short)65534)))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11802)) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)48205)) >> (((((/* implicit */int) (unsigned short)65534)) - (65524)))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            {
                var_17 = arr_11 [i_5] [i_5] [i_5] [i_5] [i_6] [i_6];
                /* LoopNest 2 */
                for (unsigned short i_7 = 2; i_7 < 12; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        {
                            arr_26 [i_5] [i_6] [(unsigned short)9] [i_6] = (i_6 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) var_13)) < (((/* implicit */int) arr_11 [i_5] [i_6] [i_5] [i_7] [i_7] [i_8]))))), (arr_11 [i_8] [i_8] [i_7] [i_5] [i_7] [i_7 - 1])))) << (((min((((/* implicit */int) ((unsigned short) arr_19 [i_5] [i_6]))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [i_5] [i_6] [i_7 + 1] [(unsigned short)2])))))) - (47744)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) var_13)) < (((/* implicit */int) arr_11 [i_5] [i_6] [i_5] [i_7] [i_7] [i_8]))))), (arr_11 [i_8] [i_8] [i_7] [i_5] [i_7] [i_7 - 1])))) << (((((min((((/* implicit */int) ((unsigned short) arr_19 [i_5] [i_6]))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [i_5] [i_6] [i_7 + 1] [(unsigned short)2])))))) - (47744))) + (8042))))));
                            arr_27 [i_8] [i_6] [i_5] [i_5] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_15 [i_7 - 2] [i_6] [i_8] [i_7] [i_5]), (var_11)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)7889)) != (((/* implicit */int) max(((unsigned short)28726), ((unsigned short)2047))))))) : (((((/* implicit */_Bool) min((arr_22 [i_5] [i_6] [i_7] [i_8]), (var_1)))) ? (((((/* implicit */_Bool) (unsigned short)59438)) ? (((/* implicit */int) (unsigned short)47669)) : (((/* implicit */int) (unsigned short)42412)))) : (((((/* implicit */_Bool) arr_4 [(unsigned short)4] [i_5] [i_8])) ? (((/* implicit */int) (unsigned short)32772)) : (((/* implicit */int) arr_11 [i_6] [i_6] [(unsigned short)13] [i_8] [i_8] [i_8]))))))));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_19 [i_5] [i_8]))) >> (((((/* implicit */_Bool) (unsigned short)32769)) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) arr_12 [i_5]))))))) ? (((/* implicit */int) (unsigned short)64518)) : (((/* implicit */int) (unsigned short)65526)))))));
                            arr_28 [i_5] [i_5] [i_6] [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) min((((((/* implicit */int) min(((unsigned short)54492), (arr_10 [i_5] [(unsigned short)9] [i_7] [i_8])))) + (((/* implicit */int) min((var_6), (arr_7 [i_5] [i_6] [i_7 + 1] [i_8])))))), (min((((((/* implicit */_Bool) arr_19 [i_5] [i_6])) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) (unsigned short)44224)))), (((/* implicit */int) min(((unsigned short)17876), ((unsigned short)2))))))));
                            arr_29 [i_6] [i_6] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) (unsigned short)18143)) ? (((/* implicit */int) (unsigned short)807)) : (((/* implicit */int) arr_0 [(unsigned short)10])))) | (((/* implicit */int) arr_23 [i_7] [i_7 - 1] [i_7 - 1])))), (((((/* implicit */int) var_13)) | (((/* implicit */int) var_13))))));
                        }
                    } 
                } 
                arr_30 [i_6] [i_5] = max((arr_2 [i_5]), (min((arr_15 [i_5] [i_6] [i_5] [i_5] [i_5]), (arr_15 [i_6] [i_6] [i_6] [i_6] [i_6]))));
            }
        } 
    } 
    var_19 = ((unsigned short) var_0);
}
