/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248454
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) -13)))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (var_0))))))));
            var_13 = ((int) ((unsigned long long int) arr_6 [4LL] [i_0 - 1] [i_0]));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    var_14 = ((/* implicit */unsigned char) var_8);
                    var_15 = ((/* implicit */unsigned int) ((int) 14176752909052735391ULL));
                }
                var_16 = ((/* implicit */int) min((var_16), (arr_9 [i_1] [i_1] [1])));
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_8)) + (var_1)))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -13)) ? (((/* implicit */long long int) 2)) : (-1LL)));
    }
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */short) (-(var_0)));
            arr_20 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_5] [19ULL])) ? ((+(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        }
        for (int i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_20 = ((/* implicit */signed char) ((1695761433) / (((/* implicit */int) var_2))));
                    var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (_Bool)1)))));
                }
                for (int i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (1133494343))) | ((~(((/* implicit */int) var_9))))));
                    var_23 = ((/* implicit */unsigned short) (!((_Bool)1)));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_1) + (2147483647))) >> (((var_1) + (1721796141)))))) ? ((~(var_3))) : (((/* implicit */unsigned long long int) var_10))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (var_7))))));
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_5])) / (((/* implicit */int) arr_3 [i_7])))))));
                    /* LoopSeq 4 */
                    for (int i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 1695761419))) ? (((/* implicit */int) ((unsigned short) 14176752909052735419ULL))) : (var_1)));
                        var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
                        arr_36 [i_5] [i_5] [i_8] [i_8] [i_8] [i_11] [i_12] = ((/* implicit */int) var_0);
                        var_29 = ((/* implicit */_Bool) (-(arr_29 [i_5] [i_5] [i_5] [i_5])));
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((int) 14176752909052735391ULL)))));
                    }
                    for (int i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        arr_39 [(short)14] [i_5] [(short)14] [i_8] [i_11] [i_13] [i_7] &= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_17 [i_7])))))));
                        var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41953))) + (7564588610555028493ULL)));
                    }
                    for (unsigned short i_14 = 1; i_14 < 16; i_14 += 2) 
                    {
                        arr_44 [i_5] [i_5] [i_5] [i_5] [i_5] [1LL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)3))));
                        arr_45 [i_5] [i_5] [i_7] [i_8] [i_5] [i_14] = ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (+(4269991164656816224ULL)))));
                    }
                    for (unsigned int i_15 = 2; i_15 < 15; i_15 += 3) 
                    {
                        var_32 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_7 [i_5] [i_5]) : (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-11) < (((/* implicit */int) var_2)))))) : (((unsigned long long int) arr_5 [i_8] [i_11]))));
                        arr_48 [i_5] [i_7] [i_8] [i_11] [i_5] = ((((arr_24 [i_5] [i_5]) || (((/* implicit */_Bool) 25)))) ? (((/* implicit */int) ((6301113565539940805ULL) > (4269991164656816238ULL)))) : (((/* implicit */int) ((unsigned char) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5]))));
                    }
                }
            }
            for (unsigned short i_16 = 0; i_16 < 17; i_16 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_17 = 0; i_17 < 17; i_17 += 1) 
                {
                    arr_54 [i_5] [i_7] [i_16] [i_16] [i_5] [i_17] = ((/* implicit */unsigned char) var_3);
                    var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (var_0)));
                }
                arr_55 [i_5] [i_16] = ((/* implicit */unsigned int) arr_22 [i_16] [i_5] [9ULL]);
                var_34 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned short) 14))) : (((/* implicit */int) var_9))))));
                arr_56 [i_5] [i_5] [(signed char)10] [i_5] = ((/* implicit */signed char) var_3);
                /* LoopSeq 4 */
                for (signed char i_18 = 3; i_18 < 16; i_18 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_19 = 2; i_19 < 14; i_19 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned short) ((arr_13 [11] [i_7] [i_16] [i_5] [i_19]) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))));
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((unsigned int) ((((/* implicit */_Bool) (short)-15894)) && (((/* implicit */_Bool) (unsigned short)65507)))))));
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_29 [9ULL] [i_7] [i_7] [i_7])))))))));
                    }
                    arr_62 [i_5] [i_5] [i_7] [i_16] [i_16] [i_18 + 1] = ((/* implicit */unsigned long long int) (unsigned short)50026);
                    arr_63 [i_5] [i_5] [i_16] [i_18] = ((/* implicit */unsigned char) max(((-((-(var_0))))), (((/* implicit */unsigned long long int) arr_26 [i_5] [i_5] [i_5]))));
                    arr_64 [i_5] [i_16] [i_18 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (max((0), (((/* implicit */int) (short)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned char)92)))))))) ? ((-(max((((/* implicit */unsigned long long int) var_10)), (var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_18 + 1] [i_18] [i_18] [i_18] [i_18] [i_18 - 1])))));
                    /* LoopSeq 1 */
                    for (signed char i_20 = 0; i_20 < 17; i_20 += 2) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned long long int) var_6)), (var_4))))) ? ((-(((/* implicit */int) arr_66 [i_5] [i_7] [i_16] [i_18] [i_20])))) : (((((/* implicit */int) ((signed char) var_8))) + (((/* implicit */int) ((unsigned short) 1048064)))))));
                        var_39 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) != ((-(((/* implicit */int) var_2)))))))));
                        var_40 = ((/* implicit */_Bool) ((int) arr_13 [16U] [i_7] [i_16] [i_5] [i_20]));
                    }
                }
                /* vectorizable */
                for (int i_21 = 0; i_21 < 17; i_21 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_22 = 0; i_22 < 17; i_22 += 1) 
                    {
                        var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_16] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_5] [i_5] [i_16] [i_7] [6U] [i_22] [i_16]))) : (var_3))))));
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_22] [i_5] [i_7] [i_5])) ? (((/* implicit */int) var_6)) : ((-(-1695761433)))));
                        var_43 = ((/* implicit */signed char) ((4U) / (((unsigned int) var_1))));
                        var_44 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) != (4269991164656816205ULL))))) == (((((/* implicit */_Bool) arr_27 [i_22] [i_7] [i_16] [i_7] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_47 [i_5] [14ULL] [i_5]))));
                    }
                    for (short i_23 = 0; i_23 < 17; i_23 += 1) 
                    {
                        var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) ((var_7) < ((~(11065667157005439559ULL))))))));
                        arr_75 [i_5] [i_5] [(signed char)1] [(_Bool)1] [i_23] = (((~(arr_51 [i_23]))) > (((/* implicit */int) ((var_1) < (((/* implicit */int) var_2))))));
                    }
                    var_46 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_9))))));
                }
                for (unsigned long long int i_24 = 0; i_24 < 17; i_24 += 2) 
                {
                    /* LoopSeq 3 */
                    for (int i_25 = 0; i_25 < 17; i_25 += 3) 
                    {
                        var_47 *= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_3)) ? (arr_51 [i_7]) : (((/* implicit */int) var_8))))));
                        arr_82 [i_5] [i_7] [i_16] [i_24] [i_5] [i_25] = ((/* implicit */long long int) ((short) ((var_1) > (((/* implicit */int) arr_26 [i_7] [i_24] [i_25])))));
                        var_48 = ((/* implicit */long long int) arr_29 [i_5] [i_7] [i_24] [i_25]);
                    }
                    for (unsigned long long int i_26 = 0; i_26 < 17; i_26 += 1) 
                    {
                        arr_86 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) var_3);
                        arr_87 [i_5] [i_7] [i_7] [i_7] = ((/* implicit */short) (~(((/* implicit */int) var_9))));
                    }
                    for (unsigned long long int i_27 = 0; i_27 < 17; i_27 += 1) 
                    {
                        arr_90 [i_5] = ((/* implicit */unsigned char) 8589934336ULL);
                        var_49 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)186)), (max((25), (-1695761433))))))));
                        var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_8), (var_2)))), (var_3)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_59 [i_5] [i_7] [i_16] [i_24])) * (((/* implicit */int) arr_78 [i_5] [i_5] [i_5] [i_5]))))) ? ((-(arr_13 [i_5] [(unsigned short)6] [i_16] [i_5] [i_16]))) : (var_7))) : (((/* implicit */unsigned long long int) (((-2147483647 - 1)) / (-1695761433))))));
                    }
                    var_51 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
                }
                /* vectorizable */
                for (unsigned long long int i_28 = 2; i_28 < 16; i_28 += 1) 
                {
                    arr_93 [i_5] [i_28] = ((/* implicit */int) 4269991164656816235ULL);
                    var_52 = ((/* implicit */int) var_9);
                }
            }
            var_53 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_26 [i_5] [i_7] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (11822382235112642634ULL)))));
            arr_94 [i_7] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3412784801492345952LL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned short)5969)))))) : (1695761417)));
            var_54 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (var_8))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (var_7)))))));
            var_55 = ((/* implicit */signed char) -1);
        }
        /* LoopSeq 1 */
        for (short i_29 = 0; i_29 < 17; i_29 += 1) 
        {
            arr_97 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned short) 1695761432))), (((((unsigned long long int) arr_3 [i_5])) - (((/* implicit */unsigned long long int) ((int) var_8)))))));
            var_56 = ((/* implicit */unsigned short) max((max((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) var_9)))), (var_4)));
            arr_98 [i_5] = ((int) ((int) max((var_8), (arr_35 [i_5] [i_29] [i_5] [i_5] [(unsigned short)6]))));
            var_57 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_50 [i_5] [i_29] [10LL] [i_29]), (arr_50 [i_5] [(short)4] [(short)4] [i_5])))) ? (max((arr_50 [i_29] [(unsigned char)6] [(unsigned char)6] [i_5]), (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_50 [14U] [i_29] [4] [i_29]))))));
        }
    }
    var_58 = var_11;
    var_59 = ((/* implicit */int) (~((~(((var_3) * (var_0)))))));
}
