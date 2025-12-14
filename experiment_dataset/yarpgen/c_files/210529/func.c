/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210529
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 2594656931U)) ? (((/* implicit */unsigned int) 536870911)) : (2594656931U)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) 4294967295U);
        /* LoopSeq 4 */
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned char) (((~(1936824577))) % (((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2]))))));
            var_20 = ((/* implicit */unsigned int) var_4);
            var_21 = ((min((arr_0 [i_1 + 2]), (((/* implicit */long long int) var_8)))) * (((/* implicit */long long int) ((int) -1936824577))));
        }
        for (int i_2 = 3; i_2 < 9; i_2 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)41))));
                        arr_15 [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1936824577)) ? (-8879958192842549104LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)106)))));
                        arr_16 [i_2 - 2] [5ULL] = ((/* implicit */unsigned long long int) (unsigned char)154);
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+((-(7447792852595012956ULL))))))));
                    }
                } 
            } 
            arr_17 [i_0] [i_2 - 3] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) (unsigned char)0)))) + (13)))))) * (((unsigned long long int) ((((/* implicit */int) (signed char)1)) - (1936824577))))));
        }
        for (int i_5 = 3; i_5 < 9; i_5 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_5 + 1] [i_5])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_5 + 1] [i_5])) : (((/* implicit */int) arr_12 [i_0] [(unsigned char)9] [i_5 + 1] [i_5])))) << (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (arr_11 [i_5 - 3] [i_0] [i_5] [i_5] [i_0]))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (5179062391171356672LL)))))))))))));
            var_25 = ((((/* implicit */unsigned long long int) -5892756110519634794LL)) * (max((min((7447792852595012956ULL), (((/* implicit */unsigned long long int) 2147479552)))), (((/* implicit */unsigned long long int) (_Bool)1)))));
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max(((-(((/* implicit */int) (signed char)-51)))), (((/* implicit */int) ((short) arr_12 [i_0] [i_5 - 2] [i_0] [i_0])))))) & (min((((-6204121081016587239LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-71))))), (((var_3) + (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
        }
        for (int i_6 = 3; i_6 < 9; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                arr_28 [i_0] [i_6] [i_7] |= ((/* implicit */unsigned long long int) (unsigned char)153);
                var_27 += ((/* implicit */int) ((unsigned char) arr_18 [i_7]));
            }
            for (signed char i_8 = 1; i_8 < 9; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */int) var_6);
                            var_29 = ((/* implicit */unsigned int) (_Bool)1);
                            arr_40 [i_0] [i_6] [i_6] [(unsigned char)6] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)187)) ? (((var_16) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_9] [i_8 + 1] [i_9]))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1133789730)) ? (((/* implicit */int) (unsigned short)2570)) : (((/* implicit */int) var_6)))) | (((/* implicit */int) ((1700310365U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_9] [i_10])))))))))));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) & (((-3928975492923034586LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)5)))))))) ? (((unsigned long long int) ((int) -1699277918704565710LL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */long long int) arr_6 [i_8])) : (var_3))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 1700310370U)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (signed char)29)))))))))))));
                        }
                    } 
                } 
                arr_41 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_7))))))));
                var_31 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)154)) * (((/* implicit */int) var_5)))) * (((((/* implicit */_Bool) -803048931)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)56)))))))));
                var_32 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (signed char)98)) % (((/* implicit */int) (signed char)-42))))));
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (unsigned char)17))) ? (((10998951221114538643ULL) / (2174999034226146343ULL))) : (((/* implicit */unsigned long long int) ((int) 262253465U)))));
            }
            for (int i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                arr_44 [i_0] [i_6] = ((((((/* implicit */_Bool) 1828635624)) ? (((((/* implicit */int) (signed char)36)) * (((/* implicit */int) (signed char)41)))) : (((((/* implicit */_Bool) 13729198558252764152ULL)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (_Bool)1)))))) ^ (min((((((/* implicit */int) (signed char)36)) + (var_15))), (((/* implicit */int) ((signed char) (_Bool)1))))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    for (short i_13 = 4; i_13 < 7; i_13 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)120)) >= (((/* implicit */int) (short)-28868)))))));
                            var_35 = -862415514;
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_14 = 0; i_14 < 10; i_14 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    arr_57 [i_15] [i_14] [(short)3] [(short)3] = ((/* implicit */long long int) ((arr_11 [i_0] [i_6 - 1] [i_14] [i_15] [i_15]) + (865856591U)));
                    arr_58 [(signed char)1] [i_15] = ((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) (short)4032)) - (4032))));
                }
                var_36 += ((/* implicit */_Bool) ((long long int) arr_36 [i_6 + 1] [i_6] [(unsigned char)1]));
            }
            /* LoopSeq 2 */
            for (short i_16 = 0; i_16 < 10; i_16 += 3) 
            {
                var_37 = ((/* implicit */int) 3429110704U);
                arr_63 [i_16] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5174047650799320036ULL)) ? (((/* implicit */int) ((3429110704U) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-37)))))))) : (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))))), ((signed char)21))))));
            }
            for (int i_17 = 3; i_17 < 6; i_17 += 3) 
            {
                arr_67 [i_17 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((-6006891151323221567LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-98))))) ? (((/* implicit */long long int) 3429110705U)) : (10LL)));
                var_38 *= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */unsigned long long int) ((arr_34 [i_0] [i_0] [i_17] [i_17]) ^ (((/* implicit */int) var_10))))) : (var_13))) > (min((((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13065))))), (((unsigned long long int) (signed char)-105))))));
            }
        }
        arr_68 [i_0] [2U] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_64 [i_0] [i_0] [i_0]))))))) < (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_38 [i_0] [i_0])) % (((/* implicit */int) var_17))))) + (((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_7)))))));
        /* LoopSeq 3 */
        for (signed char i_18 = 0; i_18 < 10; i_18 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (long long int i_20 = 0; i_20 < 10; i_20 += 4) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            arr_80 [i_0] [i_18] [i_19] [i_20] [i_21] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((12515194649631603326ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) : (var_0))) : (((((/* implicit */_Bool) 3429110705U)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) << (((((/* implicit */int) arr_36 [i_0] [i_19] [i_0])) - (((/* implicit */int) arr_36 [i_0] [2] [i_0]))))));
                            arr_81 [i_0] [i_18] [i_18] [2LL] [i_19] [i_20] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((var_3) - (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) >= (var_15))))))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))));
                            var_39 &= ((((((/* implicit */int) arr_60 [i_0] [i_0] [i_0])) > (((/* implicit */int) arr_60 [i_0] [i_18] [i_19])))) ? (max((var_16), (((/* implicit */unsigned long long int) arr_60 [2U] [i_19] [i_21])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))));
                            var_40 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) ((var_13) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))))))))));
                        }
                    } 
                } 
            } 
            var_41 = ((/* implicit */signed char) 3039664378384869586LL);
            var_42 = ((/* implicit */unsigned char) ((int) min((((/* implicit */unsigned int) (unsigned char)166)), (3588584810U))));
            /* LoopNest 3 */
            for (short i_22 = 1; i_22 < 7; i_22 += 2) 
            {
                for (short i_23 = 2; i_23 < 9; i_23 += 1) 
                {
                    for (unsigned long long int i_24 = 2; i_24 < 8; i_24 += 4) 
                    {
                        {
                            var_43 &= ((/* implicit */signed char) ((830730982) / (((/* implicit */int) (signed char)59))));
                            var_44 = (!(((/* implicit */_Bool) min((((/* implicit */int) arr_54 [i_24 + 1] [i_22 - 1] [i_23 - 2])), ((+(arr_69 [i_0] [i_0])))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (signed char i_25 = 0; i_25 < 10; i_25 += 4) 
            {
                var_45 = ((/* implicit */short) (-(379593201)));
                /* LoopSeq 1 */
                for (short i_26 = 1; i_26 < 9; i_26 += 4) 
                {
                    var_46 ^= ((/* implicit */int) ((_Bool) (unsigned char)32));
                    arr_97 [i_26] = ((/* implicit */int) ((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 0)))) & (min((300869202202120585ULL), (((/* implicit */unsigned long long int) min(((short)-11444), (((/* implicit */short) (signed char)-50)))))))));
                }
                var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) max(((-(var_3))), (((/* implicit */long long int) arr_37 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0])))))));
            }
            /* vectorizable */
            for (short i_27 = 0; i_27 < 10; i_27 += 4) 
            {
                var_48 = ((/* implicit */signed char) ((-1935163212) ^ (((/* implicit */int) arr_18 [i_27]))));
                var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (-736818052) : (arr_69 [i_18] [i_27])));
            }
            for (int i_28 = 0; i_28 < 10; i_28 += 4) 
            {
                arr_103 [i_28] [i_18] [i_0] = ((unsigned char) ((signed char) 581268385U));
                var_50 = ((/* implicit */short) (signed char)-21);
            }
        }
        /* vectorizable */
        for (short i_29 = 0; i_29 < 10; i_29 += 4) 
        {
            arr_106 [i_0] = ((/* implicit */int) (+(arr_26 [i_29])));
            arr_107 [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_38 [i_29] [i_0]) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_0] [i_29])))));
        }
        /* vectorizable */
        for (int i_30 = 0; i_30 < 10; i_30 += 3) 
        {
            arr_110 [i_30] [i_30] = ((((/* implicit */_Bool) arr_89 [i_0])) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_89 [i_0])))) : ((~(arr_90 [(_Bool)1] [(_Bool)1] [(_Bool)1] [8ULL]))));
            /* LoopSeq 2 */
            for (unsigned char i_31 = 2; i_31 < 7; i_31 += 2) 
            {
                var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_31 - 2] [i_31] [i_31 + 1])) ? (((/* implicit */int) arr_36 [i_31 + 3] [i_31 + 1] [i_31])) : (((/* implicit */int) (unsigned char)30))));
                var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_108 [i_31 + 3]) : (((/* implicit */long long int) 3713698911U))));
            }
            for (unsigned long long int i_32 = 0; i_32 < 10; i_32 += 1) 
            {
                var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-25280)) ? (((/* implicit */int) arr_13 [i_32] [i_30] [i_30] [i_0])) : (((/* implicit */int) var_10)))))));
                /* LoopSeq 1 */
                for (unsigned char i_33 = 0; i_33 < 10; i_33 += 4) 
                {
                    arr_119 [i_0] [i_30] [i_30] [i_32] [i_33] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1701223196511454186LL)) ? (((/* implicit */int) (unsigned short)49717)) : (-685797034)));
                    /* LoopSeq 2 */
                    for (long long int i_34 = 2; i_34 < 8; i_34 += 1) 
                    {
                        var_54 = ((/* implicit */int) ((300869202202120585ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        arr_124 [i_30] [i_33] [i_32] [i_30] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) arr_74 [i_0] [3U] [i_0] [i_34]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)33)) && (((/* implicit */_Bool) -1401454387)))))));
                    }
                    for (unsigned char i_35 = 1; i_35 < 7; i_35 += 4) 
                    {
                        var_55 = ((((((/* implicit */int) (signed char)-54)) / (((/* implicit */int) (signed char)41)))) >= (((/* implicit */int) (short)-11445)));
                        arr_129 [i_35] [i_30] [i_32] [i_30] [i_0] = ((/* implicit */signed char) (((-(var_16))) & (var_7)));
                    }
                    var_56 = ((/* implicit */unsigned long long int) max((var_56), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((int) 1203603851))) < (((((/* implicit */_Bool) var_12)) ? (5659587739803027156ULL) : (var_2))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (unsigned short i_36 = 2; i_36 < 6; i_36 += 1) 
        {
            for (int i_37 = 2; i_37 < 6; i_37 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_38 = 3; i_38 < 6; i_38 += 4) 
                    {
                        var_57 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-36)) ? (300869202202120578ULL) : (18145874871507431030ULL))) * (18145874871507431036ULL)));
                        arr_138 [i_0] [i_0] [6] [i_37] [6] = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_4)) ^ ((-2147483647 - 1))))));
                        var_58 *= ((/* implicit */unsigned char) (short)-11444);
                    }
                    for (unsigned char i_39 = 0; i_39 < 10; i_39 += 4) 
                    {
                        var_59 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10282051126297264633ULL)) ? (((/* implicit */unsigned int) 1030417817)) : (((unsigned int) min(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1)))))));
                        var_60 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) << (((((int) var_5)) - (47)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-64352835) == (-1935163212))))) : (0ULL)));
                    }
                    arr_141 [i_37] [i_37 + 3] [i_37 - 2] [i_0] = -1;
                }
            } 
        } 
    }
}
