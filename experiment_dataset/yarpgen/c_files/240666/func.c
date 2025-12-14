/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240666
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((arr_2 [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) -451357882)))), (((/* implicit */unsigned long long int) arr_4 [(unsigned char)5] [(unsigned char)5] [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (arr_1 [i_1])))) : (((((((/* implicit */_Bool) 2579966579U)) ? (4649543064586508522LL) : (((/* implicit */long long int) ((/* implicit */int) (short)5037))))) / (((/* implicit */long long int) arr_1 [i_1]))))));
                arr_5 [i_0] [i_1] = ((/* implicit */int) 4649543064586508526LL);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 4649543064586508527LL)) ? (((/* implicit */int) (short)-190)) : (((/* implicit */int) (signed char)-1))))) < (((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_1] [i_2]))) | (322943318U)))) : (((((/* implicit */long long int) arr_3 [(signed char)2])) | (7019942331589200883LL)))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_3] [i_1] [i_0])), (33554424)))) ? (((/* implicit */long long int) (~(arr_3 [i_0])))) : (9007199254740984LL))) : (((((/* implicit */_Bool) arr_7 [i_0])) ? (min((4649543064586508538LL), (((/* implicit */long long int) arr_0 [i_3] [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3])))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) -4649543064586508527LL);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) max((((((/* implicit */long long int) min((((/* implicit */int) var_8)), (var_3)))) / (-4649543064586508527LL))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (-4649543064586508552LL) : (((/* implicit */long long int) var_7))))) ? (((((/* implicit */long long int) 2147483647)) / (-4649543064586508534LL))) : (((/* implicit */long long int) ((var_4) - (var_7))))))));
    /* LoopSeq 2 */
    for (short i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            arr_27 [i_8] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) ? (((/* implicit */long long int) ((((/* implicit */int) arr_23 [15])) / (((/* implicit */int) arr_22 [i_4] [i_4] [i_4]))))) : (((((-4649543064586508527LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_9 [i_4] [i_4] [9U] [i_8])) - (86)))))))) ? (((((/* implicit */_Bool) ((arr_25 [i_4] [i_4] [i_4] [i_8] [13U]) ? (arr_10 [i_7] [(unsigned short)9] [i_6] [i_4]) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_4] [i_4] [i_4]))) : (arr_3 [i_4])))) : (min((((/* implicit */long long int) (unsigned char)106)), (4649543064586508520LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_4])) ? (((/* implicit */int) arr_23 [i_6])) : (((/* implicit */int) arr_18 [i_8] [i_8] [i_8] [i_8])))))));
                            var_22 = ((/* implicit */int) arr_2 [i_5] [i_5] [i_6]);
                            var_23 = ((/* implicit */short) ((((/* implicit */int) arr_15 [i_4])) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1776396364)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_4] [(unsigned char)1] [i_6]))) : (814698680U)))))))));
                        }
                        var_24 &= ((/* implicit */int) (signed char)-121);
                    }
                } 
            } 
        } 
        arr_28 [i_4] [i_4] = ((((((((/* implicit */int) arr_9 [15] [i_4] [i_4] [i_4])) ^ (((/* implicit */int) (signed char)43)))) < (((/* implicit */int) arr_22 [i_4] [i_4] [i_4])))) ? (((/* implicit */int) arr_19 [i_4] [i_4])) : (-914882960));
        arr_29 [i_4] = ((/* implicit */int) arr_4 [i_4] [i_4] [5]);
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        for (signed char i_12 = 0; i_12 < 16; i_12 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) max((min((((/* implicit */long long int) (-2147483647 - 1))), (min((((/* implicit */long long int) arr_37 [i_12] [i_12] [i_11] [i_10] [i_9] [i_9] [5])), (arr_21 [(short)13] [(short)9] [i_11]))))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) arr_38 [i_10] [i_10] [i_10] [(short)12] [i_10])) : (((/* implicit */int) arr_15 [i_4])))))))));
                                var_26 &= ((/* implicit */unsigned int) arr_15 [i_12]);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned int) 4649543064586508520LL);
                    /* LoopSeq 1 */
                    for (short i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        var_28 = ((((/* implicit */int) arr_25 [i_4] [i_9] [i_10] [i_4] [i_4])) ^ (((/* implicit */int) (signed char)-53)));
                        var_29 += ((/* implicit */unsigned int) ((min((((/* implicit */int) min(((short)1136), (((/* implicit */short) (unsigned char)0))))), (max((((/* implicit */int) (short)5037)), (-1885351676))))) * (arr_24 [i_4] [i_9] [i_10] [i_4])));
                        arr_43 [i_13] [i_10] [i_10] [i_9] [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4649543064586508534LL)) ? (63) : (-2147483626)))) ? (((/* implicit */int) arr_23 [i_9])) : (((arr_32 [i_4] [i_13]) / (((/* implicit */int) (_Bool)1)))))) | (arr_17 [i_9])));
                    }
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((arr_1 [i_4]) << (((arr_36 [i_4] [i_4] [2] [i_4] [i_4]) - (984007726))))) < (((/* implicit */unsigned int) ((arr_20 [i_4]) ? (266820103) : (60724330)))))))));
    }
    for (int i_14 = 0; i_14 < 12; i_14 += 4) 
    {
        arr_46 [i_14] [i_14] = ((/* implicit */short) arr_1 [i_14]);
        arr_47 [i_14] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_14] [i_14] [i_14])) ? (min((arr_40 [i_14] [i_14] [i_14] [i_14]), (((/* implicit */int) (short)-28351)))) : (((((/* implicit */_Bool) (short)10693)) ? (((/* implicit */int) (short)-14622)) : (((/* implicit */int) arr_4 [0] [i_14] [i_14])))))) <= (min((arr_10 [i_14] [i_14] [i_14] [i_14]), (arr_10 [i_14] [i_14] [7] [i_14])))));
        var_31 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) arr_22 [i_14] [i_14] [i_14]))))))) ? (max((arr_35 [i_14]), (arr_35 [i_14]))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)156))))) ? (((/* implicit */int) arr_34 [i_14] [i_14] [i_14] [(signed char)8] [i_14])) : (((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_14] [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */int) arr_18 [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) (_Bool)1))))))));
        var_32 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)18)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1023)) ? (((/* implicit */int) (_Bool)1)) : (-2147483633)))))) ? (max(((-(((/* implicit */int) (signed char)49)))), (((/* implicit */int) ((((/* implicit */int) arr_18 [i_14] [i_14] [i_14] [i_14])) == (((/* implicit */int) (signed char)112))))))) : (((((/* implicit */_Bool) arr_7 [i_14])) ? (((/* implicit */int) arr_22 [i_14] [i_14] [i_14])) : (((/* implicit */int) arr_7 [i_14]))))));
    }
}
