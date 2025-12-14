/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197758
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
    var_10 = ((/* implicit */unsigned char) var_1);
    var_11 ^= (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)217))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((arr_1 [i_0] [i_0]) < (arr_1 [i_0] [i_0]))))));
        var_13 = ((/* implicit */unsigned char) ((long long int) var_3));
        var_14 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        /* LoopSeq 4 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) /* same iter space */
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (-(arr_1 [i_0] [i_1])));
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((long long int) (unsigned short)58328))) | (var_1)));
        }
        for (long long int i_2 = 1; i_2 < 18; i_2 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */short) arr_0 [i_0]);
            var_17 = ((/* implicit */short) (~(arr_3 [i_2 - 1])));
        }
        for (long long int i_3 = 1; i_3 < 18; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                arr_17 [i_0] [i_3] [i_4] = ((/* implicit */_Bool) (-(arr_0 [i_0])));
                var_18 ^= ((/* implicit */unsigned long long int) arr_14 [i_0] [i_3]);
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_12 [i_4] [i_3 - 1] [i_0])) : (((/* implicit */int) var_5))))) ? (arr_16 [i_0]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_0] [i_3] [i_4])))))));
                /* LoopSeq 2 */
                for (unsigned short i_5 = 2; i_5 < 18; i_5 += 4) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */int) 18446744073709551615ULL);
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_5 + 1] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        var_22 *= ((/* implicit */unsigned long long int) var_2);
                        arr_22 [i_0] [i_3] [i_3] [i_0] [i_5 + 1] [i_0] [i_3] = ((/* implicit */unsigned long long int) arr_11 [i_5 + 1] [i_5 - 1]);
                    }
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned long long int) arr_2 [i_3 + 1]);
                        var_24 ^= ((/* implicit */unsigned char) ((((6910098495421845991LL) << (((((/* implicit */int) arr_24 [i_7] [i_0] [i_0])) - (58))))) <= (((long long int) 6910098495421845991LL))));
                        arr_25 [i_7] [i_4] [i_4] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_3 + 1])) && (((/* implicit */_Bool) arr_0 [i_3 + 1]))));
                        var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2946688852249999197ULL)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) > (arr_4 [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3]))) < (2637588209U))))));
                    }
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
                    {
                        var_26 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-92))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (var_0)));
                        arr_28 [i_8] [i_0] [i_4] [i_4] [i_3] [i_8] = ((((/* implicit */_Bool) arr_23 [i_5 - 2] [i_0] [i_4] [i_4] [i_3 + 1])) ? (((/* implicit */unsigned long long int) 6910098495421845975LL)) : (arr_23 [i_5 - 1] [i_3] [i_4] [i_5 + 1] [i_3 + 1]));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (arr_23 [i_5 + 1] [i_3] [i_5 + 1] [i_3 - 1] [i_8]) : (arr_23 [i_5 - 1] [i_3] [i_4] [i_3 - 1] [i_8])));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_24 [i_0] [i_4] [i_4]))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2)))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */short) var_5);
                        arr_33 [i_0] [i_3] [i_9] [i_5] [i_0] = ((/* implicit */unsigned char) var_6);
                    }
                    var_31 *= ((/* implicit */unsigned char) (-(arr_14 [i_3 + 1] [i_3 + 1])));
                    arr_34 [i_0] [i_5] = var_1;
                    var_32 = ((((/* implicit */_Bool) ((arr_19 [i_0] [i_0] [i_4] [i_5]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_3 + 1] [i_4]))) : (arr_3 [i_3 + 1]));
                }
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    var_33 = ((/* implicit */unsigned char) arr_23 [i_0] [i_3] [i_4] [i_3] [i_0]);
                    arr_39 [i_3] [i_4] = ((/* implicit */unsigned long long int) (~(-5205086700652078537LL)));
                    var_34 = var_4;
                }
                arr_40 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 6910098495421845991LL);
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                var_35 *= ((/* implicit */unsigned char) ((long long int) var_5));
                var_36 = (-(arr_0 [i_3 - 1]));
                arr_44 [i_0] [i_11] [i_11] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2146435072U)) && (((/* implicit */_Bool) (signed char)111))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                var_37 = arr_3 [i_3];
                /* LoopSeq 1 */
                for (signed char i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    var_38 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
                    var_39 = ((/* implicit */unsigned long long int) arr_37 [i_12] [i_12] [i_0] [i_3] [i_3] [i_0]);
                    /* LoopSeq 3 */
                    for (unsigned char i_14 = 0; i_14 < 19; i_14 += 4) 
                    {
                        var_40 = ((/* implicit */int) ((((-224558523431938253LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) ? (var_3) : (((/* implicit */unsigned long long int) -3670418763916458067LL))));
                        arr_55 [i_0] [i_3] [i_12] [i_12] [i_14] = ((/* implicit */unsigned char) (-((-(2148532224U)))));
                        arr_56 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_5 [i_14] [i_0]);
                        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_3 [i_0]))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        var_42 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_0 [i_15]))))));
                        var_43 += ((/* implicit */short) ((arr_23 [i_3 - 1] [i_3] [i_3 + 1] [i_3] [i_3]) >= (arr_23 [i_0] [i_3] [i_12] [i_0] [i_15])));
                        var_44 = ((/* implicit */unsigned char) min((var_44), (arr_38 [i_0] [i_3 - 1] [i_12] [i_13] [i_13])));
                        var_45 = ((/* implicit */short) (-(5205086700652078536LL)));
                    }
                    for (unsigned char i_16 = 0; i_16 < 19; i_16 += 3) 
                    {
                        arr_61 [i_0] [i_16] [i_12] [i_13] [i_16] [i_0] = ((/* implicit */int) arr_8 [i_3 - 1] [i_12]);
                        arr_62 [i_16] = ((/* implicit */unsigned char) ((_Bool) var_5));
                    }
                }
                /* LoopSeq 4 */
                for (unsigned char i_17 = 3; i_17 < 17; i_17 += 1) 
                {
                    var_46 = ((/* implicit */short) arr_36 [i_0]);
                    arr_65 [i_17] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_19 [i_17] [i_17 - 1] [i_17] [i_17])) > (var_3)));
                    /* LoopSeq 4 */
                    for (unsigned short i_18 = 2; i_18 < 17; i_18 += 4) /* same iter space */
                    {
                        var_47 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8823111046499509735ULL)) || (((/* implicit */_Bool) arr_14 [i_3 - 1] [i_3 + 1]))));
                        var_48 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_0] [i_0]))));
                    }
                    for (unsigned short i_19 = 2; i_19 < 17; i_19 += 4) /* same iter space */
                    {
                        arr_70 [i_0] [i_17] [i_12] [i_12] [i_17] = ((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0]);
                        arr_71 [i_19] [i_17] [i_12] [i_17] [i_0] = ((/* implicit */_Bool) var_6);
                        arr_72 [i_0] [i_17] [i_0] = ((/* implicit */unsigned long long int) var_5);
                    }
                    for (long long int i_20 = 0; i_20 < 19; i_20 += 2) 
                    {
                        var_49 ^= ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) arr_42 [i_0])))));
                        arr_75 [i_0] [i_3] [i_12] [i_17] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (arr_45 [i_0]) : (arr_45 [i_20])));
                        arr_76 [i_17] [i_3] [i_12] [i_17] = ((((arr_8 [i_17] [i_3]) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) arr_42 [i_17 - 3])) : (((/* implicit */int) arr_66 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        arr_77 [i_0] [i_20] [i_12] [i_12] [i_20] [i_17] = ((/* implicit */short) var_3);
                    }
                    for (unsigned char i_21 = 2; i_21 < 18; i_21 += 2) 
                    {
                        var_50 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
                        arr_80 [i_0] [i_3] [i_12] [i_17] [i_21] &= ((/* implicit */short) arr_24 [i_0] [i_12] [i_21]);
                        var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) var_1))));
                    }
                }
                for (unsigned long long int i_22 = 0; i_22 < 19; i_22 += 2) 
                {
                    var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) < (arr_18 [i_0] [i_3 + 1]))))));
                    arr_84 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_9)) * (arr_0 [i_0])));
                }
                for (unsigned long long int i_23 = 0; i_23 < 19; i_23 += 2) 
                {
                    var_53 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_30 [i_0] [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 1]))));
                    var_54 &= ((/* implicit */short) ((((((/* implicit */int) arr_43 [i_0] [i_3] [i_0] [i_3 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_43 [i_0] [i_3] [i_3] [i_3 - 1])) + (125))) - (18)))));
                }
                for (long long int i_24 = 2; i_24 < 17; i_24 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_25 = 1; i_25 < 17; i_25 += 4) 
                    {
                        var_55 ^= ((/* implicit */int) var_5);
                        arr_96 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_46 [i_24 + 1] [i_25 - 1] [i_3 - 1] [i_24])) ? ((-(((/* implicit */int) arr_95 [i_12] [i_12] [i_12] [i_12] [i_12])))) : (((((/* implicit */int) (unsigned char)199)) << (((/* implicit */int) var_7))))));
                        var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_89 [i_3 + 1] [i_3] [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)212))));
                    }
                    for (unsigned char i_26 = 0; i_26 < 19; i_26 += 2) 
                    {
                        var_57 = ((/* implicit */signed char) ((((/* implicit */int) arr_66 [i_0] [i_3 + 1] [i_12] [i_12] [i_12] [i_24] [i_26])) ^ (((/* implicit */int) var_4))));
                        arr_99 [i_26] [i_3] [i_12] [i_12] [i_26] [i_12] [i_12] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_68 [i_0] [i_3] [i_24 - 1] [i_26] [i_0] [i_24] [i_24]))));
                    }
                    var_58 = ((/* implicit */unsigned long long int) var_0);
                }
                arr_100 [i_0] [i_3] [i_12] [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) arr_87 [i_0] [i_3 + 1] [i_3]))));
            }
            arr_101 [i_3] [i_3] = arr_11 [i_3] [i_0];
            var_59 = ((/* implicit */unsigned char) (-(arr_91 [i_0] [i_3 + 1] [i_3] [i_0] [i_3 - 1])));
            var_60 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (var_1))) ? (-5205086700652078541LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_0] [i_3] [i_0] [i_0] [i_0] [i_3] [i_3])) ? (arr_14 [i_0] [i_3]) : (var_9))))));
        }
        for (int i_27 = 0; i_27 < 19; i_27 += 4) 
        {
            var_61 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)255))));
            arr_105 [i_27] [i_0] [i_0] = 5205086700652078537LL;
            var_62 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_0] [i_0])) ? (arr_35 [i_0] [i_0] [i_0] [i_27] [i_27] [i_27]) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_27])))));
            var_63 = ((/* implicit */unsigned long long int) max((var_63), ((+(8785127267364638618ULL)))));
        }
        var_64 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)76)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    /* vectorizable */
    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
    {
        var_65 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_81 [i_28] [i_28] [i_28] [i_28])) && (((/* implicit */_Bool) arr_73 [i_28] [i_28] [i_28] [(unsigned char)0] [i_28]))))));
        arr_108 [i_28] [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_92 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28] [i_28])) / (((/* implicit */int) arr_92 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28] [i_28]))));
        arr_109 [i_28] |= ((/* implicit */_Bool) ((unsigned char) arr_4 [i_28]));
        var_66 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_87 [i_28] [i_28] [i_28])) ? (arr_90 [i_28] [i_28] [i_28] [i_28]) : (((/* implicit */unsigned long long int) var_9))));
        var_67 |= ((/* implicit */unsigned long long int) arr_4 [i_28]);
    }
}
