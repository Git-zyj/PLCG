/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52910
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
    var_14 *= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))) ^ (4038476111385737476ULL))) * (((/* implicit */unsigned long long int) 1409269550U))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_11 [i_1] [i_2] [6U] [i_1] [i_1] [6U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14408267962323814143ULL)) ? (min((((/* implicit */int) arr_10 [i_0] [i_0 + 2])), (((((/* implicit */int) var_2)) | (((/* implicit */int) (unsigned short)42982)))))) : (((/* implicit */int) min(((!(((/* implicit */_Bool) 14408267962323814143ULL)))), (var_11))))));
                            arr_12 [i_0 - 1] [i_1] [(short)17] [i_3] = ((/* implicit */signed char) var_6);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (signed char i_6 = 3; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0 + 2] [i_1] [i_4] [i_5] [i_5] [i_6 - 1] = ((/* implicit */signed char) ((var_3) ? ((((~(arr_9 [i_0 + 2] [i_1] [19U] [i_5]))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42982))))) : (3282961612U)));
                                arr_23 [i_0 + 3] [i_0] [8ULL] [i_0 + 1] [i_4] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((short) (unsigned short)57698)), (((/* implicit */short) ((signed char) 102264322892247023ULL)))))) ? (((((/* implicit */_Bool) max((arr_5 [i_1] [i_1] [i_6]), (((/* implicit */int) var_8))))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)77))) : (var_6)))))) : (((4038476111385737499ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_0])) ? (arr_13 [i_4] [i_4] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_4] [i_1] [i_4]))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4032)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_4]))) : (var_10))))))));
                                var_16 = ((/* implicit */signed char) ((int) min((arr_10 [i_6 - 1] [i_4 - 1]), (arr_10 [i_6 + 3] [i_4 - 1]))));
                            }
                        } 
                    } 
                    var_17 *= ((/* implicit */short) 761892772);
                    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (var_2)))) ? (((14408267962323814140ULL) * (14408267962323814143ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 3] [i_0 - 1] [i_4 - 1]))))))));
                    arr_24 [i_1] [4ULL] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_7 = 2; i_7 < 17; i_7 += 1) 
                {
                    arr_29 [i_7] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22537))) / (var_10));
                    arr_30 [i_7 + 3] [i_7] = arr_1 [i_1];
                }
                for (unsigned int i_8 = 1; i_8 < 19; i_8 += 3) 
                {
                    arr_35 [i_0] [(signed char)0] [12LL] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -1616582216)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)22554)) || (((/* implicit */_Bool) 14408267962323814159ULL))))))))) ? (((unsigned int) arr_31 [i_0 + 2] [i_8 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1))))));
                    arr_36 [i_0 + 3] [i_0 + 3] [i_8] [i_8] = ((/* implicit */_Bool) 14408267962323814129ULL);
                }
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 16; i_9 += 1) 
                {
                    for (int i_10 = 3; i_10 < 17; i_10 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_11 = 3; i_11 < 19; i_11 += 4) /* same iter space */
                            {
                                var_19 = min((((((/* implicit */int) ((var_12) <= (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [15ULL] [i_11])))))) - (((((/* implicit */_Bool) (signed char)116)) ? (67108863) : (((/* implicit */int) (unsigned short)65523)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_2 [i_11 - 1] [i_9]))))))));
                                var_20 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) var_11)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_11 + 1] [i_11 + 1] [i_11 - 1])) ? (268435455U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (4292314587404402547ULL)))));
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_11 - 2] [i_10 + 2] [i_0 - 1])) << (((((/* implicit */int) arr_3 [i_11 - 2] [i_10 + 1] [i_0 + 3])) - (55)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))) * (((/* implicit */int) ((unsigned char) var_6)))))) : ((-(min((14154429486305149061ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                            }
                            for (int i_12 = 3; i_12 < 19; i_12 += 4) /* same iter space */
                            {
                                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-117)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                                arr_47 [i_0] [i_0 - 1] [i_0 - 1] [i_12] [i_0 - 1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1693855844)) ? (((/* implicit */int) ((_Bool) 761892772))) : (((/* implicit */int) (_Bool)1))));
                                arr_48 [i_12] [i_12] [i_1] [i_12] [i_0 + 3] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_9 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) (unsigned short)42979))))) : (min((14154429486305149068ULL), (var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_12 + 1] [i_10 - 1] [i_1]))) : (((var_12) + (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
                                var_23 = ((/* implicit */signed char) (+(((/* implicit */int) var_11))));
                            }
                            for (int i_13 = 3; i_13 < 19; i_13 += 4) /* same iter space */
                            {
                                var_24 = ((/* implicit */short) ((min((((/* implicit */long long int) var_3)), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (6039065914598711062LL))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_8)), (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((2704180557U) | (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
                                arr_52 [i_13] [i_13] [i_9] [i_0 - 1] [i_0 + 2] [i_13] [i_0 + 2] = ((/* implicit */long long int) arr_49 [i_0 - 1] [i_0 - 1]);
                            }
                            /* LoopSeq 1 */
                            for (unsigned long long int i_14 = 1; i_14 < 19; i_14 += 1) 
                            {
                                var_25 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_1), (((/* implicit */unsigned char) var_3)))))))), (((((/* implicit */_Bool) arr_53 [i_0 - 1] [i_1] [i_9] [i_10 + 3] [i_1])) ? (255ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [11U] [i_9] [i_10] [i_14 - 1])))))));
                                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (((((~(1906223654U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117))))) % (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))))));
                                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((6039065914598711073LL), (((/* implicit */long long int) (signed char)16))))) ? (min(((~(6039065914598711062LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) arr_49 [i_14 + 1] [i_1]))))))) : (((/* implicit */long long int) (~((~(var_7))))))));
                            }
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_41 [i_0 + 3] [i_0] [i_0] [i_0] [i_9] [12U] [i_10])) * (((/* implicit */int) ((unsigned char) 8925435989348611366LL)))));
                            /* LoopSeq 3 */
                            for (unsigned char i_15 = 1; i_15 < 18; i_15 += 1) 
                            {
                                arr_57 [i_0 - 1] [i_0 - 1] = min(((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7))))))), (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) -7957564728170125232LL)) ? (((/* implicit */int) arr_50 [i_15] [i_10 - 3] [19U] [i_0 + 1])) : (((/* implicit */int) (signed char)64)))) : (((/* implicit */int) (!(var_3)))))));
                                arr_58 [i_0] [i_1] [i_9 - 1] [i_9 + 2] [i_1] [i_0 + 2] [i_1] = ((/* implicit */unsigned char) ((long long int) ((short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (short)10671))))));
                                arr_59 [i_0] [(unsigned short)12] [i_0] [i_10 - 3] [i_10 - 3] [i_15 + 1] = ((/* implicit */unsigned long long int) ((arr_32 [i_15] [i_0 + 1] [i_0 + 1]) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -4257607346979585116LL)) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (var_7))))))));
                            }
                            for (unsigned char i_16 = 0; i_16 < 20; i_16 += 1) 
                            {
                                arr_63 [i_9] [(_Bool)1] [i_9 + 3] = arr_54 [1ULL] [i_10] [(signed char)1] [i_1] [(signed char)2] [(signed char)2];
                                arr_64 [i_0] [i_1] [i_9] [i_10] [i_16] [(_Bool)1] = ((/* implicit */signed char) ((unsigned int) var_7));
                                arr_65 [i_0] [i_1] [i_9 + 3] [i_10 + 1] [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((short) (((_Bool)1) || ((_Bool)0))));
                            }
                            for (short i_17 = 1; i_17 < 19; i_17 += 1) 
                            {
                                arr_68 [i_0 + 1] [i_17] [i_17] [i_10] [i_10 - 2] [i_17] = ((/* implicit */signed char) min(((-(1189163467178773908LL))), (((/* implicit */long long int) min((arr_44 [i_0 + 2] [i_9 - 1] [i_9 - 1] [i_10 + 2] [(signed char)4]), (arr_44 [i_0 + 1] [i_9 + 3] [i_9 + 3] [i_10 - 1] [(_Bool)1]))))));
                                arr_69 [i_9] [i_17] [i_9 + 3] = ((/* implicit */short) (((-((+(-8332126686861799LL))))) + (((/* implicit */long long int) (+((+(((/* implicit */int) arr_33 [(unsigned short)12] [16ULL] [(unsigned short)12] [(unsigned short)12])))))))));
                                var_29 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-68)) ? (var_10) : (-3722111183340737331LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 + 3] [i_9 - 1] [i_10 + 1]))) : (((((/* implicit */_Bool) (unsigned char)249)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) * (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                                var_30 = ((/* implicit */short) min((var_30), (((short) (~(((/* implicit */int) (unsigned char)6)))))));
                                arr_70 [i_0] [(unsigned char)16] [i_9] [(_Bool)1] |= (~(9352211285224392710ULL));
                            }
                            var_31 = ((/* implicit */int) (~(67108863U)));
                        }
                    } 
                } 
            }
        } 
    } 
}
