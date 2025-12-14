/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191842
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) min(((short)22276), (((/* implicit */short) (unsigned char)232))))) ? (((((/* implicit */long long int) ((unsigned int) -3680061520887204221LL))) / (((((/* implicit */_Bool) -37417494)) ? (9223372036854775798LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */long long int) arr_7 [i_1 - 3] [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) ((9223372036854775802LL) ^ (((/* implicit */long long int) 1852657999))));
                            var_20 &= ((((/* implicit */_Bool) arr_4 [i_1 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 - 1]))) : (arr_4 [i_1 + 2]));
                            arr_14 [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3 - 1] [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 + 1] [i_1 - 4]))) : (arr_3 [i_3 + 1] [i_1 - 3])));
                        }
                        for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            arr_18 [i_2] [i_2] [i_2] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_3 [i_1 - 1] [i_1 - 3]), (arr_4 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-5)) ? (((/* implicit */int) (short)5808)) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) -3947065757463937277LL)) ? (9223372036854775807LL) : (var_16)))))));
                            arr_19 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_1 [i_0] [i_3 + 1])), (max((arr_11 [i_0] [i_3 + 1] [i_1 - 3] [i_3 - 1]), (arr_11 [i_0] [i_3 - 1] [i_1 + 1] [i_3])))));
                        }
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2585278551U)) ? (1278611833) : (((/* implicit */int) (unsigned char)19))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6730722361352275284LL)) ? (-1) : (((/* implicit */int) (short)-5))))) : (8765677361193916900ULL)))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)247))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_3 - 1]))))) : (min((-7256710448526440878LL), (-3LL))))) : (((/* implicit */long long int) arr_11 [i_0] [i_1 - 2] [i_2] [i_3]))));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_1))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 2; i_6 < 10; i_6 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            arr_26 [i_0] [i_1] [i_2] [i_2] [i_6] [i_1] = ((((/* implicit */_Bool) arr_16 [i_1 - 2] [i_1] [4LL] [i_2] [i_1 - 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (-37417494) : (((/* implicit */int) arr_2 [i_0]))))) : (((((/* implicit */_Bool) (short)11119)) ? (5742064458582609692LL) : (-7256710448526440883LL))));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((arr_10 [i_1 - 3] [i_1 - 2] [i_6 - 2] [(unsigned char)5] [i_6] [i_6 + 2]) | (arr_10 [i_1 - 3] [i_1 - 2] [i_1] [i_6] [i_6 - 2] [i_6 + 2]))))));
                            arr_27 [i_2] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */int) (unsigned char)11);
                        }
                        for (unsigned char i_8 = 1; i_8 < 11; i_8 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) (+(((/* implicit */int) arr_28 [i_0] [i_1] [i_2] [i_6 + 1] [i_8]))));
                            arr_31 [i_2] [i_1 - 4] [i_1 - 1] [i_2] [i_6] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_24 [i_6 - 2] [i_2])));
                            arr_32 [i_0] [i_2] [i_2] [i_8 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_0])) ? (arr_30 [i_1 - 4]) : (arr_30 [i_2])));
                            var_25 = ((/* implicit */long long int) -34408197);
                        }
                        for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            var_26 *= ((/* implicit */unsigned char) arr_23 [i_2] [i_6] [i_2] [i_6 + 1] [i_2]);
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((9681066712515634715ULL) * (((/* implicit */unsigned long long int) 538185427)))) : (((/* implicit */unsigned long long int) arr_30 [i_6 + 2]))));
                        }
                        arr_35 [i_0] [i_1 - 4] [i_2] [i_6] = ((/* implicit */long long int) (~(2147483647)));
                        arr_36 [i_2] [i_1] [i_1] [i_1 - 2] [i_1 - 2] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_0] [i_2] [i_0] [i_2] [i_0]))));
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10782)) ? (((/* implicit */int) (short)-32758)) : (((/* implicit */int) (unsigned char)243))))) ? ((-(((/* implicit */int) (unsigned char)21)))) : (var_8)));
                        arr_37 [i_0] [i_0] [i_2] [i_6] = ((((/* implicit */_Bool) arr_24 [i_1 - 1] [i_2])) ? (arr_34 [i_1 + 1] [i_6 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))));
                    }
                    for (long long int i_10 = 2; i_10 < 10; i_10 += 4) /* same iter space */
                    {
                        arr_40 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)-29343), (arr_6 [i_1] [i_2]))))) : (arr_0 [i_10 + 2])))));
                        arr_41 [i_2] [4ULL] = ((/* implicit */int) -4425866938664610187LL);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)227)))) & ((+(((/* implicit */int) (unsigned short)50505))))))) ? (9223372036854775784LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [(unsigned char)10] [i_1 - 2] [i_2] [i_1 - 4] [i_1 - 2])) ? ((-(((/* implicit */int) arr_44 [i_0] [i_1] [i_2] [i_1] [(short)9])))) : (((/* implicit */int) (unsigned char)1)))))));
                                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)28)))))));
                                var_31 *= arr_16 [i_12] [i_1] [i_2] [i_1] [i_0];
                                var_32 = ((/* implicit */int) ((((/* implicit */long long int) 0U)) - (9223372036854775794LL)));
                                arr_47 [i_0] [i_1] [i_2] [i_2] [i_11] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4286169846106162498LL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)227))))) | (((((/* implicit */_Bool) arr_9 [i_12] [i_1] [i_2] [i_11] [i_12])) ? (7695885143471460755ULL) : (((/* implicit */unsigned long long int) var_14))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) var_0))));
    }
    for (unsigned int i_13 = 0; i_13 < 10; i_13 += 1) 
    {
        arr_50 [i_13] [i_13] = max(((-(((((-9223372036854775792LL) + (9223372036854775807LL))) << (((/* implicit */int) (unsigned char)44)))))), (((/* implicit */long long int) ((((/* implicit */int) ((6597785021708718695LL) > (arr_3 [i_13] [i_13])))) - (((((/* implicit */_Bool) -3730235749161798586LL)) ? (-1550195635) : (((/* implicit */int) (unsigned short)39607))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 1) 
        {
            var_34 *= ((/* implicit */unsigned int) ((((arr_30 [(unsigned char)5]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184))))) > (((/* implicit */long long int) (~(arr_24 [4LL] [4LL]))))));
            arr_53 [8ULL] &= ((/* implicit */long long int) arr_52 [i_13] [6LL] [i_14]);
        }
        arr_54 [i_13] = ((/* implicit */long long int) 4294967295U);
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_15 = 0; i_15 < 10; i_15 += 4) 
        {
            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (short)-29359))));
            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) var_9))));
        }
        /* vectorizable */
        for (long long int i_16 = 3; i_16 < 8; i_16 += 1) 
        {
            var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) ((short) (~(-5LL)))))));
            var_38 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_16 - 2] [i_13] [i_16 - 1])) / (((/* implicit */int) (short)12722))));
        }
    }
    for (long long int i_17 = 0; i_17 < 17; i_17 += 2) 
    {
        arr_62 [i_17] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_18))) ? (((((/* implicit */_Bool) arr_61 [i_17])) ? (6333021617408756576LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_60 [16U]))) / (var_18)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_17]))) : (((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_17]))) : (8931926862915013333ULL))))))));
        var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_60 [i_17])) : (((/* implicit */int) (unsigned char)3))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-9758)) + (2147483647))) >> (((var_0) + (5347294492411402836LL)))))) : (var_3))))))));
    }
    for (signed char i_18 = 0; i_18 < 11; i_18 += 2) 
    {
        var_40 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((arr_29 [i_18] [i_18] [i_18] [i_18] [i_18]) / (((/* implicit */int) arr_22 [i_18] [i_18] [i_18] [i_18] [i_18]))))))) ? (((/* implicit */long long int) ((((arr_5 [i_18]) + (2147483647))) >> (((arr_5 [i_18]) + (2140208733)))))) : ((~(-1LL)))));
        var_41 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3149846798683729690ULL)) ? (1085824482975250902LL) : (((/* implicit */long long int) 1393064696U))))) ? ((+(((/* implicit */int) (short)6404)))) : (((/* implicit */int) (unsigned char)232))))));
    }
    var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-1LL) / (max((2321945174708659964LL), (9035182678838561412LL)))))) ? (((/* implicit */unsigned long long int) -562099481131398653LL)) : (((((/* implicit */_Bool) max((var_8), (((/* implicit */int) var_7))))) ? (((1476445800560665757ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)22), ((unsigned char)227)))))))));
    var_43 = min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (unsigned char)255)) : ((-(((/* implicit */int) var_4))))))), (3751829129422658189LL));
}
