/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48604
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_15 += ((/* implicit */unsigned short) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)152))) : (3398015934U)));
            var_16 &= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_4 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14433))) : (6390815045576440475ULL)));
        }
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_17 = 3398015938U;
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                arr_10 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)-32761))))) / (((/* implicit */int) arr_3 [i_0] [i_3 + 1]))));
                var_18 = ((/* implicit */short) ((long long int) 562949953421311ULL));
                var_19 = ((/* implicit */int) ((unsigned char) var_9));
            }
            for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_5 = 3; i_5 < 8; i_5 += 1) 
                {
                    arr_17 [i_2] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) arr_14 [i_0] [0ULL] [0ULL] [i_4] [i_5])) : (((/* implicit */int) var_9)))));
                    arr_18 [i_0] [i_2] [i_2] [i_5 + 1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_3)) : (-2588328973639697793LL)))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) 562949953421332ULL)) ? (-7516888785491052022LL) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)135)))))));
                    var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                }
                var_22 = ((/* implicit */short) (-(-2588328973639697796LL)));
                var_23 = arr_14 [i_4] [i_2] [i_2] [i_0] [i_0];
                arr_19 [i_2] = ((/* implicit */_Bool) var_4);
                arr_20 [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) (signed char)-12);
            }
            for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1)) - (16844353230309416387ULL)))) ? (((/* implicit */int) ((_Bool) var_8))) : (arr_21 [i_2])));
                var_25 = ((/* implicit */unsigned short) 562949953421316ULL);
                arr_23 [i_2] [i_2] [i_2] [i_2] = (~(((/* implicit */int) arr_6 [i_2])));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                for (signed char i_8 = 4; i_8 < 6; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_9 = 1; i_9 < 9; i_9 += 2) 
                        {
                            var_26 = ((/* implicit */short) ((arr_12 [0] [0] [i_9 - 1] [i_8 + 2]) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) arr_12 [(unsigned short)9] [i_9] [i_9 + 1] [i_8 - 3]))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_4)))) && (((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_9 - 1] [i_8 - 2] [i_8 - 1]))));
                        }
                        var_28 = ((/* implicit */unsigned short) ((signed char) -395492702));
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_8 + 1] [6ULL] [i_8 + 2] [(short)7] [i_8 + 2])) ? (arr_9 [i_8 - 2] [(short)1] [i_8] [i_8 - 2]) : (((/* implicit */unsigned long long int) var_13))));
                        arr_31 [i_0] [i_2] [i_8] [i_0] = ((/* implicit */signed char) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))) & (arr_4 [i_0]))));
                        var_30 *= ((((/* implicit */int) var_10)) << ((((-(var_4))) - (523044629U))));
                    }
                } 
            } 
            var_31 = (-((-(((/* implicit */int) (short)32760)))));
        }
        for (unsigned int i_10 = 4; i_10 < 7; i_10 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                for (unsigned char i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    for (signed char i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_13 [i_0] [i_12] [0ULL] [i_13])) != (((/* implicit */int) (unsigned char)207))))));
                            arr_44 [(short)1] [(short)1] [(short)1] [i_11] [i_13] [i_12] = (!(((/* implicit */_Bool) (+(var_13)))));
                        }
                    } 
                } 
            } 
            var_33 ^= ((((/* implicit */_Bool) (signed char)93)) ? (((((/* implicit */_Bool) (short)-6032)) ? (((/* implicit */unsigned long long int) -1LL)) : (18446726481523507200ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32761))));
            arr_45 [(unsigned short)4] [(unsigned short)4] [i_10 - 4] &= (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_41 [(unsigned short)6] [(signed char)4] [(signed char)4]))))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            var_34 += (+(((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_32 [i_0])))));
            arr_48 [i_14] = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
            var_35 = ((/* implicit */_Bool) max((var_35), ((!(((/* implicit */_Bool) ((signed char) (_Bool)1)))))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            arr_52 [i_15] [i_15] = ((/* implicit */int) arr_37 [i_15] [i_0]);
            arr_53 [i_15] = ((/* implicit */long long int) ((((int) arr_14 [i_0] [2] [i_15] [i_15] [i_15])) * (((/* implicit */int) (!(((/* implicit */_Bool) 13161766028894114091ULL)))))));
            var_36 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) (unsigned short)18888)))));
            /* LoopSeq 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_37 = ((/* implicit */unsigned char) var_2);
                arr_57 [1U] [i_15] [i_15] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [i_15] [i_16] [i_15] [i_15]))))) || (((/* implicit */_Bool) 896951371U))));
                var_38 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(short)7] [i_16])) ? (2588328973639697792LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))))))));
                arr_58 [i_15] [i_15] = ((/* implicit */unsigned char) arr_8 [i_15] [i_15] [i_15]);
            }
            for (unsigned int i_17 = 0; i_17 < 10; i_17 += 2) 
            {
                var_39 |= (~(((/* implicit */int) ((((/* implicit */_Bool) arr_54 [i_0] [i_15] [(short)1])) && (((/* implicit */_Bool) (signed char)123))))));
                var_40 = ((/* implicit */long long int) var_5);
                var_41 = ((/* implicit */int) (short)2044);
            }
        }
    }
    var_42 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((3398015946U) | (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) / (8649949184992267684ULL)));
    var_43 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 2 */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_19 = 0; i_19 < 11; i_19 += 1) 
        {
            var_44 = ((/* implicit */_Bool) (unsigned char)122);
            var_45 = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) var_11)))));
            var_46 = ((/* implicit */short) var_4);
            var_47 ^= ((/* implicit */unsigned short) (!((_Bool)1)));
        }
        for (signed char i_20 = 3; i_20 < 10; i_20 += 1) 
        {
            var_48 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((896951353U), (((/* implicit */unsigned int) (_Bool)1))))), (0ULL)));
            var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) max(((short)-32413), (((/* implicit */short) (signed char)31))))), ((-(2588328973639697788LL)))))) ? (((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_18] [i_20 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)81))))))));
        }
        for (short i_21 = 0; i_21 < 11; i_21 += 3) 
        {
            var_50 += ((/* implicit */short) (+(((/* implicit */int) var_11))));
            var_51 = ((/* implicit */_Bool) max((var_51), ((!(((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) 896951362U))))))))));
            var_52 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) arr_70 [i_21] [i_21] [i_21]))), (((((/* implicit */_Bool) 6605201218050574107LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))))))));
            var_53 = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((var_9), ((!(((/* implicit */_Bool) arr_65 [i_21] [i_21] [(signed char)5]))))))), (((long long int) ((((/* implicit */int) arr_66 [i_18] [i_21] [i_21])) / (((/* implicit */int) (unsigned short)45578)))))));
            arr_72 [i_21] [i_18] [i_21] = ((/* implicit */signed char) 1135164282U);
        }
        var_54 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned int) (~((+(((/* implicit */int) var_9)))))))));
        arr_73 [i_18] = ((/* implicit */unsigned long long int) var_2);
    }
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_23 = 0; i_23 < 11; i_23 += 3) 
        {
            var_55 ^= (-(((/* implicit */int) var_12)));
            var_56 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) var_7)))));
            var_57 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
            arr_79 [i_23] = ((/* implicit */short) 1906772119753925316LL);
        }
        for (signed char i_24 = 0; i_24 < 11; i_24 += 3) 
        {
            var_58 = (!(((/* implicit */_Bool) ((((/* implicit */int) ((short) (_Bool)1))) / (((/* implicit */int) (signed char)-12))))));
            arr_82 [i_22] [5ULL] = ((/* implicit */short) min((((/* implicit */int) (_Bool)0)), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)15)))))))));
            arr_83 [i_24] = ((/* implicit */short) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_62 [i_22]))))))), (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_64 [i_22] [(unsigned short)0] [(unsigned short)2]))))))));
        }
        var_59 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (((_Bool)1) ? (1229534443) : (((/* implicit */int) (short)32767)))))) ? (max((((/* implicit */long long int) ((var_14) != (arr_74 [i_22] [3ULL])))), (-141346461663484473LL))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_71 [i_22]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_69 [(short)3] [i_22])))))))))));
    }
    var_60 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((long long int) (_Bool)1))))) <= (18446181123756130332ULL)));
}
