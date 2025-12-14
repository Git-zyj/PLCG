/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21325
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) ((((unsigned int) ((16886920188092332934ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) << (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 715642578002682173LL)), (arr_2 [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) (short)-32764)) != (((/* implicit */int) (unsigned char)130))))) : (((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
        {
            var_18 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((short) var_15))) ? (min((((/* implicit */unsigned long long int) (short)-6839)), (arr_2 [7U] [4U]))) : (((/* implicit */unsigned long long int) max((268435328U), (var_7)))))) << (((((((((/* implicit */int) (unsigned short)46530)) & (var_3))) - (((/* implicit */int) arr_1 [i_0])))) - (5198)))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)64))))) ? (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 4]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [3] [3] [(unsigned short)4] [(unsigned short)4] [i_0 + 4] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0 + 3])))))));
                        arr_11 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) -54584350))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0 + 4]))))) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)40))) & (4058939288430483686ULL))) != (max((((/* implicit */unsigned long long int) (short)-29013)), (arr_6 [i_0]))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_3] [i_4] = ((((/* implicit */int) (signed char)102)) << (((1998396221U) - (1998396207U))));
                            arr_15 [i_4] [i_1] [i_4] [i_2] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_4] [i_3] [i_2] [i_1] [(unsigned char)8])) ? (arr_3 [i_0] [i_0 + 2]) : (((/* implicit */long long int) min((((((/* implicit */int) arr_0 [i_2])) % (((/* implicit */int) arr_7 [i_0] [i_1] [10ULL] [i_1])))), (((/* implicit */int) (short)32767)))))));
                        }
                        for (unsigned int i_5 = 2; i_5 < 12; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)-10172)) & (((/* implicit */int) (unsigned short)64397))))) == (100663296U)));
                            var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60200)) ? (arr_10 [i_3] [i_3] [i_3] [i_5 - 2] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((((/* implicit */_Bool) (unsigned short)30402)) ? (6227985456168813262ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_5 - 2] [i_0])))))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_3])))) + (((arr_10 [i_5] [i_3] [i_2] [i_1] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 1499482603)))) != (((2751460596U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_5])))))))))))));
                            var_23 = ((/* implicit */unsigned short) ((((((unsigned long long int) (short)-32741)) << (((((unsigned int) (short)-19324)) - (4294947956U))))) << ((((((_Bool)1) ? (-4675702377782366932LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (4675702377782366936LL)))));
                        }
                        for (short i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            arr_22 [i_0] [i_1] [i_2] [(unsigned char)8] [i_6] = min((((/* implicit */int) ((((/* implicit */int) arr_19 [i_0 + 2] [9ULL] [i_0] [i_0 - 1] [i_0 + 2])) == (((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_17 [i_0 - 1] [i_0 + 4])))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_15))));
                            var_25 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) min(((~(min((arr_3 [i_1] [i_6]), (((/* implicit */long long int) var_6)))))), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_0 + 4] [i_0 + 4])) << (((((/* implicit */int) arr_20 [i_0])) + (5541))))))))) : (((/* implicit */unsigned short) min(((~(min((arr_3 [i_1] [i_6]), (((/* implicit */long long int) var_6)))))), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_0 + 4] [i_0 + 4])) << (((((((/* implicit */int) arr_20 [i_0])) + (5541))) + (20364)))))))));
                        }
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_0 [i_2]))));
                        arr_23 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_7 [i_0] [i_0] [i_0 + 2] [i_0]), (arr_7 [i_0] [i_0] [i_0 - 1] [i_0])))) != (((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0] [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0 + 4] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 1] [i_0]))))));
                    }
                } 
            } 
            var_27 |= ((/* implicit */short) ((10276600440804518542ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])) - (((/* implicit */int) arr_0 [i_1])))))));
        }
        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
        {
            var_28 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)12238))), (((unsigned long long int) max((2616686502U), (((/* implicit */unsigned int) 1814300414)))))));
            arr_26 [i_0] [(unsigned short)3] [i_0] = ((/* implicit */long long int) ((short) var_10));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 4; i_8 < 11; i_8 += 2) 
            {
                var_29 += ((/* implicit */_Bool) min((16777208U), (((/* implicit */unsigned int) (unsigned char)0))));
                arr_31 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((max((((/* implicit */long long int) (unsigned short)5)), (8898298018904050703LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-33)) != (((/* implicit */int) var_2)))))))))));
                arr_32 [i_0] [i_7] [i_0] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 896)) ? (3834364672U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) % (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) << (((((((/* implicit */_Bool) 2147483647)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_4)))) - (18446744073709551608ULL)))));
                var_30 = ((/* implicit */_Bool) max((var_30), (((max((17511721379548012326ULL), (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */int) arr_5 [i_0] [i_7]))))))) != (((/* implicit */unsigned long long int) max((min((((/* implicit */int) (short)-31635)), (var_14))), (((/* implicit */int) arr_5 [i_8 - 2] [i_0 + 3])))))))));
            }
        }
        for (short i_9 = 3; i_9 < 11; i_9 += 2) 
        {
            arr_36 [i_0] = ((/* implicit */unsigned short) ((int) arr_16 [i_9] [i_9] [i_0] [i_0] [i_9]));
            var_31 = ((/* implicit */unsigned int) arr_28 [i_0] [i_9] [i_0] [i_9]);
            /* LoopSeq 1 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    arr_42 [i_0] [6] = ((/* implicit */unsigned long long int) max((min((-930951043), (((/* implicit */int) arr_34 [i_10 - 1])))), (((((/* implicit */int) (_Bool)1)) + (((((/* implicit */int) (short)3429)) >> (((((/* implicit */int) (unsigned char)110)) - (100)))))))));
                    arr_43 [i_11] [i_0] [i_9 - 2] [i_0] [i_0] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (unsigned short)27226)) % (-462591874))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned short) (~(arr_44 [i_0 + 4] [i_0 - 1])));
                        arr_48 [i_0 - 1] [i_9 + 1] [i_0] [3U] [i_12] [i_11] = ((/* implicit */long long int) ((unsigned int) arr_13 [i_0 - 1] [i_0] [i_0 - 1]));
                        var_33 *= ((/* implicit */unsigned char) (_Bool)1);
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */int) arr_38 [i_0 + 3] [i_0 + 3] [i_0]);
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 1] [1LL] [i_0 + 1])) & (((/* implicit */int) arr_9 [2LL] [4] [i_10 - 1] [i_11] [i_13]))))) ? (((((/* implicit */long long int) 268435456)) & (arr_3 [i_9] [i_9 + 1]))) : (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) (short)-28248)) < (((/* implicit */int) var_12))))), (((((/* implicit */int) var_9)) / (((/* implicit */int) (short)-28764)))))))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_14 = 0; i_14 < 13; i_14 += 2) 
                {
                    arr_54 [i_0] [i_9] [i_10] [i_14] |= ((((/* implicit */_Bool) arr_37 [i_10 - 1] [i_9 - 2] [i_14])) ? (((/* implicit */int) (_Bool)1)) : (((795120952) >> (((130048U) - (130029U))))));
                    arr_55 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (short)4032))) != (((/* implicit */int) (unsigned char)212))));
                }
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned char i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_16)) + (((arr_2 [i_9] [i_16]) << (((arr_8 [i_0]) - (525569550U)))))))) ? (arr_10 [i_0] [i_0 + 4] [i_10] [i_0] [i_16] [i_15]) : (((/* implicit */unsigned long long int) min((1222073422U), (min((4294967295U), (((/* implicit */unsigned int) arr_57 [(short)2] [i_10] [i_15] [i_16]))))))))))));
                            arr_60 [i_0] = ((/* implicit */long long int) ((min((18446744073709551606ULL), (((/* implicit */unsigned long long int) 2048841865U)))) % (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) (short)430)))) ^ (((/* implicit */int) ((((/* implicit */int) arr_50 [i_0] [i_15] [i_0] [i_15] [i_0])) != (((/* implicit */int) arr_18 [i_0] [i_15] [i_10] [i_0]))))))))));
                            var_37 = 1281777809U;
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (unsigned short)41369))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_9] [i_0]))) == (3013544564403151462ULL))))))) ? (((/* implicit */unsigned int) -1108543933)) : (((((((/* implicit */int) (unsigned short)52730)) > (arr_49 [i_0 + 1] [i_0] [i_0] [i_0] [i_10]))) ? (1573971876U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)13048))))))));
            }
            var_39 &= ((/* implicit */unsigned short) ((min(((((_Bool)1) ? (3008140127U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23655))))), (((/* implicit */unsigned int) var_5)))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [10U] [i_9 - 3] [i_9 - 3] [i_9])) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((var_13) > (((/* implicit */long long int) 4294967291U))))))))));
        }
    }
    var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) (short)-26683))));
}
