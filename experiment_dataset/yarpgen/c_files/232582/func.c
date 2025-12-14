/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232582
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
            {
                arr_10 [11ULL] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [i_0] [(unsigned short)17] [i_1])), (((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))));
                var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((arr_1 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 17592186044400LL)))) : (max((((/* implicit */long long int) (signed char)-124)), (-17592186044388LL)))))));
            }
            for (short i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
            {
                arr_14 [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) >> ((((-(((/* implicit */int) (unsigned char)107)))) + (130)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_4 = 2; i_4 < 17; i_4 += 4) 
                {
                    var_17 = ((/* implicit */int) (~(arr_8 [i_4 + 1] [i_4 - 2] [i_4 + 2] [i_4 - 2])));
                    arr_19 [(_Bool)1] [i_1] [4ULL] = arr_18 [i_0];
                    arr_20 [i_1] [i_1] [(unsigned short)17] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_4 - 2] [i_4 + 2] [i_4 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_4 + 2] [i_4 + 2] [i_4 + 2]))));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)22415)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned short)8] [i_5] [i_4 - 2] [i_0]))) : (10721567173010522467ULL)));
                        var_19 *= ((/* implicit */unsigned char) arr_5 [i_0] [i_1]);
                    }
                    /* LoopSeq 3 */
                    for (short i_6 = 3; i_6 < 16; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (-17592186044366LL)))) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_6 - 3] [i_6] [12LL])) : (arr_23 [i_6 + 1] [i_4 + 1] [i_4] [i_4 - 2] [i_4 - 1] [i_1])));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -17592186044390LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)5))));
                        var_22 &= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) 17592186044427LL)) || (((/* implicit */_Bool) arr_12 [i_0])))));
                        arr_26 [i_1] [i_1] [(unsigned short)6] [(unsigned short)14] [i_6 - 3] = ((/* implicit */unsigned short) var_12);
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65530)) ? (((6950355999583668785ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)166))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17592186044414LL))))))));
                        var_24 = ((/* implicit */unsigned short) (signed char)-47);
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 3) /* same iter space */
                    {
                        arr_33 [i_3] [i_1] [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_29 [i_8 - 1] [i_0] [i_3] [i_4] [i_0] [i_4 - 2])));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [i_0] [i_1] [i_1] [i_4 - 2] [i_8 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_4 - 2] [i_0]))) : (3234659792530952198ULL)));
                    }
                }
                for (signed char i_9 = 1; i_9 < 17; i_9 += 2) 
                {
                    var_26 -= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [(unsigned short)8] [(short)10]))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)87))) : (((/* implicit */int) arr_37 [i_9 + 1] [i_3] [i_3] [i_0])))));
                    var_27 += ((/* implicit */unsigned long long int) min(((-(max((((/* implicit */long long int) (unsigned short)27764)), (-17592186044380LL))))), (((/* implicit */long long int) max(((unsigned char)221), ((unsigned char)152))))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 2) 
                {
                    arr_40 [i_0] [i_0] [i_1] [i_3] [i_1] [i_10] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_30 [18ULL] [i_1] [i_10 + 2] [i_10] [i_0]), (((/* implicit */unsigned short) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (int i_11 = 2; i_11 < 17; i_11 += 2) 
                    {
                        arr_43 [i_3] [i_3] [i_1] [(unsigned short)12] [i_3] [i_3] [i_3] = ((/* implicit */short) (((-(((/* implicit */int) arr_22 [i_1] [i_11 + 2] [i_11] [5U] [i_11])))) & ((((~(((/* implicit */int) var_8)))) | (((/* implicit */int) arr_28 [i_10 + 1] [16LL] [i_10 + 2] [i_10 + 1] [i_10 + 1] [i_10 + 1]))))));
                        var_28 ^= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14088822165673928907ULL)))) ? (((/* implicit */int) ((unsigned short) -325229024))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))));
                        arr_44 [i_10 + 2] [(unsigned short)6] [i_3] [i_11] [i_11 - 1] |= ((/* implicit */unsigned long long int) (_Bool)1);
                        var_29 = ((unsigned short) ((((/* implicit */unsigned long long int) -1854581201)) * (49152ULL)));
                    }
                    var_30 = ((/* implicit */unsigned short) (short)-8441);
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((unsigned char) ((unsigned short) arr_22 [i_0] [i_10] [i_10 - 1] [i_10 - 1] [i_0]))))));
                }
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 2) 
                    {
                        arr_50 [i_1] [i_1] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)32768)) && (((/* implicit */_Bool) (unsigned short)21968))));
                        arr_51 [i_1] [i_12] [i_3] [18ULL] [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_42 [i_13] [i_13] [4LL] [(unsigned short)6] [i_0] [i_0] [(unsigned char)0])) << (((((/* implicit */int) (unsigned short)65525)) - (65521))))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_22 [i_1] [i_12 - 1] [i_12] [i_12 - 1] [i_12])), (max(((unsigned char)231), ((unsigned char)93))))))));
                    }
                    for (signed char i_14 = 1; i_14 < 18; i_14 += 1) 
                    {
                        var_32 *= ((unsigned char) max((max((1682099443U), (((/* implicit */unsigned int) arr_53 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0])))), (((/* implicit */unsigned int) ((unsigned short) var_12)))));
                        var_33 = ((/* implicit */short) arr_36 [(short)0] [i_12 - 1] [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned short i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_23 [i_12 - 1] [i_12 - 1] [i_12] [i_12 - 1] [i_12 - 1] [(_Bool)1]))));
                        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((/* implicit */int) arr_11 [(unsigned short)14] [i_12 - 1] [i_12 - 1] [(unsigned short)5])) / (((/* implicit */int) (_Bool)1)))))));
                        arr_59 [i_0] [i_1] [i_3] [i_12 - 1] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_37 [(unsigned char)2] [i_12] [i_1] [i_12 - 1]))));
                        var_36 ^= ((/* implicit */short) (~(5ULL)));
                        var_37 *= ((/* implicit */long long int) ((signed char) 18446744073709551595ULL));
                    }
                    for (unsigned long long int i_16 = 4; i_16 < 18; i_16 += 2) 
                    {
                        arr_63 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)248)) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2))) > (max((12ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))))));
                        var_38 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_30 [(unsigned short)7] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12])) ? (((/* implicit */int) arr_30 [i_12] [i_12 - 1] [i_12] [i_12 - 1] [i_12])) : (((/* implicit */int) (_Bool)1))))));
                    }
                    arr_64 [i_12] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_12])) > (((/* implicit */int) arr_62 [i_1] [i_1] [i_3] [i_12] [i_1]))))), (min((arr_61 [11] [i_1] [i_1] [i_12 - 1]), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))))), (13485432839410222481ULL)));
                }
            }
            for (unsigned short i_17 = 0; i_17 < 19; i_17 += 2) 
            {
                var_39 = ((/* implicit */unsigned short) min((((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) (_Bool)1)))))), (arr_53 [(signed char)13] [i_1] [i_1] [i_1] [3LL] [i_1])));
                var_40 = ((/* implicit */short) 33ULL);
                var_41 = max(((~(((int) (unsigned char)162)))), ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)119)))))));
            }
            var_42 = ((/* implicit */unsigned short) ((((arr_46 [i_0] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))) ^ (max((min((((/* implicit */unsigned long long int) (_Bool)1)), (45ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551604ULL)) || (((/* implicit */_Bool) arr_35 [i_0] [10ULL])))))))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_18 = 0; i_18 < 19; i_18 += 2) 
        {
            var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((((_Bool)1) || (((/* implicit */_Bool) (signed char)-91)))) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) ((unsigned short) (signed char)-113)))))) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (_Bool)1)))))));
            arr_70 [i_0] [i_18] [(short)13] = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) arr_38 [i_18] [(_Bool)1] [i_0])))));
            arr_71 [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (unsigned char)10))))))));
            var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((18446744073709551613ULL), (((/* implicit */unsigned long long int) 8072799497773077011LL)))), (((/* implicit */unsigned long long int) (~(-1046068286))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned char)3] [(unsigned short)7] [i_18]))) : ((-(min((18446744073709551613ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_45 = ((/* implicit */unsigned long long int) ((7500797988878202876LL) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1566877163895430369ULL)) ? (4008437595U) : (((/* implicit */unsigned int) -1438998090)))))))));
                var_46 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)10))));
            }
            for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
            {
                var_47 = ((/* implicit */unsigned short) var_6);
                var_48 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8))) * (((arr_34 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_21 - 1] [i_19] [i_0] [(_Bool)1] [i_0])))))))));
                var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) arr_15 [i_21 - 1] [i_21 - 1] [i_19] [i_0]))));
            }
            var_50 = ((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0])), (arr_60 [i_0] [i_19] [(unsigned short)17] [i_0] [i_19] [i_19]))))));
        }
        var_51 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2627952871614807107ULL)) ? (9725304563682581619ULL) : (18446744073709551599ULL))) << (((/* implicit */int) ((_Bool) arr_69 [i_0])))));
    }
    for (unsigned char i_22 = 0; i_22 < 24; i_22 += 3) 
    {
        arr_84 [i_22] [i_22] = ((/* implicit */signed char) min((arr_83 [i_22] [i_22]), (((/* implicit */unsigned long long int) (_Bool)1))));
        arr_85 [i_22] [i_22] = ((/* implicit */_Bool) max((max((var_12), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) arr_82 [i_22])) ? (arr_83 [i_22] [i_22]) : (((/* implicit */unsigned long long int) -1635930894))))));
        var_52 = ((((/* implicit */_Bool) 1499163173)) ? (min((22ULL), (((/* implicit */unsigned long long int) (unsigned char)15)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))));
    }
    var_53 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_15))));
}
