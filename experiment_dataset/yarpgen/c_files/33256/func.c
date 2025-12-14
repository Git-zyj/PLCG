/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33256
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                var_17 = ((/* implicit */short) (((_Bool)1) ? ((+(max((arr_0 [i_2]), (((/* implicit */unsigned long long int) var_1)))))) : (min((((((/* implicit */_Bool) 3242924325U)) ? (var_10) : (3060807456033950423ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))))))));
                arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) max((((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_0])) ? (var_4) : (arr_6 [(_Bool)1] [i_1] [(_Bool)1]))))))), (((((/* implicit */_Bool) max((((/* implicit */signed char) var_1)), (var_12)))) ? (min((-8843975596467576220LL), (((/* implicit */long long int) 3242924314U)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_12)), (arr_5 [i_0] [i_2]))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1ULL)) ? (arr_12 [i_1] [i_0] [i_1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0])))));
                        var_19 &= ((/* implicit */unsigned char) (_Bool)1);
                        arr_16 [i_4] [10LL] [i_0] [i_2] [i_0] [i_0] [i_0] = arr_11 [4ULL] [i_2] [10LL] [i_4];
                        var_20 = ((/* implicit */long long int) (signed char)84);
                    }
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_13 [8] [8] [i_3] [8] [i_5] [i_3]))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))))));
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = var_5;
                    }
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_0])) ? (((/* implicit */int) arr_24 [i_3])) : (((/* implicit */int) arr_24 [i_6]))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_10))) % (((/* implicit */int) arr_7 [i_0]))));
                        var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16382))) == (((((/* implicit */_Bool) -5601962311981446832LL)) ? (arr_20 [i_6] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                    }
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_7))));
                    arr_26 [i_0] [13ULL] [i_1] [13] [i_3] = ((/* implicit */long long int) var_11);
                    var_26 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */int) ((_Bool) arr_2 [i_0] [i_1])))));
                }
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    var_27 *= ((/* implicit */_Bool) max(((-(arr_14 [i_2] [14LL] [i_1] [i_2] [i_7] [4U]))), (arr_5 [i_2] [i_2])));
                    var_28 = ((/* implicit */short) max((((arr_6 [i_1] [12ULL] [12ULL]) <= (arr_6 [i_2] [i_1] [i_0]))), ((!(((/* implicit */_Bool) -2603562872184484612LL))))));
                }
                for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) max((((((unsigned int) var_0)) << (((((((/* implicit */_Bool) 3189986142U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))) : (var_14))) - (18446744073709551580ULL))))), (((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) var_2))))))));
                        var_30 ^= ((/* implicit */_Bool) (-(var_4)));
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_28 [8ULL] [i_1] [(_Bool)1] [8ULL]))) ? (min((arr_28 [i_0] [(_Bool)1] [i_2] [i_0]), (((/* implicit */long long int) var_12)))) : (((((/* implicit */_Bool) arr_28 [i_8] [i_1] [i_1] [i_8])) ? (arr_28 [(unsigned short)7] [i_8] [i_0] [i_0]) : (arr_28 [i_9] [i_8] [i_0] [i_0])))));
                        arr_35 [i_9] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_10 [9ULL] [i_0] [i_1] [i_2] [i_1] [11LL]))) + (((/* implicit */int) (short)28915))))) ? (6792983498285632999LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) arr_30 [i_0] [i_2] [(signed char)7]);
                        var_33 = ((/* implicit */signed char) ((((9007199252643840LL) % (((/* implicit */long long int) 268402688U)))) >> (((/* implicit */int) ((((/* implicit */int) (signed char)8)) <= (min((-268435456), (((/* implicit */int) (signed char)-85)))))))));
                        var_34 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned char) ((1ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_1] [i_1] [i_1]))))))), (arr_13 [i_0] [i_0] [1] [1] [(signed char)5] [i_10])));
                        var_35 = ((/* implicit */unsigned char) arr_3 [i_0] [i_1]);
                        var_36 *= ((/* implicit */signed char) arr_20 [i_10] [i_2] [i_0]);
                    }
                    var_37 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) var_1))) + (var_10)))) ? (((1453775051544982596LL) / (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_0))));
                    var_38 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) arr_3 [i_1] [i_0])), (18446744073709551611ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1052042970U)) < (arr_34 [i_8] [i_2] [i_2] [i_1] [i_0])))))))), ((+((+(var_7)))))));
                }
                for (long long int i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    arr_40 [i_11] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [9LL] [9LL])) ? (((/* implicit */int) (signed char)-71)) : (var_4)))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_1] [i_2] [12]))) * (var_8)))))), (((((/* implicit */unsigned long long int) ((int) arr_33 [i_0] [i_1]))) % (arr_34 [i_0] [i_1] [i_2] [(unsigned char)5] [15])))));
                    var_39 = (signed char)-56;
                }
            }
            for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                arr_45 [i_0] [i_0] [i_12] = ((/* implicit */signed char) var_14);
                arr_46 [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_12]);
                arr_47 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((3067945641U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [(unsigned short)15] [i_1]))))))));
            }
            for (signed char i_13 = 0; i_13 < 17; i_13 += 3) /* same iter space */
            {
                arr_50 [i_0] [i_1] [i_13] = arr_34 [i_0] [i_0] [i_0] [i_1] [i_13];
                arr_51 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_9);
                /* LoopSeq 2 */
                for (unsigned int i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    var_40 ^= ((/* implicit */unsigned int) ((((var_15) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9)))))) > (((/* implicit */unsigned long long int) arr_28 [i_14] [i_13] [(unsigned char)2] [i_0]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 3) 
                    {
                        arr_57 [(signed char)15] [i_14] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_53 [i_0] [i_1] [11LL] [i_15]);
                        var_41 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10487090922791309886ULL)) ? (arr_5 [(short)4] [(short)4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [(short)12] [i_0] [(_Bool)1] [i_0] [i_0])))))) ? (arr_13 [i_0] [i_1] [i_13] [(signed char)11] [i_15] [i_1]) : (((/* implicit */unsigned long long int) arr_1 [i_1] [i_15]))));
                    }
                    for (short i_16 = 0; i_16 < 17; i_16 += 4) 
                    {
                        var_42 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_28 [i_16] [i_14] [i_13] [i_0])), (min((((/* implicit */unsigned long long int) arr_23 [11LL] [i_0])), (arr_34 [i_0] [i_0] [i_0] [i_0] [i_16]))))), (((/* implicit */unsigned long long int) (+(((int) arr_22 [i_0] [i_0] [(unsigned char)10] [i_13] [i_0] [i_16])))))));
                        var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) ((min((arr_59 [i_16] [i_1] [i_13] [i_14] [i_14]), (min((((/* implicit */unsigned long long int) arr_27 [i_13])), (var_7))))) & (11280745825621482335ULL))))));
                        var_44 += ((/* implicit */unsigned int) var_5);
                    }
                }
                for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 1) 
                {
                    var_45 *= ((/* implicit */unsigned long long int) arr_27 [i_13]);
                    var_46 = ((/* implicit */unsigned int) arr_48 [i_0] [i_1] [i_13] [i_17]);
                    var_47 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_13] [i_17] [i_17] [i_0])))) ? (((((/* implicit */_Bool) arr_22 [5ULL] [7LL] [i_0] [(short)7] [i_13] [i_17])) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) arr_24 [i_0])))) : ((~(((/* implicit */int) (short)-23085))))));
                    var_48 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned long long int) var_3))))) ? (max((36028728299487232ULL), (((/* implicit */unsigned long long int) arr_14 [i_0] [16] [i_13] [i_17] [7LL] [i_17])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3502)))))) ? (max((max((var_10), (var_7))), ((-(arr_34 [i_17] [i_17] [i_13] [i_1] [i_0]))))) : (var_15));
                }
                /* LoopSeq 1 */
                for (unsigned short i_18 = 0; i_18 < 17; i_18 += 2) 
                {
                    arr_67 [i_0] [i_1] [i_1] = ((/* implicit */int) arr_29 [i_0] [15] [i_0] [i_0]);
                    var_49 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((int) (unsigned char)65))) && (((arr_49 [i_0] [i_1] [i_0]) >= (((/* implicit */unsigned long long int) -4857406959234206413LL)))))));
                }
            }
            /* vectorizable */
            for (signed char i_19 = 0; i_19 < 17; i_19 += 3) /* same iter space */
            {
                var_50 *= ((/* implicit */signed char) (+(0ULL)));
                /* LoopSeq 3 */
                for (unsigned int i_20 = 0; i_20 < 17; i_20 += 3) 
                {
                    arr_74 [(short)1] [(short)1] [i_0] [(_Bool)1] [i_0] = ((/* implicit */short) (((_Bool)1) ? (arr_53 [i_0] [i_20] [i_20] [i_20]) : (var_13)));
                    var_51 = (i_0 % 2 == 0) ? (((arr_12 [7U] [i_0] [i_19] [i_19]) << (((arr_12 [i_0] [i_0] [i_0] [i_0]) - (3431286417U))))) : (((arr_12 [7U] [i_0] [i_19] [i_19]) << (((((arr_12 [i_0] [i_0] [i_0] [i_0]) - (3431286417U))) - (3730032732U)))));
                    var_52 = arr_5 [i_0] [i_20];
                }
                for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 3) /* same iter space */
                {
                    var_53 = var_13;
                    var_54 = ((/* implicit */unsigned int) ((int) arr_10 [1ULL] [i_1] [i_19] [i_1] [0LL] [8]));
                }
                for (unsigned long long int i_22 = 0; i_22 < 17; i_22 += 3) /* same iter space */
                {
                    var_55 = ((/* implicit */unsigned long long int) arr_70 [i_22] [i_1] [i_1]);
                    var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_44 [(signed char)15] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-73)))));
                }
                var_57 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_48 [i_0] [9] [i_19] [i_19]))));
            }
            var_58 = ((((/* implicit */_Bool) var_9)) ? (arr_44 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_15))) || (((/* implicit */_Bool) var_5)))))));
            var_59 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) arr_70 [i_0] [i_0] [i_0])) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-110)))))))));
        }
        for (unsigned char i_23 = 0; i_23 < 17; i_23 += 4) 
        {
            var_60 = ((/* implicit */unsigned char) var_4);
            var_61 = ((/* implicit */unsigned char) ((var_1) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0]))))) + ((+(((/* implicit */int) (_Bool)1))))))) : (min((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) (unsigned char)128))))));
            var_62 *= ((/* implicit */int) ((max((arr_69 [i_0] [i_23] [7LL] [i_0]), (arr_69 [i_0] [i_23] [(short)4] [i_23]))) <= (var_4)));
        }
        var_63 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1602861929U)) ? (11537230638002029632ULL) : (((/* implicit */unsigned long long int) 477927705))));
        var_64 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_65 [i_0] [i_0] [i_0] [i_0]) : (arr_65 [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-95)), (var_13)))) ? (((/* implicit */unsigned long long int) var_4)) : (arr_63 [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    for (signed char i_24 = 0; i_24 < 25; i_24 += 1) 
    {
        var_65 += ((/* implicit */short) ((unsigned long long int) max((((((/* implicit */_Bool) var_10)) ? (var_6) : (var_7))), (max((97614249068898872ULL), (((/* implicit */unsigned long long int) arr_84 [i_24])))))));
        var_66 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */long long int) ((arr_85 [i_24] [i_24]) ? (((/* implicit */int) arr_85 [i_24] [i_24])) : (((/* implicit */int) arr_84 [i_24]))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_85 [i_24] [i_24]))) : (var_3)))));
    }
    var_67 = ((/* implicit */unsigned short) var_4);
    var_68 = ((max((((((/* implicit */_Bool) 11280745825621482332ULL)) ? (((/* implicit */unsigned long long int) var_4)) : (var_7))), (var_14))) != (((((/* implicit */_Bool) 3079974700U)) ? (max((((/* implicit */unsigned long long int) var_5)), (var_15))) : (var_15))));
}
