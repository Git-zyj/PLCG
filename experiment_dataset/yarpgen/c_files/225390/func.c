/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225390
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) ((unsigned int) ((2938755282059422190ULL) ^ (arr_3 [i_1]))))) ? (((/* implicit */int) ((signed char) arr_9 [i_2 + 2] [i_2 + 2] [i_2 + 3] [i_2 + 2]))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)15285)) : (((/* implicit */int) var_0)))))));
                    arr_10 [i_1] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) ((var_2) == (4294901760ULL)))), ((+(3221225472U))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1784222864)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 3) 
        {
            for (unsigned int i_5 = 1; i_5 < 10; i_5 += 2) 
            {
                {
                    arr_19 [i_4] [i_4] = ((/* implicit */signed char) ((((unsigned long long int) (~(5104158908624295916ULL)))) >> (((((/* implicit */_Bool) (unsigned short)9974)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) var_7))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_27 [i_7 - 1] [i_4] [i_7] [i_7] [i_6 + 1] [i_7] [i_5] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_23 [i_7] [i_7] [i_7 - 1] [i_7] [i_7]))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                                arr_28 [(signed char)1] [i_4] [(signed char)1] [i_7] [i_7 - 1] [i_6 + 1] [i_6] = ((/* implicit */unsigned char) 549755805696ULL);
                                arr_29 [i_3] [i_7] [i_5] [i_6] [i_7] = ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_8 = 1; i_8 < 23; i_8 += 2) 
    {
        arr_32 [i_8] = arr_0 [i_8 - 1];
        var_16 = ((/* implicit */unsigned char) arr_7 [i_8]);
        /* LoopSeq 3 */
        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            arr_36 [12ULL] [i_9] [i_8] = ((/* implicit */signed char) arr_8 [i_8] [i_8 + 1] [i_8 + 1] [i_8]);
            /* LoopNest 2 */
            for (long long int i_10 = 2; i_10 < 22; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    {
                        arr_42 [i_8 + 1] [i_9] [i_10] [i_11] [i_10] = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_17 = ((/* implicit */int) (~(((unsigned long long int) arr_41 [i_8] [i_8] [i_10] [i_11] [i_8] [i_11]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                for (short i_13 = 2; i_13 < 23; i_13 += 4) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_52 [i_9] [1ULL] [i_9] [i_13] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_13 - 1] [i_9]))))) ? (((/* implicit */unsigned long long int) ((var_1) / (((/* implicit */int) (_Bool)1))))) : (((var_14) >> (((((/* implicit */int) var_11)) - (18803)))))));
                            var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) -5182252460985197701LL)) ? (arr_1 [i_8] [i_8]) : (((long long int) var_11))));
                            var_19 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_30 [i_8 - 1] [i_12]))));
                        }
                    } 
                } 
            } 
        }
        for (int i_15 = 1; i_15 < 23; i_15 += 4) /* same iter space */
        {
            var_20 += ((/* implicit */unsigned char) arr_31 [i_15]);
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_43 [i_15] [i_15] [i_8 + 1])))))));
        }
        for (int i_16 = 1; i_16 < 23; i_16 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_17 = 0; i_17 < 24; i_17 += 2) 
            {
                for (unsigned short i_18 = 0; i_18 < 24; i_18 += 2) 
                {
                    for (short i_19 = 0; i_19 < 24; i_19 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_4)))) ? (((int) var_0)) : (((/* implicit */int) var_7)))))));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_8 + 1])) - (var_3))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */signed char) ((((int) var_12)) + ((-(((/* implicit */int) var_6))))));
            var_25 = ((/* implicit */_Bool) min((var_25), (var_12)));
            var_26 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_40 [i_16] [i_16] [i_16]))));
            arr_69 [i_8 - 1] [i_8] [i_16 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_8 - 1] [i_16] [i_16 + 1] [i_8])) ? (arr_68 [(unsigned char)5] [(unsigned char)5] [(unsigned char)22] [i_16] [i_16] [i_16] [i_16]) : ((-(var_4)))));
        }
    }
    for (unsigned short i_20 = 1; i_20 < 10; i_20 += 2) 
    {
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (unsigned short)7712))));
        arr_72 [i_20] [i_20 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_64 [i_20] [i_20 - 1] [i_20] [i_20 + 1]))));
        arr_73 [i_20 + 1] [i_20] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_50 [i_20 + 1] [i_20 - 1] [i_20 + 1] [i_20] [i_20] [i_20] [i_20 + 1]))));
        /* LoopNest 3 */
        for (unsigned char i_21 = 0; i_21 < 11; i_21 += 4) 
        {
            for (int i_22 = 0; i_22 < 11; i_22 += 2) 
            {
                for (long long int i_23 = 3; i_23 < 10; i_23 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_24 = 0; i_24 < 11; i_24 += 3) /* same iter space */
                        {
                            var_28 = ((_Bool) min((arr_25 [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_23 - 1] [i_20] [i_23 - 3]), (((/* implicit */int) arr_64 [i_23] [i_23 + 1] [i_23 - 1] [i_24]))));
                            arr_85 [i_21] [i_21] [i_23] [i_24] &= ((/* implicit */unsigned char) ((unsigned int) var_7));
                        }
                        for (long long int i_25 = 0; i_25 < 11; i_25 += 3) /* same iter space */
                        {
                            arr_90 [7ULL] [i_20] [i_22] [i_23] [i_25] = ((/* implicit */unsigned short) var_8);
                            arr_91 [i_20] [i_20] [(signed char)10] [6] [i_25] = ((/* implicit */short) ((unsigned long long int) ((unsigned int) (unsigned short)43257)));
                        }
                        for (long long int i_26 = 0; i_26 < 11; i_26 += 3) /* same iter space */
                        {
                            arr_94 [i_20] [i_21] [i_21] = ((/* implicit */_Bool) var_11);
                            arr_95 [i_26] [i_26] [i_26] [i_26] [i_20] [i_26] = (!(((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_23] [i_23] [i_23 - 2] [(signed char)12]))));
                        }
                        for (long long int i_27 = 0; i_27 < 11; i_27 += 3) /* same iter space */
                        {
                            arr_100 [i_20] [i_20 - 1] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) (+(2251731094208512ULL)))))));
                            arr_101 [i_20] [i_23] [i_21] [i_20] [i_20] = ((/* implicit */unsigned int) (_Bool)0);
                            var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) ((signed char) (unsigned short)43239))))));
                            arr_102 [i_23 - 3] [i_23] [(unsigned char)1] [i_23] [i_23] [i_20] = ((/* implicit */signed char) var_14);
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned long long int) arr_16 [i_20 - 1])), (arr_20 [i_28] [i_21] [i_22] [i_21])))))));
                            arr_107 [i_20] [i_21] [i_22] [i_20] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_0))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_28] [i_21] [i_20])) ? (arr_65 [i_20] [17ULL] [i_22] [i_22] [(_Bool)1] [i_28]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_22]))))))));
                            arr_108 [i_22] [i_21] [i_22] &= ((/* implicit */unsigned char) ((unsigned long long int) (~(((/* implicit */int) max((arr_86 [i_20] [i_23] [i_23 - 1] [i_23] [i_23]), (var_11)))))));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_78 [i_28] [i_21] [i_20])))) ? (((/* implicit */int) arr_11 [i_21])) : (((/* implicit */int) ((((/* implicit */int) (short)224)) >= (((/* implicit */int) arr_35 [i_23 - 3] [i_23 - 1])))))));
                            arr_109 [i_20 - 1] [i_21] [6ULL] [i_20] [i_28] = ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) (short)22657)))));
                        }
                        arr_110 [i_20] [i_20] [i_21] [i_21] = ((/* implicit */signed char) var_4);
                    }
                } 
            } 
        } 
        arr_111 [i_20] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
    }
    var_32 = (((+(((((/* implicit */unsigned long long int) var_10)) | (67553994410557440ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((var_6), (var_6)))))));
}
