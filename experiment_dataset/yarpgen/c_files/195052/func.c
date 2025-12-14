/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195052
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */short) 674392029);
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_17 = var_4;
                /* LoopSeq 3 */
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_1] [i_3])) : (((/* implicit */int) arr_12 [i_0 + 1] [i_1])))) ^ (((/* implicit */int) var_5))));
                    var_19 &= ((/* implicit */_Bool) 8191);
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (-((((_Bool)1) ? (8191) : (((/* implicit */int) (short)10258)))))))));
                }
                for (unsigned int i_4 = 3; i_4 < 17; i_4 += 4) 
                {
                    var_21 = ((/* implicit */int) (~(arr_8 [i_0 - 2] [i_0 - 2] [i_4 + 3])));
                    var_22 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) || (((/* implicit */_Bool) var_9)))))));
                    var_23 -= ((((var_12) <= (-8196))) || (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8466960624155263744LL)) ? (-8215) : (-8191)));
                }
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    var_25 = ((/* implicit */int) min((var_25), (-8187)));
                    var_26 = ((/* implicit */_Bool) ((unsigned short) var_6));
                }
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0])) ? (((-971851233636073405LL) - (var_2))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) var_9)) + (var_14))))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 3; i_7 < 19; i_7 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */int) (((_Bool)1) ? (4294967269U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_29 *= ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_3))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_8 = 1; i_8 < 20; i_8 += 4) 
            {
                var_30 = ((/* implicit */long long int) arr_25 [16]);
                /* LoopSeq 1 */
                for (unsigned int i_9 = 1; i_9 < 19; i_9 += 2) 
                {
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_8] [i_9 + 1])) ? (((/* implicit */long long int) arr_4 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */long long int) 8209)) : (var_2)))));
                    var_32 = ((/* implicit */unsigned short) (((+(17686667623180309565ULL))) != (((((/* implicit */_Bool) var_2)) ? (arr_8 [i_0 + 1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_15))))));
                }
            }
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                for (int i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    {
                        var_33 *= ((/* implicit */signed char) arr_0 [i_1] [i_1]);
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
                        {
                            var_34 = ((/* implicit */_Bool) max((var_34), (var_13)));
                            var_35 = ((/* implicit */_Bool) (~((-(arr_7 [i_0 - 2] [i_10] [i_11])))));
                            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */int) (unsigned short)13763)) * (8223))))));
                        }
                    }
                } 
            } 
            var_37 = ((/* implicit */long long int) ((((/* implicit */int) arr_36 [i_0 + 2] [i_0 - 1] [i_1] [i_1] [i_1])) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [2U] [i_0] [i_0] [i_1] [i_0])))))));
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 21; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        for (short i_16 = 3; i_16 < 18; i_16 += 4) 
                        {
                            {
                                arr_51 [i_0] [i_0] [i_0] [i_15] = ((/* implicit */int) ((804580188U) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_0] [i_13] [i_13] [11U])) ? (((/* implicit */int) arr_15 [i_0] [(unsigned short)20] [i_0] [i_0] [14U] [(_Bool)0])) : (((/* implicit */int) (short)-30443)))))));
                                arr_52 [i_0] [i_15] [18] [(_Bool)1] [i_15] [i_16] = ((/* implicit */_Bool) var_9);
                                var_38 = ((/* implicit */_Bool) (unsigned char)255);
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */long long int) (-(arr_4 [i_0 - 2] [i_0 - 2])));
                    var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) (+((~(8226))))))));
                }
            } 
        } 
        var_41 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_3)))))));
    }
    for (unsigned char i_17 = 0; i_17 < 22; i_17 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_18 = 0; i_18 < 22; i_18 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_19 = 0; i_19 < 22; i_19 += 1) 
            {
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    {
                        var_42 = ((/* implicit */short) (~(arr_61 [(short)0] [i_20] [i_18] [i_18] [14U] [i_20 - 1])));
                        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_61 [i_17] [i_18] [i_18] [i_19] [i_20] [i_20])) ? (1145860839505792023LL) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0)))))));
                    }
                } 
            } 
            var_44 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 2668419269U)) ? (arr_57 [i_18] [i_17] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26)))))));
        }
        for (unsigned short i_21 = 1; i_21 < 20; i_21 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_22 = 0; i_22 < 22; i_22 += 2) 
            {
                for (unsigned char i_23 = 0; i_23 < 22; i_23 += 2) 
                {
                    {
                        var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) arr_57 [i_17] [i_21] [i_17]))));
                        var_46 = ((/* implicit */int) ((var_2) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 8219)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_57 [i_17] [i_21 + 1] [i_22]))))));
                    }
                } 
            } 
            var_47 = ((/* implicit */long long int) var_14);
        }
        /* LoopSeq 4 */
        for (unsigned int i_24 = 0; i_24 < 22; i_24 += 3) 
        {
            arr_76 [i_17] [i_24] [15U] = ((/* implicit */unsigned long long int) (_Bool)1);
            var_48 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) var_15)) == (min((var_2), (((/* implicit */long long int) min((var_9), (8219))))))));
        }
        /* vectorizable */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            var_49 -= ((/* implicit */_Bool) (~(arr_66 [i_17] [i_17] [i_17] [i_17])));
            var_50 = ((/* implicit */unsigned int) arr_78 [i_25]);
        }
        for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_27 = 0; i_27 < 22; i_27 += 2) 
            {
                var_51 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_57 [i_17] [(unsigned char)12] [i_17]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_26 + 1] [i_26 + 1] [i_26 + 1] [i_26 + 1])))))) ? (((/* implicit */long long int) ((2147483620) * (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (signed char)25))))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (+(var_10)))) : (((((/* implicit */_Bool) arr_77 [i_17] [i_17] [i_17])) ? (-1546259286927925394LL) : (((/* implicit */long long int) -8209))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_28 = 0; i_28 < 22; i_28 += 4) 
                {
                    for (short i_29 = 0; i_29 < 22; i_29 += 2) 
                    {
                        {
                            var_52 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 1557720653U)) ? (((/* implicit */int) (short)27697)) : (177771374)))));
                            arr_89 [i_29] [4] [i_26] [i_17] [i_26] [i_17] [i_17] = (~(max((((/* implicit */long long int) min((((/* implicit */int) (unsigned char)229)), (8207)))), ((~(-5249088220462895711LL))))));
                            var_53 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_5)) ? (16884862243020071270ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_65 [i_26] [i_28])), (411167383))))))));
                            var_54 = ((/* implicit */short) ((_Bool) min((((/* implicit */int) (signed char)25)), (var_8))));
                            var_55 = ((/* implicit */int) ((((/* implicit */_Bool) ((4215984950U) >> (((((/* implicit */int) (signed char)-12)) + (38)))))) ? (1145860839505792023LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                        }
                    } 
                } 
                arr_90 [i_26] [i_26] [i_26] [i_26] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (((((/* implicit */_Bool) ((unsigned int) arr_57 [i_27] [i_26] [i_17]))) ? (((((/* implicit */long long int) -8233)) + (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_70 [i_17]))))))));
            }
            var_56 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) / (var_12)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_73 [i_17] [15U] [i_26])) : (((/* implicit */int) var_0))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) / (-1145860839505792034LL)))))), (((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned long long int) (~(127)))) : (18446744073709551615ULL)))));
            var_57 = ((/* implicit */unsigned long long int) var_1);
            /* LoopNest 3 */
            for (short i_30 = 1; i_30 < 21; i_30 += 2) 
            {
                for (unsigned char i_31 = 0; i_31 < 22; i_31 += 2) 
                {
                    for (int i_32 = 0; i_32 < 22; i_32 += 3) 
                    {
                        {
                            var_58 = ((/* implicit */_Bool) min((var_58), (((/* implicit */_Bool) min((arr_68 [i_26] [i_26 + 1] [i_30 + 1] [i_26]), ((-(arr_68 [i_17] [i_26 + 1] [i_30 - 1] [15]))))))));
                            var_59 = ((/* implicit */short) min((-351262569), (((/* implicit */int) var_1))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_33 = 0; i_33 < 22; i_33 += 2) 
            {
                var_60 = ((/* implicit */unsigned int) max((var_60), (((/* implicit */unsigned int) var_1))));
                var_61 = ((/* implicit */_Bool) max((var_61), (((/* implicit */_Bool) (((-(((/* implicit */int) var_13)))) | (((((/* implicit */int) var_11)) / (((/* implicit */int) arr_73 [(_Bool)1] [(_Bool)1] [(_Bool)1])))))))));
            }
        }
        /* vectorizable */
        for (unsigned char i_34 = 2; i_34 < 21; i_34 += 4) 
        {
            var_62 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_107 [i_34 - 1] [i_34 + 1] [i_34 - 1]))));
            var_63 ^= (!(((/* implicit */_Bool) ((unsigned int) 731035121))));
            var_64 = ((/* implicit */unsigned int) ((((/* implicit */long long int) -8215)) | (-1LL)));
            /* LoopNest 3 */
            for (unsigned int i_35 = 0; i_35 < 22; i_35 += 2) 
            {
                for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                {
                    for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
                    {
                        {
                            arr_118 [i_36] [i_35] [i_36] [i_37] = ((/* implicit */long long int) arr_85 [i_17] [i_36] [i_17] [i_36]);
                            var_65 = ((/* implicit */long long int) var_11);
                        }
                    } 
                } 
            } 
        }
    }
    var_66 = min((min((((var_10) + (var_14))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-69))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)85))))));
    var_67 = ((/* implicit */int) max((var_67), (((/* implicit */int) var_15))));
    var_68 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((3189059703808387283LL) >> ((((-(var_8))) - (476185790)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (2147483626) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */long long int) 8186)) > (-1145860839505792023LL))))))) : (min((((((/* implicit */long long int) ((/* implicit */int) var_1))) + (-3189059703808387301LL))), (((/* implicit */long long int) (!((_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned int i_38 = 4; i_38 < 12; i_38 += 3) 
    {
        for (int i_39 = 0; i_39 < 14; i_39 += 4) 
        {
            {
                var_69 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)65509)), (arr_110 [i_38] [i_38] [i_38 - 2])))) ? (arr_100 [i_38 + 1] [i_38 + 1] [i_38] [i_38] [i_38] [i_38 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                var_70 = ((/* implicit */unsigned int) -731035119);
            }
        } 
    } 
}
