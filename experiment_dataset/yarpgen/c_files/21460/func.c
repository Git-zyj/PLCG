/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21460
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
    var_11 = ((_Bool) ((((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16815))) : (2414719808151510478ULL))) & (var_7)));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)-62), (((/* implicit */signed char) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27405))) >= (2414719808151510475ULL))))) : (min((var_7), (0ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))) ? (((unsigned long long int) 0ULL)) : (((/* implicit */unsigned long long int) 2093588276U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (946327099U))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_13 -= ((_Bool) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_1 [i_0])))))) >= (((/* implicit */int) (unsigned char)127))));
        var_14 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) 4294967289U)) * (20ULL))));
        var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 9223372036854775796LL)) ? (((((/* implicit */unsigned long long int) 6901154429829401582LL)) | (288230376151711488ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (756782321U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13460)))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)30401), (((/* implicit */short) (unsigned char)171))))))));
        arr_3 [i_0] = ((/* implicit */short) (((_Bool)1) ? (11709159981300628411ULL) : (((/* implicit */unsigned long long int) 10U))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (min((arr_7 [i_1]), (((/* implicit */long long int) (unsigned short)30913)))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((2414719808151510475ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21843)))))) : (((/* implicit */int) arr_6 [i_1] [i_1])))))));
        /* LoopSeq 3 */
        for (short i_2 = 2; i_2 < 17; i_2 += 2) 
        {
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_1))));
            arr_10 [i_1] [i_1] [i_1] |= arr_6 [i_1] [i_1];
            arr_11 [i_1] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)253);
            var_18 *= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_7 [i_1])), (min((max((arr_4 [i_1]), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) arr_8 [i_2 + 2] [i_2 + 2] [i_2 + 2]))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_16 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (var_7)));
            arr_17 [i_1] [i_3] [i_3] = ((/* implicit */signed char) arr_12 [i_1] [i_3] [i_3]);
            var_19 *= ((/* implicit */unsigned char) ((short) (((_Bool)1) ? (arr_13 [i_1] [i_1] [i_1]) : (4294967293U))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            arr_22 [i_1] [i_4] = ((/* implicit */signed char) max((min((((long long int) arr_4 [i_4])), (((/* implicit */long long int) arr_6 [i_4] [i_1])))), (((/* implicit */long long int) ((signed char) arr_18 [i_4] [i_4] [i_1])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                var_20 *= ((/* implicit */_Bool) (-(((unsigned long long int) arr_12 [i_1] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    for (unsigned int i_7 = 2; i_7 < 19; i_7 += 4) 
                    {
                        {
                            arr_33 [i_4] = (short)-23063;
                            var_21 += ((/* implicit */short) ((arr_25 [i_1] [i_7] [i_1] [i_7]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162)))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                for (int i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_8 [i_1] [i_4] [i_8])))), (((/* implicit */int) ((((/* implicit */int) (short)-19227)) == (((/* implicit */int) (short)-1672)))))))) ? (((/* implicit */int) max(((short)-21419), (((/* implicit */short) (unsigned char)3))))) : (((((/* implicit */_Bool) 5639526823294818782LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_10] [i_10] [i_10] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 436469745584200512LL)) && ((_Bool)1))))) : (arr_12 [i_1] [i_8] [i_9])))) ? ((-(((/* implicit */int) (short)17281)))) : (((/* implicit */int) arr_38 [i_1])))))));
                            var_24 ^= ((/* implicit */long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_2)))))))));
                            var_25 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_23 [i_10]))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
                        {
                            arr_45 [i_1] [i_4] [i_4] [i_9] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)125))));
                            var_26 = var_2;
                        }
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned int i_13 = 4; i_13 < 18; i_13 += 3) 
                {
                    arr_51 [i_4] [i_4] = ((/* implicit */unsigned char) 11563099974611637143ULL);
                    arr_52 [i_1] [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((min((arr_7 [i_1]), (((/* implicit */long long int) arr_49 [i_1] [i_4] [i_1] [i_4] [i_1] [i_4])))) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_4])) ? (((/* implicit */int) arr_34 [i_13] [i_1] [i_1])) : (((/* implicit */int) var_4)))))))) + (((((/* implicit */int) arr_1 [i_13])) << ((((((~(((/* implicit */int) (unsigned char)130)))) + (162))) - (20)))))));
                }
                /* vectorizable */
                for (long long int i_14 = 3; i_14 < 18; i_14 += 1) 
                {
                    arr_55 [i_1] [i_4] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6298243848002334746LL)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) (unsigned char)81))));
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((int) arr_43 [i_14 - 1] [i_4])))));
                    var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))));
                }
                for (long long int i_15 = 1; i_15 < 19; i_15 += 1) 
                {
                    arr_58 [i_12] [i_4] [i_12] [i_15] = min((576460752303390720ULL), (((/* implicit */unsigned long long int) -181996780)));
                    var_29 -= ((/* implicit */_Bool) min((min((var_10), (((/* implicit */unsigned long long int) arr_34 [i_1] [i_12] [i_15])))), (max((((((/* implicit */_Bool) arr_18 [i_12] [i_12] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3568))) : (arr_41 [i_15]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65508)) * (((/* implicit */int) (short)-3568)))))))));
                    arr_59 [i_12] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) ((unsigned short) (signed char)55))))));
                }
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_60 [i_1] [i_4] [i_4] [i_1] [i_1] [i_16])) && (((/* implicit */_Bool) var_9))))))));
                    var_31 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) ((6261275692310963324ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17282)))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_1]))) : ((-(9071708060050269052ULL)))))));
                    arr_62 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_60 [i_16] [i_16 - 1] [i_16 - 1] [i_16] [i_16] [i_16])) ? (((/* implicit */unsigned long long int) ((int) 10303884931071362233ULL))) : (max((arr_60 [i_1] [i_16 - 1] [i_16 - 1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) (unsigned char)72))))));
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) arr_25 [i_12] [i_1] [i_12] [i_16]))));
                }
                var_33 = ((arr_49 [i_1] [i_1] [i_12] [i_1] [i_1] [i_4]) * ((~(arr_49 [i_1] [i_1] [i_4] [i_4] [i_12] [i_4]))));
                var_34 |= min((((((/* implicit */unsigned long long int) -1517708704)) | (arr_41 [i_12]))), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_8 [i_1] [i_4] [i_12])), (var_4)))));
                var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_1] [i_4] [i_12]))))) ? (((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) arr_26 [i_1] [i_1] [i_12] [i_12] [i_1])) : (((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [i_1] [i_12])))) : (((/* implicit */int) ((short) arr_8 [i_1] [i_4] [i_12])))));
            }
            for (int i_17 = 0; i_17 < 20; i_17 += 2) 
            {
                var_36 = ((/* implicit */int) 2592671134U);
                var_37 -= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52007))))) ^ (((/* implicit */int) ((short) ((((/* implicit */_Bool) 2440083799U)) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) arr_9 [i_1] [i_4] [i_1]))))))));
                var_38 -= ((/* implicit */unsigned int) var_0);
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 20; i_18 += 4) 
                {
                    for (short i_19 = 0; i_19 < 20; i_19 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_1] [i_1] [i_18] [i_19]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-17282))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_36 [i_19] [i_19] [i_19])), (arr_12 [i_19] [i_4] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2093588276U)) || (((/* implicit */_Bool) (unsigned char)184)))))) : ((-(arr_24 [i_1] [i_1] [i_17] [i_18])))))));
                            arr_69 [i_19] [i_19] [i_17] [i_18] [i_19] &= ((((/* implicit */_Bool) (unsigned short)55076)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2023922079U));
                            var_40 += ((/* implicit */_Bool) min(((-(var_10))), (((/* implicit */unsigned long long int) 5U))));
                            arr_70 [i_4] [i_4] [i_17] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (9ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_4])))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_20 = 4; i_20 < 17; i_20 += 3) /* same iter space */
                {
                    var_41 -= ((/* implicit */int) arr_71 [i_1] [i_20] [i_1] [i_1] [i_20 - 4]);
                    var_42 = ((/* implicit */unsigned short) var_6);
                }
                for (unsigned long long int i_21 = 4; i_21 < 17; i_21 += 3) /* same iter space */
                {
                    arr_76 [i_1] [i_21] [i_4] [i_21] [i_21] [i_4] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_10)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)138))))) : (arr_72 [i_4] [i_17] [i_17] [i_21]))), (((/* implicit */long long int) (signed char)-118))));
                    arr_77 [i_1] [i_1] [i_1] [i_4] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3692845372U)) ? (arr_66 [i_21] [i_17] [i_4] [i_1]) : (max((8414567363285995614LL), (((/* implicit */long long int) arr_35 [i_1] [i_21 - 4] [i_21 - 1] [i_1]))))));
                }
                for (unsigned int i_22 = 0; i_22 < 20; i_22 += 4) 
                {
                    var_43 -= ((/* implicit */unsigned long long int) (short)-17282);
                    arr_80 [i_1] [i_1] [i_4] [i_4] = ((/* implicit */signed char) max((((_Bool) 1541390675U)), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4074962559U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                    arr_81 [i_4] [i_4] [i_4] [i_22] = ((/* implicit */long long int) arr_48 [i_22] [i_1] [i_1] [i_1]);
                    var_44 += ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)22077))))) <= (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)25416))))))), (max((((/* implicit */unsigned char) var_3)), ((unsigned char)129)))));
                    var_45 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_47 [i_1] [i_17])))))) > (((((unsigned long long int) 7033025557020043037ULL)) >> (((arr_42 [i_1] [i_17] [i_4] [i_22] [i_22] [i_17] [i_4]) - (2473986622U)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_23 = 0; i_23 < 20; i_23 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_24 = 2; i_24 < 18; i_24 += 4) 
                    {
                        arr_86 [i_1] [i_17] [i_4] [i_23] [i_24] [i_23] [i_23] = ((/* implicit */unsigned long long int) ((_Bool) 4398046511103ULL));
                        arr_87 [i_1] [i_1] [i_4] [i_23] [i_4] = ((/* implicit */int) (short)-32755);
                    }
                    arr_88 [i_1] [i_1] [i_4] [i_4] [i_1] = (short)-17730;
                    var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)98)) && (((/* implicit */_Bool) (unsigned char)244)))) || (((/* implicit */_Bool) arr_61 [i_1] [i_1] [i_1] [i_1])))))));
                    var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (((((/* implicit */_Bool) (unsigned char)157)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_25 [i_1] [i_1] [i_17] [i_23])))))))));
                }
            }
            /* vectorizable */
            for (signed char i_25 = 1; i_25 < 19; i_25 += 2) 
            {
                var_48 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_85 [i_1] [i_1] [i_1] [i_25] [i_1])) + (((14234047667808472776ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                arr_91 [i_4] [i_4] [i_25] = ((/* implicit */unsigned int) ((unsigned char) (signed char)31));
                arr_92 [i_4] = ((/* implicit */short) arr_5 [i_25 + 1]);
            }
            var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) 3889167424744803592ULL))))), (((short) var_2))))) ? (((/* implicit */int) ((short) (-(((/* implicit */int) arr_1 [i_1])))))) : (((/* implicit */int) arr_20 [i_1]))));
        }
        /* LoopSeq 4 */
        for (unsigned long long int i_26 = 0; i_26 < 20; i_26 += 1) 
        {
            arr_96 [i_1] [i_26] [i_1] = ((/* implicit */unsigned int) ((int) (-9223372036854775807LL - 1LL)));
            var_50 = ((/* implicit */unsigned int) (short)17729);
        }
        for (long long int i_27 = 0; i_27 < 20; i_27 += 4) 
        {
            arr_99 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((unsigned long long int) 489946932U)) * (((/* implicit */unsigned long long int) ((long long int) arr_13 [i_1] [i_1] [i_1]))))))));
            var_51 *= ((/* implicit */signed char) (((~(((/* implicit */int) min((var_0), (var_5)))))) < (((/* implicit */int) (unsigned char)57))));
        }
        for (unsigned short i_28 = 0; i_28 < 20; i_28 += 3) 
        {
            var_52 = ((/* implicit */unsigned short) (-(((unsigned long long int) arr_36 [i_1] [i_1] [i_1]))));
            var_53 = ((/* implicit */unsigned short) ((((min((9007199254740864ULL), (((/* implicit */unsigned long long int) -2565606769793130728LL)))) | (((((/* implicit */_Bool) var_8)) ? (var_10) : (arr_73 [i_1] [i_1] [i_1] [i_1] [i_28] [i_28]))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(0U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_85 [i_1] [i_1] [i_28] [i_28] [i_28])) || (((/* implicit */_Bool) 3312755582229422111LL)))))) : (arr_7 [i_28]))))));
        }
        for (short i_29 = 0; i_29 < 20; i_29 += 4) 
        {
            arr_105 [i_1] [i_1] = ((/* implicit */signed char) max((((long long int) ((short) (short)0))), (((/* implicit */long long int) arr_36 [i_1] [i_1] [i_1]))));
            var_54 = ((/* implicit */_Bool) (unsigned short)46697);
        }
        arr_106 [i_1] = ((/* implicit */short) min((((arr_12 [i_1] [i_1] [i_1]) >> (((((/* implicit */int) (signed char)99)) - (81))))), (((/* implicit */unsigned long long int) arr_38 [i_1]))));
    }
}
