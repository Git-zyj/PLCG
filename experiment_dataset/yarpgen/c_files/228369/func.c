/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228369
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
    for (short i_0 = 1; i_0 < 19; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min((min((arr_1 [i_0 + 3]), (arr_1 [i_0 + 3]))), (max((((/* implicit */unsigned int) (unsigned char)255)), (arr_1 [i_0 - 1])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(arr_1 [i_0]))))));
                    var_20 &= ((/* implicit */unsigned char) (-(((long long int) ((((/* implicit */_Bool) (unsigned char)130)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        arr_12 [i_0] [(unsigned short)16] [(unsigned char)8] [i_0] |= ((/* implicit */signed char) arr_1 [i_0]);
                        arr_13 [i_0] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */int) (short)-26622);
                    }
                }
            } 
        } 
    }
    for (short i_4 = 1; i_4 < 19; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 1; i_5 < 21; i_5 += 4) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((((/* implicit */long long int) (short)(-32767 - 1))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5] [i_4 + 3] [i_4])) ? (((/* implicit */int) arr_8 [i_4] [i_5])) : (((/* implicit */int) var_13))))) ? (min((4113661344881007175LL), (((/* implicit */long long int) var_17)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_10 [i_4] [i_4])) : (((/* implicit */int) var_0))))))))))));
            arr_19 [16LL] [(unsigned short)12] [i_5] |= ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 823529283227682025ULL))))), (arr_6 [i_4])));
        }
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            arr_23 [i_6] [i_4] [i_4] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_5))))));
            var_22 *= ((short) var_8);
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                for (unsigned short i_8 = 3; i_8 < 20; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) (~(var_14)));
                            arr_30 [i_7] [i_4] [i_4] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) (short)22550))));
                        }
                    } 
                } 
            } 
        }
        var_24 = ((/* implicit */short) min((((((/* implicit */int) var_17)) ^ (min((var_15), (((/* implicit */int) (short)-26638)))))), ((+(1589389746)))));
    }
    for (short i_10 = 1; i_10 < 19; i_10 += 1) /* same iter space */
    {
        var_25 ^= ((/* implicit */unsigned int) (~((-(((((/* implicit */int) arr_15 [i_10] [(signed char)21])) ^ (((/* implicit */int) var_8))))))));
        arr_33 [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)26638))));
    }
    /* LoopSeq 4 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_36 [i_11] [i_11] = ((/* implicit */short) ((long long int) arr_27 [6] [i_11]));
        arr_37 [i_11] = ((/* implicit */int) (((+(arr_35 [i_11]))) * (((arr_35 [i_11]) + (arr_35 [i_11])))));
        arr_38 [i_11] = ((/* implicit */short) ((((((/* implicit */int) arr_7 [i_11] [i_11] [i_11])) + (2147483647))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (-1589389747) : (1589389746)))) ? (((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (short)-26638)) : (((/* implicit */int) (short)26658)))) : (((/* implicit */int) (unsigned char)0)))) + (26640)))));
    }
    for (short i_12 = 0; i_12 < 15; i_12 += 1) 
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -431524986)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (signed char)-64))));
        arr_42 [i_12] = ((/* implicit */signed char) (+((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-26661)) : (((/* implicit */int) var_4))))))));
    }
    for (int i_13 = 0; i_13 < 11; i_13 += 3) 
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 11; i_14 += 4) 
        {
            for (unsigned long long int i_15 = 1; i_15 < 10; i_15 += 3) 
            {
                {
                    var_27 &= ((/* implicit */long long int) var_7);
                    /* LoopNest 2 */
                    for (long long int i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        for (unsigned long long int i_17 = 2; i_17 < 8; i_17 += 2) 
                        {
                            {
                                var_28 = var_8;
                                var_29 = ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)117)) : (min((2147483647), (2147483647))))) < ((~(((/* implicit */int) var_11)))));
                                var_30 = ((/* implicit */unsigned int) min((((/* implicit */int) var_16)), (min((((((/* implicit */_Bool) arr_48 [i_13])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)130)))), ((~(((/* implicit */int) (signed char)71))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 4; i_18 < 10; i_18 += 4) 
                    {
                        for (short i_19 = 0; i_19 < 11; i_19 += 4) 
                        {
                            {
                                var_31 -= ((/* implicit */short) (~((~((+(((/* implicit */int) arr_10 [i_19] [i_15]))))))));
                                var_32 -= ((/* implicit */short) max((min((((var_18) << (((((/* implicit */int) var_2)) + (28542))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_14] [i_14] [i_14]))))))), ((~(var_18)))));
                                var_33 += ((/* implicit */unsigned long long int) ((signed char) min((arr_26 [i_15 - 1] [i_15 - 1] [i_18 - 2] [i_15 - 1] [i_18]), (((/* implicit */unsigned long long int) arr_0 [i_15 - 1])))));
                                var_34 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), ((unsigned char)192)))))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (arr_29 [13ULL] [i_14] [i_13]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_13] [i_13]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-1), ((signed char)-106))))) : (arr_24 [i_13] [i_13] [i_13] [i_13]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_20 = 3; i_20 < 7; i_20 += 4) 
        {
            for (unsigned short i_21 = 3; i_21 < 9; i_21 += 4) 
            {
                {
                    var_36 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) (short)26637)), (((unsigned long long int) (unsigned char)117))))));
                    arr_65 [i_13] [i_20] [i_21] = ((/* implicit */int) (+(var_1)));
                    arr_66 [i_13] [1] [i_13] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) min(((short)-6), (((/* implicit */short) (_Bool)0)))))))));
                    var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_55 [i_13] [i_21 - 2] [i_21] [i_21] [i_21]), (((/* implicit */unsigned int) var_0))))) ? ((~(((unsigned int) arr_4 [16ULL] [16ULL] [i_13])))) : (((/* implicit */unsigned int) (-(((((/* implicit */int) arr_14 [i_20])) * (var_14))))))));
                    arr_67 [i_13] [i_13] [i_20] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_6 [i_20 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_13] [i_13] [i_20] [i_21])))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : (8290286281502673408ULL)))) ? (((unsigned long long int) arr_56 [i_13] [i_20] [i_20 - 2] [i_21 - 2])) : (max((var_18), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_13] [i_20] [i_20] [i_21] [i_21])))))))));
                }
            } 
        } 
        arr_68 [i_13] [i_13] = ((/* implicit */int) min((((unsigned int) (+(arr_29 [i_13] [i_13] [i_13])))), (((/* implicit */unsigned int) (signed char)84))));
    }
    for (unsigned char i_22 = 0; i_22 < 23; i_22 += 2) 
    {
        arr_72 [i_22] = ((/* implicit */short) (~(((((/* implicit */int) arr_71 [i_22])) - (((/* implicit */int) (unsigned char)231))))));
        arr_73 [i_22] [i_22] = ((/* implicit */signed char) (-((~(((/* implicit */int) ((short) var_14)))))));
        arr_74 [i_22] = ((/* implicit */unsigned char) 4194303U);
        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130))) / (var_1))), (arr_69 [i_22])))) * ((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_22]))) : (arr_70 [i_22]))))))))));
        var_39 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_6)) : (var_14)))) ? ((+(((/* implicit */int) arr_71 [i_22])))) : (((/* implicit */int) (unsigned char)104))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)0)), (-9223372036854775802LL)))) ? (((unsigned int) var_11)) : (arr_69 [i_22])))));
    }
}
