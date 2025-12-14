/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32765
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) max(((unsigned char)119), (((/* implicit */unsigned char) var_17))))), (((unsigned short) var_16))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0] [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) (unsigned short)1))))) ? (((/* implicit */int) (signed char)123)) : ((+(((/* implicit */int) (signed char)-5))))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) arr_8 [(short)0] [i_3] [i_2] [i_1 + 2] [i_3])) >> (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1 + 2] [i_0])) - (33639))))))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
                {
                    arr_13 [i_0] [i_1 + 3] [(signed char)10] [7U] = ((/* implicit */long long int) arr_11 [i_0] [i_0] [(unsigned short)6] [i_0]);
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) (unsigned short)52844);
                        arr_17 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (unsigned short)11))) ? (((arr_15 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32))) : (1154624158U))) : (arr_11 [i_5] [i_4] [i_1 + 3] [i_1 + 1])));
                        var_23 |= (-(((((/* implicit */int) (unsigned short)29)) << (((/* implicit */int) (unsigned char)18)))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_4])) ? (((((/* implicit */long long int) ((/* implicit */int) var_12))) * (var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65525)) > (var_0)))))));
                    }
                    for (int i_6 = 1; i_6 < 16; i_6 += 2) 
                    {
                        arr_20 [i_0] [i_1 + 3] [i_4] [i_6] = ((/* implicit */unsigned char) arr_18 [i_0] [i_6] [i_4] [i_6 + 1]);
                        arr_21 [i_6] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)3))));
                    }
                    for (signed char i_7 = 3; i_7 < 13; i_7 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned int) (unsigned short)0);
                        var_26 = ((/* implicit */int) (+(arr_22 [i_7 + 2] [i_7 + 2] [i_7] [i_7 + 4])));
                    }
                }
                for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */short) var_4);
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 17; i_10 += 1) 
                        {
                            {
                                var_28 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (arr_5 [i_1 + 1]))) & (arr_5 [i_1 + 3])));
                                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) arr_18 [2U] [i_8] [i_8] [i_9]))));
                            }
                        } 
                    } 
                    arr_33 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_1 + 3] [i_1 - 1] [i_1 + 3] [i_1 - 1])) ? (max((((((/* implicit */_Bool) (unsigned short)20)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) (_Bool)0)))) : (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65514))) < (var_1))) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))));
                }
                arr_34 [(unsigned char)15] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65512)) : (((/* implicit */int) (unsigned short)2))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-30760)), ((unsigned short)22)))) : (((/* implicit */int) arr_4 [5U] [i_1 - 1]))))) ? (((/* implicit */long long int) (+(arr_25 [i_0] [i_1 + 3] [i_1 + 3])))) : (((((/* implicit */_Bool) max((-8658487889291885292LL), (((/* implicit */long long int) (unsigned short)33425))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65525)) ? (var_5) : (arr_18 [i_0] [(signed char)0] [(signed char)0] [i_1 + 1])))) : (((arr_9 [i_0] [i_0] [12U] [i_1] [i_1]) / (((/* implicit */long long int) arr_2 [i_0] [i_1] [i_0]))))))));
                var_30 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11))))))) > (var_5)))) < (((/* implicit */int) min((((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [i_1 + 3])), ((short)-30774))))));
                /* LoopNest 3 */
                for (unsigned int i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    for (long long int i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 17; i_13 += 1) 
                        {
                            {
                                arr_44 [i_0] [i_1 - 1] [i_11] [i_12] [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6)) | (((/* implicit */int) (unsigned char)86))));
                                var_31 = ((/* implicit */int) max((((/* implicit */unsigned int) arr_26 [i_1] [i_1] [i_13])), (((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65520)))))));
                                var_32 = ((/* implicit */_Bool) (((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65497))))))) << (((((/* implicit */int) (short)-30746)) + (30762)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_33 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
    {
        for (short i_15 = 0; i_15 < 16; i_15 += 4) 
        {
            {
                arr_50 [i_14 + 1] [(short)13] [1ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)31)) ? (1400079802U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18071)))));
                /* LoopNest 3 */
                for (unsigned char i_16 = 0; i_16 < 16; i_16 += 2) 
                {
                    for (signed char i_17 = 0; i_17 < 16; i_17 += 4) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 16; i_18 += 1) 
                        {
                            {
                                arr_60 [i_18] = ((/* implicit */long long int) ((_Bool) (+(((745615200U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_14] [i_15] [i_16] [i_17] [i_15] [i_17]))))))));
                                var_34 = ((/* implicit */long long int) 2147483647);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 16; i_19 += 4) 
                {
                    for (signed char i_20 = 0; i_20 < 16; i_20 += 4) 
                    {
                        {
                            arr_67 [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) arr_46 [12U])) ? (((((/* implicit */_Bool) arr_57 [i_20])) ? (arr_41 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_20] [i_20] [i_20] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_14 + 1]))))) : (((/* implicit */long long int) min(((~(((/* implicit */int) arr_55 [i_14 + 1] [i_15] [i_19] [i_14 + 1])))), (((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */int) (unsigned short)18055)) : (((/* implicit */int) (signed char)63)))))))));
                            var_35 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_16), (((/* implicit */unsigned short) (short)30745)))))) - (((((/* implicit */unsigned int) arr_47 [i_14] [(_Bool)1])) + (1400079796U)))))), (((max((-9223372036854775788LL), (((/* implicit */long long int) arr_56 [i_14] [i_15] [i_14] [(unsigned char)8])))) + (((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) var_10)))))))));
                            var_36 |= ((/* implicit */int) ((((/* implicit */_Bool) ((max((2894887480U), (((/* implicit */unsigned int) (short)-30746)))) * (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)18055)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_54 [i_14] [3U]) ? (-1052814475) : (((/* implicit */int) var_12))))) ? ((-(((/* implicit */int) (unsigned short)65513)))) : (((/* implicit */int) max(((unsigned short)65498), ((unsigned short)65513))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)47474)) / (((/* implicit */int) (unsigned short)47474))))), (0ULL)))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */_Bool) (~(((((/* implicit */int) (!(((/* implicit */_Bool) 72057594037927935LL))))) >> ((((~(((/* implicit */int) (short)30745)))) + (30767)))))));
            }
        } 
    } 
}
