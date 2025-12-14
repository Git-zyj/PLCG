/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242981
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
    var_18 = var_10;
    var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) -7356604216278545484LL)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((signed char) var_3))))), (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) var_7)))), ((!(((/* implicit */_Bool) min(((unsigned char)133), ((unsigned char)123))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */_Bool) var_2);
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-53)) + (((/* implicit */int) (signed char)51)))))));
        }
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (unsigned int i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) var_13);
                    var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_3] [i_2])) && (((/* implicit */_Bool) (unsigned char)142))))))));
                    var_22 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) (signed char)58)) || (((/* implicit */_Bool) arr_4 [i_2] [i_3])))) ? (((((/* implicit */_Bool) -1802688442)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (-7188716197789167900LL))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)138)), (arr_8 [i_3] [i_0])))))), (((/* implicit */long long int) ((unsigned char) (unsigned char)133)))));
                }
            } 
        } 
        var_23 = max((((/* implicit */unsigned long long int) (!(((((/* implicit */int) var_0)) >= (((/* implicit */int) (signed char)25))))))), (18446744073709551609ULL));
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            var_24 += ((/* implicit */signed char) 18446744073709551615ULL);
            arr_13 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-1894058604)))))));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 19; i_5 += 3) 
        {
            arr_16 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133))) : (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-26329)) != (((/* implicit */int) (signed char)-60))))))));
            arr_17 [i_5] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_5 + 3] [i_5 + 2]))));
            arr_18 [i_0] [i_0] [16ULL] = var_13;
            /* LoopSeq 1 */
            for (signed char i_6 = 1; i_6 < 20; i_6 += 1) 
            {
                var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)1)))));
                arr_21 [i_0] [i_5 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
            }
            /* LoopNest 2 */
            for (long long int i_7 = 2; i_7 < 21; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((unsigned long long int) arr_14 [i_8] [i_5 - 1] [i_0])) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)148)))))))));
                            var_27 = (~(((((/* implicit */_Bool) (unsigned char)164)) ? (-7080610434247944138LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7 + 2] [i_7 + 2]))))));
                        }
                        arr_31 [2ULL] [i_5] [i_7 + 1] [i_7] [(signed char)4] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) : (arr_3 [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))));
                        var_28 += ((/* implicit */short) (unsigned char)118);
                    }
                } 
            } 
        }
        for (int i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            var_29 = ((/* implicit */short) (unsigned char)132);
            arr_35 [i_10] [(_Bool)1] [i_10] = ((min((((/* implicit */unsigned long long int) (unsigned char)0)), (((arr_15 [i_10] [i_0]) << (((-446713142) + (446713159))))))) & (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)0)))) ? ((+(0LL))) : (((/* implicit */long long int) var_8))))));
            arr_36 [i_0] [i_10] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)21181))))), (arr_22 [i_0] [i_10] [i_10] [i_10]))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) min(((signed char)0), (arr_27 [i_0] [i_10] [i_10])))), (arr_29 [i_0] [i_0] [i_0] [i_10]))))));
        }
    }
    /* LoopNest 2 */
    for (signed char i_11 = 1; i_11 < 19; i_11 += 2) 
    {
        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 2) 
        {
            {
                arr_44 [i_12] [i_11] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_37 [i_11 + 2])) ? (max((((/* implicit */unsigned long long int) (unsigned char)123)), (18446744073709551614ULL))) : (18446744073709551615ULL))), (var_7)));
                arr_45 [i_11] [i_12] [i_11] = ((/* implicit */long long int) arr_10 [i_12]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_13 = 4; i_13 < 20; i_13 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        arr_53 [i_11] [i_11] [i_11] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) arr_37 [i_12]))))) ? (((/* implicit */int) arr_24 [i_11] [i_11] [i_13] [i_11])) : ((~(((/* implicit */int) var_10))))));
                        var_30 = ((/* implicit */signed char) (unsigned char)231);
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 1; i_15 < 19; i_15 += 2) 
                        {
                            arr_58 [i_11] [i_15] [i_13 + 1] [i_14] [i_15 - 1] = ((/* implicit */unsigned long long int) (unsigned char)199);
                            arr_59 [i_12] [i_13] [i_15] = ((((5ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133))))) * (((/* implicit */unsigned long long int) ((-8659430389244963993LL) / (((/* implicit */long long int) 4294967295U))))));
                            var_31 |= ((/* implicit */signed char) arr_32 [i_13 - 3]);
                        }
                    }
                    for (long long int i_16 = 1; i_16 < 19; i_16 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (unsigned short)0))));
                            var_33 = (-(arr_25 [i_11] [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_17] [i_16 - 1]));
                            arr_67 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_13] [i_13 - 2] [i_16 + 2] [i_17] = ((/* implicit */long long int) ((((/* implicit */int) arr_63 [i_13 - 2] [14] [(unsigned char)12] [i_13 - 2] [i_13 - 2] [i_12])) >> (((((((/* implicit */_Bool) (unsigned char)148)) ? (8659430389244963992LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))))) - (8659430389244963967LL)))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) arr_46 [i_13 - 1]))));
                            arr_72 [i_11 + 2] [i_11] [i_12] [(signed char)13] [i_13] [i_11 + 2] [i_18] |= ((/* implicit */long long int) (((+(var_8))) >> (((((((/* implicit */_Bool) 0)) ? (arr_69 [i_11] [i_12] [i_13] [i_13 - 4] [11ULL] [i_16 - 1] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))))) - (101U)))));
                            arr_73 [i_11] [i_12] [i_11] [19] [i_16 + 1] [i_18] = ((/* implicit */signed char) (-((+(((/* implicit */int) var_11))))));
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((((/* implicit */_Bool) var_13)) ? (723666771270094059ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_11 - 1] [i_13 - 1])))))));
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_11 - 1] [i_11] [i_11 + 1])) == (((/* implicit */int) (unsigned char)17))));
                        }
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)114))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_11] [i_11 + 1] [i_11] [i_11] [i_11])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-1)))))));
                    }
                    for (long long int i_19 = 1; i_19 < 19; i_19 += 1) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned char) (_Bool)1);
                        arr_76 [i_11] [i_12] [i_13] [i_19 + 1] = ((/* implicit */unsigned short) (~(12155403416941978006ULL)));
                    }
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_64 [i_13 - 1] [i_11] [(short)11] [(short)11] [(short)11])) : (((/* implicit */int) arr_40 [i_11 + 2] [i_11 + 1]))));
                    var_40 ^= ((/* implicit */unsigned char) (((+(arr_8 [22LL] [i_11]))) - (((/* implicit */unsigned int) (-(((/* implicit */int) arr_26 [i_11] [i_11 + 2] [i_11 + 2] [i_11])))))));
                    var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) -3955366368445943813LL)) ? (arr_69 [i_11] [i_11] [i_11 + 1] [i_12] [(unsigned char)3] [i_12] [(unsigned char)3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))));
                }
                for (short i_20 = 1; i_20 < 20; i_20 += 2) /* same iter space */
                {
                    var_42 = ((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_11 + 1] [i_12] [i_20 + 1]))) - (var_4)))));
                    arr_80 [i_11] [i_20 + 1] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) -168168453)), (2305807824841605120ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_11] [i_12] [i_12] [i_11]))) | (var_8)))) ? ((~(((/* implicit */int) (unsigned short)65534)))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)16726)) : (((/* implicit */int) var_1)))))))));
                    var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) min((arr_39 [i_20 + 1]), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)123))) < (arr_11 [i_11 - 1] [i_11 - 1] [i_11 - 1])))))))));
                    arr_81 [i_11] [i_12] [i_12] [i_11] = ((/* implicit */unsigned long long int) arr_23 [i_11 - 1] [i_11 - 1] [i_20 - 1]);
                }
                for (short i_21 = 1; i_21 < 20; i_21 += 2) /* same iter space */
                {
                    arr_84 [i_12] &= ((/* implicit */unsigned long long int) arr_56 [i_11 + 2] [i_11 - 1] [i_12] [i_21 + 1] [i_21 + 1]);
                    /* LoopNest 2 */
                    for (long long int i_22 = 2; i_22 < 20; i_22 += 2) 
                    {
                        for (long long int i_23 = 0; i_23 < 21; i_23 += 4) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned short) min((((/* implicit */long long int) arr_85 [i_23] [i_21] [i_11 + 2] [i_11 + 2])), (var_4)))));
                                arr_90 [i_11] [i_21] [i_11 + 2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_42 [i_21 + 1] [i_11 + 1]))));
                                arr_91 [3LL] [i_21] [i_21] [i_21] [i_11] = ((/* implicit */_Bool) ((((525295549U) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)183)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((unsigned char)86), (var_17))))))) : (((((/* implicit */_Bool) ((2244410052368170040LL) % (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))) ? (min((((/* implicit */unsigned long long int) 8659430389244963992LL)), (4494803534348288ULL))) : (6994563620185839882ULL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_24 = 0; i_24 < 21; i_24 += 4) 
                    {
                        for (unsigned char i_25 = 1; i_25 < 19; i_25 += 2) 
                        {
                            {
                                var_45 = ((/* implicit */_Bool) ((max(((-(18239311749514536170ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [(signed char)14] [i_12] [(signed char)14] [i_12])) ? (((/* implicit */int) arr_46 [i_11])) : (((/* implicit */int) (unsigned char)148))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_11] [i_12] [i_12] [i_12] [i_11]))) : (0ULL))))))));
                                arr_96 [i_21] [i_12] [i_21] [i_24] [i_21] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))), (((((/* implicit */_Bool) 0ULL)) ? (16ULL) : (18446744073709551615ULL)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_46 = ((/* implicit */short) min((((/* implicit */unsigned int) ((short) var_16))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-4)), ((unsigned char)0)))) ? ((~(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))));
}
