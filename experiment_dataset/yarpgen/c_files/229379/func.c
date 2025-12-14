/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229379
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
    var_17 = ((/* implicit */short) ((unsigned short) 3928400691460397444LL));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_14)))))))) ? (min((((/* implicit */int) ((short) (signed char)3))), ((-(((/* implicit */int) (signed char)127)))))) : (((/* implicit */int) ((signed char) var_14)))));
    var_19 &= ((/* implicit */unsigned short) var_4);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) min((min((((/* implicit */unsigned char) min((((/* implicit */signed char) arr_3 [i_0])), (arr_2 [i_0])))), (arr_1 [i_0] [6LL]))), (((/* implicit */unsigned char) arr_3 [i_0]))));
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
        {
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) arr_6 [i_1 + 1]);
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 2])) ? (((/* implicit */int) arr_9 [i_1 + 3] [i_1 + 1] [(signed char)1] [i_1 + 3])) : (min((var_16), ((~(((/* implicit */int) (signed char)-127))))))));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    var_21 = ((/* implicit */unsigned char) 16438094087430619200ULL);
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_3 [i_2]))));
                    var_23 = ((((/* implicit */_Bool) (((-(16438094087430619179ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_0])))))))) ? (((unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_3])) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [8U]))))) ? (((/* implicit */unsigned long long int) (-(var_16)))) : (16438094087430619197ULL))));
                }
                var_24 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 1] [i_1 + 3] [i_1 + 2])) : (16777215)))));
            }
            for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 4) 
            {
                var_25 = ((/* implicit */_Bool) arr_9 [4ULL] [i_1 + 1] [i_0] [i_0]);
                arr_14 [(signed char)5] [i_1] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)65534)))) << (((arr_0 [12]) - (597784142)))));
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    var_26 = (signed char)-127;
                    /* LoopSeq 2 */
                    for (long long int i_6 = 2; i_6 < 11; i_6 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), ((-(2008649986278932415ULL)))));
                        var_28 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_19 [i_0] [i_1 + 1] [i_4] [i_4 - 1] [i_4 - 1] [i_6 - 2]), ((_Bool)1))))) <= (((((/* implicit */_Bool) (signed char)-127)) ? (16438094087430619211ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_29 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(arr_0 [i_5])))) ? (((((/* implicit */_Bool) 4861845602342800246LL)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (min((16438094087430619167ULL), (((/* implicit */unsigned long long int) arr_12 [(signed char)5] [i_5] [i_1] [i_0])))))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [8LL] [i_6]))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        var_30 = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
                        var_31 |= ((/* implicit */int) (unsigned short)31643);
                    }
                }
                arr_24 [i_0] [i_0] [(signed char)1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1446183721)) ? (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (7410417869548851314LL)))), (((short) 16438094087430619179ULL))))) : (((/* implicit */int) (short)32767))));
            }
            var_32 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 7410417869548851314LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1446183710)) ? (1475330563) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) -2031814461927808541LL)) ? (2985716755526512202LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))), (((/* implicit */long long int) var_7))));
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 10; i_8 += 3) /* same iter space */
        {
            arr_28 [i_0] |= ((/* implicit */unsigned short) arr_10 [i_8 + 1] [i_0] [i_0] [i_0]);
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    {
                        var_33 = var_3;
                        /* LoopSeq 1 */
                        for (signed char i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            var_34 *= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_9] [i_10])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_34 [i_0] [i_8] [1LL] [7ULL] [i_11] [i_8 + 3])))));
                            var_35 *= ((/* implicit */_Bool) ((((-858215030) <= (((/* implicit */int) arr_26 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [10]))) : (((((/* implicit */long long int) ((/* implicit */int) (short)5845))) / (-8883253215456165656LL)))));
                        }
                    }
                } 
            } 
        }
        for (int i_12 = 1; i_12 < 10; i_12 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                arr_43 [i_0] [i_12] [i_12] = ((/* implicit */unsigned int) min((2008649986278932405ULL), (((/* implicit */unsigned long long int) arr_32 [(unsigned short)2] [i_12] [(signed char)11] [i_12 + 2]))));
                var_36 *= ((/* implicit */short) ((var_0) * (((/* implicit */unsigned int) ((arr_15 [i_13] [i_12 + 2] [i_12 + 2] [i_12 + 2] [i_12 + 3] [i_0]) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) arr_1 [i_12 - 1] [i_0])))))));
                arr_44 [i_0] [i_0] [(unsigned short)12] [(_Bool)1] = ((/* implicit */signed char) arr_8 [i_12]);
            }
            for (short i_14 = 2; i_14 < 9; i_14 += 3) 
            {
                var_37 -= ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_47 [i_0] [i_12 + 2])))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_14 + 4] [12LL] [i_0] [(signed char)2]))) : (-7410417869548851315LL))))), (((/* implicit */long long int) min((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_9)))))));
                arr_48 [i_12 + 1] [i_12 + 1] = ((/* implicit */_Bool) (unsigned short)32177);
                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)32169))))) ? (((((/* implicit */_Bool) arr_26 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_12] [i_12])) ? (((/* implicit */unsigned long long int) var_0)) : (var_5))))) : (((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) <= (16438094087430619211ULL))))) : (arr_8 [i_12 + 1])))));
            }
            var_39 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_13))));
        }
    }
    for (long long int i_15 = 0; i_15 < 11; i_15 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_16 = 0; i_16 < 11; i_16 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_18 = 0; i_18 < 11; i_18 += 4) 
                {
                    arr_59 [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */_Bool) var_12);
                    var_40 = ((/* implicit */unsigned int) min((3005537861934434938LL), (((/* implicit */long long int) ((_Bool) 174751386318018309LL)))));
                    arr_60 [i_15] [i_16] [i_17] [i_16] [i_18] = ((/* implicit */unsigned short) var_10);
                    var_41 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                }
                /* vectorizable */
                for (signed char i_19 = 0; i_19 < 11; i_19 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_20 = 0; i_20 < 11; i_20 += 2) 
                    {
                        var_42 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-45)) / (666904692)));
                        arr_67 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] |= ((/* implicit */long long int) ((((((/* implicit */int) arr_55 [i_15] [i_16])) | (((/* implicit */int) (signed char)45)))) << (((((/* implicit */int) arr_53 [i_20] [i_16])) - (27883)))));
                        arr_68 [i_15] [i_16] [i_17] [(signed char)10] [i_20] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_15] [10U] [i_16] [i_16] [i_17] [i_19] [10U])) ? (16438094087430619218ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_17]) ? (((/* implicit */int) arr_37 [i_15] [i_19] [i_17])) : (((/* implicit */int) (_Bool)1))))) ? (var_5) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-15033)))))));
                        var_44 ^= ((/* implicit */unsigned short) arr_29 [i_15]);
                    }
                    var_45 = ((/* implicit */unsigned short) arr_35 [i_15] [i_15] [11] [i_15] [i_15] [i_15] [i_15]);
                    var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)115)) - (101)))))) ? (arr_69 [i_15] [i_16] [i_17]) : (((/* implicit */unsigned long long int) var_16))));
                }
                var_47 |= ((/* implicit */_Bool) arr_5 [i_15]);
                var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 549755813880LL)) ? (arr_58 [i_15] [i_15] [i_15] [i_15] [10U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))) && (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6856064043647220773LL))))));
            }
            var_49 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (3005537861934434929LL)))) ? (((((/* implicit */int) (signed char)127)) - (((/* implicit */int) (short)-32767)))) : (((/* implicit */int) var_13))));
            var_50 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_16 [(signed char)11] [i_15] [i_16] [i_16])) % (((/* implicit */int) (short)32764)))) - (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && ((_Bool)1)))) >= (((/* implicit */int) arr_55 [i_16] [(unsigned char)8])))))));
        }
        /* LoopSeq 3 */
        for (unsigned int i_22 = 0; i_22 < 11; i_22 += 3) 
        {
            var_51 *= ((/* implicit */signed char) ((((/* implicit */_Bool) -6369847711593605526LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)63))) : (8221169298695514191LL)));
            var_52 = (signed char)-109;
        }
        for (int i_23 = 1; i_23 < 10; i_23 += 3) 
        {
            var_53 = ((/* implicit */signed char) ((short) (-(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-127)))))));
            arr_77 [(short)8] = ((/* implicit */unsigned short) ((long long int) arr_63 [i_15] [i_15] [i_15] [i_15]));
        }
        for (long long int i_24 = 0; i_24 < 11; i_24 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
            {
                var_54 = ((/* implicit */_Bool) max((var_54), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_15] [i_24] [i_25] [4]))) == (var_5)))));
                var_55 = ((/* implicit */unsigned char) arr_18 [i_15] [i_15] [i_15] [i_25]);
            }
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
            {
                var_56 = ((/* implicit */unsigned long long int) (-(0)));
                arr_88 [i_15] [i_26] [i_24] [i_26] = ((/* implicit */_Bool) ((6856064043647220774LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)96)))));
            }
            /* LoopSeq 3 */
            for (unsigned char i_27 = 0; i_27 < 11; i_27 += 2) 
            {
                var_57 = ((/* implicit */_Bool) min((min((arr_75 [i_15] [(_Bool)1] [i_27]), (arr_75 [(short)1] [i_24] [8ULL]))), (((/* implicit */unsigned int) var_2))));
                arr_91 [i_27] [(unsigned char)10] [i_24] [i_15] &= ((/* implicit */signed char) (short)9130);
            }
            for (unsigned char i_28 = 2; i_28 < 10; i_28 += 2) 
            {
                var_58 = ((/* implicit */short) arr_40 [i_15] [i_28 + 1]);
                var_59 = max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_15] [i_24] [i_28 + 1] [i_28] [i_28 + 1] [i_28 + 1]))))), ((-(var_4))));
                var_60 = ((/* implicit */unsigned char) arr_70 [i_28] [i_28] [i_24] [i_28] [i_15]);
            }
            for (short i_29 = 0; i_29 < 11; i_29 += 3) 
            {
                var_61 -= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) arr_34 [(unsigned short)9] [(_Bool)1] [i_24] [i_24] [i_29] [i_29])))));
                /* LoopSeq 1 */
                for (signed char i_30 = 0; i_30 < 11; i_30 += 3) 
                {
                    var_62 = ((/* implicit */short) (unsigned short)49128);
                    /* LoopSeq 1 */
                    for (signed char i_31 = 0; i_31 < 11; i_31 += 1) 
                    {
                        var_63 = ((/* implicit */unsigned long long int) arr_55 [i_24] [i_29]);
                        var_64 *= ((/* implicit */short) min((((/* implicit */long long int) var_10)), (arr_21 [i_15] [i_24] [i_29] [i_24] [i_31] [i_31] [i_15])));
                    }
                    var_65 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_78 [i_24] [i_30])) : ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_30] [i_29] [i_15] [i_24] [i_15] [i_15])) || (((/* implicit */_Bool) (signed char)-96)))))))));
                }
                var_66 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_38 [(signed char)1] [i_24] [i_15]))))) ? (((/* implicit */unsigned long long int) arr_76 [i_29])) : (((((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_8))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65517)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-109)))))))));
            }
            var_67 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned char) arr_74 [i_15] [i_15]))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_74 [i_15] [i_24])))));
            var_68 *= ((/* implicit */_Bool) arr_2 [(signed char)0]);
        }
        arr_103 [i_15] = ((/* implicit */signed char) (unsigned short)20835);
        var_69 -= ((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_6))))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_90 [i_15] [i_15] [i_15]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23)))));
    }
    for (int i_32 = 0; i_32 < 24; i_32 += 2) 
    {
        arr_106 [(_Bool)1] = (-(min(((((_Bool)1) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_104 [i_32]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_105 [i_32])) : (((/* implicit */int) arr_105 [i_32]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_33 = 0; i_33 < 24; i_33 += 4) 
        {
            var_70 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32758)) ? (((/* implicit */int) (unsigned short)65496)) : (((/* implicit */int) (signed char)-87))));
            arr_109 [i_32] [i_33] [i_33] = ((/* implicit */signed char) var_10);
            arr_110 [15LL] = ((/* implicit */unsigned short) ((signed char) (((_Bool)1) || (((/* implicit */_Bool) 8864977556768786406LL)))));
        }
        /* vectorizable */
        for (short i_34 = 0; i_34 < 24; i_34 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_35 = 0; i_35 < 24; i_35 += 2) 
            {
                var_71 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_108 [i_35])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) arr_112 [i_35] [i_34])) : (((((/* implicit */_Bool) arr_111 [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32758))))));
                /* LoopSeq 1 */
                for (signed char i_36 = 2; i_36 < 22; i_36 += 4) 
                {
                    var_72 = ((/* implicit */signed char) -9194419858575088802LL);
                    var_73 = ((/* implicit */int) ((((/* implicit */int) arr_115 [i_32] [i_34] [i_35] [i_36 - 1] [i_36 - 2])) >= ((-(arr_108 [i_32])))));
                    arr_118 [i_32] [i_32] [i_32] [i_32] [i_32] [21LL] = ((/* implicit */signed char) var_12);
                }
                arr_119 [i_32] [i_32] [19LL] [i_32] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_113 [8] [i_34])) : (((/* implicit */int) arr_113 [i_32] [i_34]))));
            }
            var_74 = ((/* implicit */int) arr_105 [i_32]);
            var_75 = ((/* implicit */int) ((unsigned short) (_Bool)1));
            arr_120 [i_32] = ((/* implicit */long long int) arr_112 [i_32] [i_34]);
        }
        arr_121 [i_32] = ((/* implicit */unsigned short) (signed char)-127);
        var_76 = ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) % (arr_108 [i_32])))) && (((/* implicit */_Bool) (-(var_0)))));
        arr_122 [i_32] &= ((/* implicit */signed char) max((var_4), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_105 [i_32])) ? (((/* implicit */int) arr_104 [i_32])) : (((/* implicit */int) arr_104 [i_32])))))));
    }
    var_77 = ((/* implicit */long long int) (-(((/* implicit */int) (short)0))));
}
