/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30691
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_16 -= ((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned char)219))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */int) (short)20979)) ^ (((/* implicit */int) (signed char)-8))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 4; i_3 < 23; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -2076946947)) - (arr_1 [i_0] [i_3 - 3])))) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_0] [(_Bool)1] [i_0] [i_2] &= ((/* implicit */long long int) var_10);
                            arr_14 [i_0] [i_0] [i_3] [i_2] [i_2] [14LL] [i_4] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) -9223372036854775798LL)) ? (((/* implicit */long long int) 708037824U)) : (arr_6 [i_4] [i_3 - 1] [i_3 - 1] [i_3]))));
                            var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_5 [i_3 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                        }
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((int) (signed char)-57));
                            var_20 = ((/* implicit */long long int) (+(-2065928402)));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((unsigned int) (_Bool)1)))));
                            var_22 = ((/* implicit */long long int) min((((2065928403) | (((/* implicit */int) (signed char)56)))), (((/* implicit */int) var_12))));
                            var_23 = ((unsigned long long int) (unsigned char)62);
                        }
                        for (unsigned char i_6 = 3; i_6 < 22; i_6 += 1) 
                        {
                            arr_22 [i_3 - 2] [i_3] [i_3] [(unsigned char)18] [i_3] = ((/* implicit */short) ((_Bool) max((((arr_6 [i_0] [(_Bool)1] [17] [17]) | (4921964831380615171LL))), (((/* implicit */long long int) ((signed char) 9504760115103567419ULL))))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) << (((((((/* implicit */int) var_2)) + (((/* implicit */int) var_3)))) - (143)))))))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            arr_25 [18U] [i_3 - 1] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) 8791284857646602712ULL);
                            var_25 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)58)), (arr_11 [i_0] [i_3] [1])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (var_15)))) : (arr_2 [i_0]))), (((/* implicit */unsigned long long int) ((unsigned short) arr_5 [i_3 - 4])))));
                            var_26 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)124)))))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (short)20898)) ? (((/* implicit */int) (short)20894)) : (((/* implicit */int) (short)-20898))));
                        }
                        arr_26 [23ULL] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2065928393)) ? (-32289645) : (((/* implicit */int) (signed char)64))))) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) ((unsigned short) ((long long int) arr_11 [i_1] [i_3] [i_1]))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        arr_31 [i_0] [i_8] = ((/* implicit */long long int) (unsigned char)224);
                        var_28 = ((/* implicit */long long int) ((unsigned int) min((arr_9 [i_0] [i_0] [i_0] [i_8] [i_2] [i_8] [i_8]), (arr_9 [i_0] [i_0] [i_0] [i_8] [i_0] [i_0] [i_8]))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        var_29 = ((unsigned long long int) var_0);
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 18; i_10 += 4) 
        {
            for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) 
            {
                {
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (-(1633371524U))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 1; i_13 < 16; i_13 += 4) 
                        {
                            {
                                arr_45 [i_10] [i_12] [8ULL] [i_9] [i_10] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-4541051515585671179LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)61)))))) : ((~(var_15)))));
                                arr_46 [i_12] [14ULL] [i_10] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_9] [i_13 - 1] [i_12])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) -521494080)) : (arr_32 [i_9]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)84)) ? (var_8) : (((/* implicit */int) (unsigned char)36)))))));
                                arr_47 [i_13 + 1] [i_11] [i_11] [i_11] [i_9] &= ((/* implicit */long long int) ((var_9) > (((((/* implicit */_Bool) 725879811049153749LL)) ? (-999380941) : (2065928400)))));
                                arr_48 [i_12] = ((((var_4) >= (((/* implicit */int) var_1)))) ? (((long long int) var_2)) : (((long long int) var_0)));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */_Bool) ((((unsigned int) arr_0 [(unsigned short)2])) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)31)) ? (897410175) : (((/* implicit */int) (short)32759)))))));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (+(90256406U))))));
    }
    for (long long int i_14 = 1; i_14 < 20; i_14 += 4) 
    {
        arr_52 [i_14] [i_14] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (arr_15 [i_14] [i_14] [i_14])))) || (((/* implicit */_Bool) var_11))))), (min((((((/* implicit */_Bool) arr_16 [i_14] [i_14] [i_14])) ? (3075170620891185153LL) : (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) var_12))))));
        var_33 = ((/* implicit */int) ((24ULL) | (((/* implicit */unsigned long long int) -7594595093507299914LL))));
        /* LoopSeq 2 */
        for (unsigned int i_15 = 0; i_15 < 22; i_15 += 1) 
        {
            var_34 &= ((/* implicit */long long int) max((var_9), ((~(999380953)))));
            /* LoopNest 3 */
            for (unsigned int i_16 = 0; i_16 < 22; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 4) 
                {
                    for (unsigned char i_18 = 1; i_18 < 18; i_18 += 4) 
                    {
                        {
                            arr_61 [i_18 + 3] [i_17] [i_17] [i_14] [i_15] [(unsigned short)18] [(unsigned short)18] = ((/* implicit */int) 17ULL);
                            arr_62 [i_17] [i_15] [i_16] [8LL] [i_18] &= ((/* implicit */signed char) (~(max((((/* implicit */unsigned int) min((-885095267), (((/* implicit */int) (signed char)-126))))), (1823395666U)))));
                        }
                    } 
                } 
            } 
            var_35 = var_6;
            var_36 = ((/* implicit */long long int) var_9);
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            var_37 = ((/* implicit */int) ((min((((((/* implicit */_Bool) var_8)) ? (-7594595093507299916LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) var_3)))) / (-2278975840441810197LL)));
            arr_67 [i_14] = ((/* implicit */unsigned char) ((((16261790150593475809ULL) == (((/* implicit */unsigned long long int) -7508774553583017169LL)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) ((long long int) (unsigned char)223))) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) var_12))))));
            arr_68 [i_14 - 1] [i_14] [i_19] = ((/* implicit */unsigned char) var_9);
            /* LoopNest 2 */
            for (unsigned char i_20 = 0; i_20 < 22; i_20 += 4) 
            {
                for (long long int i_21 = 1; i_21 < 20; i_21 += 1) 
                {
                    {
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)56)) - (511)));
                        arr_74 [i_14] [i_19] [i_14] = ((/* implicit */_Bool) ((1554542990) / (-2065928385)));
                    }
                } 
            } 
        }
        var_39 ^= ((/* implicit */short) (unsigned short)4095);
    }
    for (unsigned short i_22 = 0; i_22 < 17; i_22 += 1) 
    {
        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) min((((/* implicit */long long int) ((short) arr_6 [i_22] [i_22] [i_22] [14LL]))), (((((/* implicit */_Bool) 999380924)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_6 [i_22] [i_22] [i_22] [i_22]))))))));
        /* LoopSeq 1 */
        for (int i_23 = 0; i_23 < 17; i_23 += 1) 
        {
            var_41 = ((/* implicit */unsigned int) ((((max((((/* implicit */unsigned int) (unsigned char)122)), (var_15))) + (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) var_1))))) <= (var_0)))))));
            var_42 ^= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)193))))))));
            var_43 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_13)) ? (((unsigned int) 4095)) : (((/* implicit */unsigned int) ((-1565384945) - (((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6)))))));
            var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((unsigned short) (_Bool)1)))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_24 = 0; i_24 < 17; i_24 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_25 = 0; i_25 < 17; i_25 += 1) 
            {
                for (long long int i_26 = 0; i_26 < 17; i_26 += 1) 
                {
                    {
                        arr_91 [10LL] [i_24] [i_24] [i_26] = min((((long long int) (+(0ULL)))), (((/* implicit */long long int) var_10)));
                        /* LoopSeq 1 */
                        for (unsigned char i_27 = 0; i_27 < 17; i_27 += 4) 
                        {
                            var_45 ^= (((~(7533652088094875470LL))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)140)))));
                            var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_5)) / (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) var_8)) : (arr_29 [i_22] [i_22] [i_22] [i_22] [i_24])))))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)0)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)190))) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_5)) : (arr_18 [i_22] [i_24] [i_25]))))))));
                            var_47 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)204), ((unsigned char)224)))) ? ((+(var_9))) : (max((((/* implicit */int) (unsigned short)18833)), (-2147483636)))))) + (((((_Bool) 4526429102765080365LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 8795824586752LL)) ? (358598939U) : (1823395666U)))) : (arr_20 [i_22] [i_26] [i_25] [i_26] [i_26] [i_27])))));
                            arr_95 [i_27] [i_27] [i_26] [i_27] [i_27] [i_27] = ((/* implicit */_Bool) (+(-915214673)));
                        }
                    }
                } 
            } 
            var_48 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) (signed char)112)), (min((arr_4 [3LL] [i_24]), (((/* implicit */long long int) (unsigned char)38)))))) >> ((((~(arr_1 [i_22] [i_24]))) - (1574691919U)))));
            arr_96 [i_24] [i_22] [16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL))))))));
            var_49 = ((/* implicit */long long int) min((var_49), (((((/* implicit */long long int) (+(((/* implicit */int) var_12))))) % (((long long int) var_14))))));
        }
        for (unsigned int i_28 = 0; i_28 < 17; i_28 += 1) 
        {
            var_50 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (18446744056529682432ULL))))) << (((((var_2) ? (((long long int) 231418094U)) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)83))))))) + (127LL)))));
            var_51 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_28 [i_22] [i_28]) >= (((/* implicit */unsigned int) var_5))))) ^ (max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-32))))));
            arr_100 [(unsigned char)8] [(unsigned char)8] [i_28] &= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)227))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_29 = 0; i_29 < 17; i_29 += 1) 
        {
            var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) var_0))));
            var_53 = (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_5 [i_22]))))));
            var_54 = ((/* implicit */int) ((unsigned char) 3015028892U));
        }
        for (unsigned long long int i_30 = 0; i_30 < 17; i_30 += 4) 
        {
            var_55 = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (var_6));
            var_56 = ((/* implicit */int) ((12065634847810607946ULL) - (((/* implicit */unsigned long long int) min((max((7594595093507299914LL), (((/* implicit */long long int) 358598939U)))), (((/* implicit */long long int) ((3578953619027745461ULL) < (((/* implicit */unsigned long long int) arr_90 [i_30] [i_22] [i_30] [i_22]))))))))));
            var_57 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? ((-(((/* implicit */int) (unsigned short)2544)))) : (var_8)));
            var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49266))) : (arr_15 [i_22] [i_22] [i_30])))) ? (((((/* implicit */_Bool) (unsigned char)173)) ? (((long long int) -8208336860472603515LL)) : (((/* implicit */long long int) 197655151)))) : (((/* implicit */long long int) var_9))));
            /* LoopNest 2 */
            for (int i_31 = 0; i_31 < 17; i_31 += 4) 
            {
                for (long long int i_32 = 1; i_32 < 16; i_32 += 1) 
                {
                    {
                        arr_111 [i_22] [i_30] [i_32] [i_31] [i_32] = ((((/* implicit */_Bool) ((unsigned int) (~(4063549180U))))) ? (((((/* implicit */_Bool) ((878512917598791290LL) << (((4063549205U) - (4063549203U)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_32] [i_32 + 1] [i_32 + 1] [10ULL] [i_32 + 1] [i_32 - 1] [10ULL]))) : (arr_4 [i_31] [i_22]))) : (var_11));
                        arr_112 [i_32] [i_30] [i_30] [(short)10] = ((/* implicit */long long int) ((int) ((arr_72 [i_32] [i_32] [i_32] [i_32 + 1]) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_83 [i_31] [i_22]))))))));
                    }
                } 
            } 
        }
        var_59 = ((/* implicit */unsigned long long int) min((var_59), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((var_12) ? (((/* implicit */int) arr_104 [i_22] [i_22])) : (var_5)))), ((+(min((((/* implicit */long long int) 734437898U)), (224810971444749922LL))))))))));
    }
    /* vectorizable */
    for (long long int i_33 = 0; i_33 < 12; i_33 += 4) 
    {
        var_60 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
        var_61 = ((/* implicit */short) max((var_61), (((/* implicit */short) (~(((/* implicit */int) (unsigned short)65535)))))));
        var_62 &= arr_59 [i_33] [i_33] [i_33] [i_33] [i_33] [i_33] [i_33];
    }
    var_63 = ((/* implicit */unsigned long long int) max((min(((-(var_9))), ((+(var_9))))), (((/* implicit */int) var_7))));
}
