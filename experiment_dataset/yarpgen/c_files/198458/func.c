/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198458
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
    var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (_Bool)0)), ((+(min((((/* implicit */unsigned long long int) var_9)), (var_7)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_2] [(unsigned char)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((int) -1604818030)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (arr_7 [(signed char)13] [(signed char)13] [17] [17])))))))) : (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned long long int) var_11)) : ((~(var_7)))))));
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) (_Bool)1)))));
                    arr_10 [(signed char)2] [i_0] [(unsigned char)6] [i_2] = ((/* implicit */unsigned char) (~(arr_3 [18LL] [i_1] [i_1])));
                    arr_11 [16LL] [i_1] [i_2] |= ((/* implicit */short) (~(18320627192319701334ULL)));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 3 */
    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_4 = 4; i_4 < 21; i_4 += 3) 
        {
            arr_17 [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) (signed char)118)))) << (((((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */int) max(((unsigned char)125), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) (short)11709)))) - (124)))));
            /* LoopNest 2 */
            for (signed char i_5 = 1; i_5 < 20; i_5 += 1) 
            {
                for (unsigned char i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    {
                        arr_24 [(signed char)9] [i_5] [(unsigned char)8] [i_3] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 3])))), (((/* implicit */int) arr_16 [i_3] [(short)8]))));
                        arr_25 [(signed char)13] [i_4] [i_4] [i_6] [i_6] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [(_Bool)0])) % (((((/* implicit */_Bool) (short)25824)) ? (var_5) : (((/* implicit */int) var_9))))))), (max((((/* implicit */long long int) (unsigned char)73)), (var_11)))));
                        arr_26 [i_6] [i_5] [i_4] [i_3] = ((/* implicit */unsigned long long int) arr_22 [(_Bool)1]);
                        arr_27 [16ULL] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_5] [(signed char)4]))))), (max((8796059467776ULL), (((/* implicit */unsigned long long int) -1159509288))))))) ? (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_6))))))) : (max((var_10), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_6)), ((short)3072))))))));
                        /* LoopSeq 2 */
                        for (short i_7 = 4; i_7 < 21; i_7 += 3) 
                        {
                            arr_32 [i_6] [i_7] [i_3] = ((/* implicit */_Bool) (((!((!(((/* implicit */_Bool) (short)-25824)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14696))) : ((~(var_2)))));
                            arr_33 [(unsigned char)18] [i_7] = ((/* implicit */short) (+(((/* implicit */int) max((arr_19 [i_3] [i_4 - 4] [i_6 + 2] [i_6]), (arr_19 [(signed char)5] [i_4] [i_6 - 1] [(unsigned char)13]))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            arr_36 [i_8] [(_Bool)1] [i_5] [i_4] [i_3] = ((((/* implicit */_Bool) (unsigned short)53738)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
                            arr_37 [i_6 + 1] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)-30757)), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) < (var_5)))), ((+(var_8)))))));
                            arr_38 [(signed char)19] = ((/* implicit */signed char) max((((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < (arr_31 [i_3] [i_8] [(unsigned char)2] [i_6] [0U]))), ((_Bool)1)))), (arr_23 [i_3] [(short)0] [i_3 + 2] [(short)0] [17ULL])));
                            arr_39 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) min((min(((signed char)107), ((signed char)-9))), (((/* implicit */signed char) (_Bool)1))))) ^ (max(((~(((/* implicit */int) (unsigned char)17)))), (((/* implicit */int) (short)-25554))))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_9 = 1; i_9 < 19; i_9 += 3) 
            {
                arr_42 [i_3] [i_3] [(_Bool)1] [i_9] = ((/* implicit */long long int) ((signed char) (-(((/* implicit */int) (short)18102)))));
                arr_43 [i_4] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_9 + 3] [i_4 - 1] [i_3 - 1]))) : (arr_13 [i_4 - 1] [i_3 - 1])));
                arr_44 [20ULL] [i_4] [0] [20ULL] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) (_Bool)1))));
            }
            arr_45 [i_3] [(_Bool)0] [i_3] = ((/* implicit */_Bool) (~((+((-(var_7)))))));
        }
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            arr_48 [i_10] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_3);
            arr_49 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_7) % (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((arr_4 [(short)9] [17ULL]) - (2007742360U))))))))) ? (((((/* implicit */int) ((((/* implicit */int) (signed char)-78)) <= (((/* implicit */int) var_3))))) << (((((/* implicit */int) (unsigned char)231)) - (206))))) : (((/* implicit */int) (((+(((/* implicit */int) (signed char)-84)))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47848))) < (13385909434809286670ULL)))))))));
        }
        arr_50 [15LL] [i_3] = ((/* implicit */long long int) 4412406006609879309ULL);
    }
    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) 
    {
        arr_53 [(unsigned char)2] [i_11] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((((/* implicit */short) (signed char)-61)), ((short)-17926)))))) < (((((/* implicit */_Bool) max((3221225472U), (((/* implicit */unsigned int) var_9))))) ? (max((((/* implicit */unsigned long long int) var_11)), (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_11) : (var_11))))))));
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                {
                    arr_62 [(_Bool)1] = ((/* implicit */short) ((var_4) >> (((((/* implicit */int) arr_22 [(short)13])) - (213)))));
                    arr_63 [i_12] [i_12] = ((/* implicit */short) var_11);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_14 = 0; i_14 < 12; i_14 += 4) 
        {
            arr_66 [i_11] = ((/* implicit */unsigned short) (~(((arr_51 [(short)9] [1ULL]) & (1787118532000178534ULL)))));
            /* LoopNest 2 */
            for (signed char i_15 = 3; i_15 < 10; i_15 += 2) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_17 = 3; i_17 < 11; i_17 += 4) 
                        {
                            arr_74 [i_14] [i_15] [i_14] [0U] &= ((/* implicit */unsigned short) (~(((long long int) (unsigned char)243))));
                            arr_75 [i_16] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_12 [i_17] [i_11])))))));
                        }
                        for (long long int i_18 = 0; i_18 < 12; i_18 += 4) 
                        {
                            arr_79 [0] [i_14] [0] [(short)5] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) max((arr_2 [i_14]), (((/* implicit */unsigned char) var_1)))))))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (max((((/* implicit */unsigned long long int) var_11)), (var_10))))) : (arr_31 [i_18] [i_16] [i_15] [i_16] [10])));
                            arr_80 [i_11] [i_11] [i_11] [i_16] [i_16] [i_11] [i_18] = ((/* implicit */_Bool) ((max((arr_15 [i_15 - 1] [i_14]), (arr_15 [i_15 - 1] [i_15]))) % (((/* implicit */unsigned long long int) min(((+(var_2))), (((/* implicit */long long int) var_4)))))));
                            arr_81 [i_11] [i_16] [(unsigned short)7] [i_16] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (short)32767))));
                        }
                        arr_82 [i_11] [i_14] [i_15] [i_16] = ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned short)21111)) * (((/* implicit */int) (unsigned short)9293))))));
                        arr_83 [i_11] [i_14] [i_15 + 2] [i_16] = var_10;
                        arr_84 [i_16] = min((arr_59 [i_11] [9] [i_16]), (((/* implicit */unsigned char) ((var_11) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)69)))))));
                    }
                } 
            } 
        }
    }
    for (unsigned short i_19 = 1; i_19 < 17; i_19 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
        {
            arr_89 [i_19] [i_20] [i_19] = ((/* implicit */unsigned short) (+(3692195665615210894LL)));
            arr_90 [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(var_10)))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -3349246032776072181LL)))) ? (((/* implicit */int) ((var_11) >= (((/* implicit */long long int) ((/* implicit */int) var_9)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (32760U))))))) : (var_7)));
            arr_91 [i_19] [i_20] [(_Bool)1] = ((/* implicit */signed char) var_9);
            arr_92 [6U] [i_20] = ((/* implicit */unsigned short) ((unsigned int) 399992604U));
            arr_93 [(unsigned char)12] [(unsigned char)12] &= ((/* implicit */long long int) (+(max((((/* implicit */unsigned int) arr_85 [i_20 - 1] [i_20])), (arr_47 [i_19 + 1] [i_20 - 1])))));
        }
        arr_94 [2ULL] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), (((((/* implicit */int) var_9)) % (((/* implicit */int) (signed char)-52))))))), ((+(min((arr_7 [i_19] [i_19] [i_19] [i_19]), (((/* implicit */unsigned long long int) var_2))))))));
    }
    var_14 = ((/* implicit */unsigned long long int) (unsigned short)4185);
}
