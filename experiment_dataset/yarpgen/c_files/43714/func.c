/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43714
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
                        {
                            arr_10 [7] [i_2] [7] [(unsigned char)6] [i_4] [(unsigned short)1] = ((/* implicit */long long int) (((~(1649243427689027334ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))));
                            var_20 = ((/* implicit */short) ((14430006516894563306ULL) <= (14430006516894563306ULL)));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
                        {
                            var_21 += ((/* implicit */unsigned char) (~(arr_1 [i_2] [i_3])));
                            var_22 = ((/* implicit */short) (signed char)-55);
                        }
                        for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            var_23 *= ((/* implicit */_Bool) ((((((/* implicit */int) ((unsigned char) 28))) >= (((/* implicit */int) (signed char)45)))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-61))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (14430006516894563317ULL))))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)14601))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) : ((~(((4016737556814988310ULL) >> (((/* implicit */int) (signed char)27)))))))))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned char) arr_15 [i_0] [i_0] [i_1] [i_0] [i_3] [i_1])), ((unsigned char)22)))))))));
                        }
                        var_26 = ((/* implicit */unsigned char) (~(((int) arr_11 [i_1] [i_3]))));
                        var_27 = ((/* implicit */unsigned char) max((((long long int) (unsigned char)50)), (((/* implicit */long long int) (+((~(((/* implicit */int) arr_2 [i_1])))))))));
                        var_28 = ((unsigned char) (((!(((/* implicit */_Bool) (unsigned char)105)))) ? (arr_1 [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (signed char)(-127 - 1))))))));
                    }
                } 
            } 
        } 
        arr_17 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)12439))) < (((4016737556814988310ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        var_29 = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) ((_Bool) (unsigned char)234))))));
        var_30 = ((/* implicit */int) (short)14601);
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        var_31 = ((/* implicit */_Bool) min((var_31), (((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-69))))) > (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16))) : (arr_18 [i_7] [i_7])))))));
        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)102)) << (((-5180111735172824243LL) + (5180111735172824245LL))))))));
        /* LoopSeq 2 */
        for (long long int i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)237))));
            /* LoopSeq 3 */
            for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_8] [21LL])) ? ((+(5428818900688269996ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)7562)) && (((/* implicit */_Bool) 8707715004408609171LL))))))));
                /* LoopSeq 3 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_35 &= ((/* implicit */long long int) (unsigned char)255);
                    var_36 |= ((/* implicit */long long int) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
                for (unsigned char i_11 = 1; i_11 < 22; i_11 += 4) 
                {
                    var_37 = ((/* implicit */short) ((unsigned short) (short)-19057));
                    /* LoopSeq 4 */
                    for (unsigned short i_12 = 3; i_12 < 23; i_12 += 3) 
                    {
                        var_38 = ((/* implicit */short) arr_34 [i_7] [i_7] [i_7] [i_7] [(unsigned short)3] [i_12]);
                        arr_35 [i_7] [i_12] [(short)16] [i_11 + 1] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-4)) | ((~(((/* implicit */int) (signed char)-81))))));
                    }
                    for (unsigned short i_13 = 2; i_13 < 22; i_13 += 2) 
                    {
                        arr_39 [i_7] [i_9] [i_11] [(unsigned char)3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) -1511375632))) - (((/* implicit */int) ((((/* implicit */int) (signed char)52)) >= (((/* implicit */int) arr_38 [0LL] [i_8] [i_9] [i_9] [i_8])))))));
                        arr_40 [(unsigned short)20] [i_8] [(unsigned short)20] [i_9] [i_11] [i_13] &= ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                    }
                    for (signed char i_14 = 0; i_14 < 24; i_14 += 4) /* same iter space */
                    {
                        var_39 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (unsigned char)234))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)8)) << (((9145220090418112968LL) - (9145220090418112958LL)))))) : (((654367521184350238LL) << (((413866858199555153LL) - (413866858199555150LL)))))));
                        var_40 = ((/* implicit */short) ((((413866858199555180LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) (short)-4908)) : (((/* implicit */int) arr_37 [i_14] [i_8] [i_9] [i_11]))));
                        var_41 = ((((/* implicit */int) (_Bool)1)) >= (((int) (signed char)-126)));
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (signed char)-43))) / (((((/* implicit */int) arr_24 [i_9])) * (((/* implicit */int) arr_21 [i_8]))))));
                    }
                    for (signed char i_15 = 0; i_15 < 24; i_15 += 4) /* same iter space */
                    {
                        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((((/* implicit */_Bool) 8931851618374994567ULL)) ? (((/* implicit */int) (signed char)0)) : (((((/* implicit */_Bool) (short)-32755)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) arr_21 [i_8])))))))));
                        var_44 += ((/* implicit */short) ((((((/* implicit */int) arr_33 [i_7] [i_8] [(unsigned char)7] [i_9])) >= (((/* implicit */int) (unsigned short)49917)))) ? (((/* implicit */int) ((unsigned char) 413866858199555153LL))) : (((((/* implicit */int) (short)31736)) * (((/* implicit */int) (unsigned short)32767))))));
                    }
                }
                for (unsigned char i_16 = 1; i_16 < 23; i_16 += 3) 
                {
                    var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) (-(((/* implicit */int) arr_23 [19LL] [i_16 - 1])))))));
                    var_46 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) arr_25 [i_16])) : (((/* implicit */int) arr_21 [i_16]))))) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) arr_47 [i_7] [i_8] [(_Bool)1] [i_16 - 1] [(unsigned short)21] [i_8]))));
                }
                arr_48 [i_7] [(short)4] [i_7] = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) (signed char)42)))));
                var_47 -= ((/* implicit */unsigned short) (~(-359982135)));
            }
            for (long long int i_17 = 0; i_17 < 24; i_17 += 3) 
            {
                var_48 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-854)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)127)))) | (((/* implicit */int) arr_30 [(short)3] [9LL] [16LL]))));
                var_49 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (short)6919))))));
                var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)16)) * (((/* implicit */int) arr_28 [i_7] [10] [(unsigned char)7] [10]))));
                var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0)) ? (-413866858199555156LL) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_7] [i_8])))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_52 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-89))));
                var_53 += ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (unsigned char)79))) <= (((/* implicit */int) ((_Bool) (_Bool)1)))));
                arr_54 [i_18] [(signed char)6] [(signed char)6] = ((/* implicit */int) (-(arr_20 [i_7])));
                var_54 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (((_Bool)1) && ((_Bool)1)))) & (((/* implicit */int) (unsigned char)252))));
                arr_55 [1LL] [i_18] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (short)9829))) | (((/* implicit */int) ((unsigned short) (short)854)))));
            }
            arr_56 [i_7] [i_8] = (((-9223372036854775807LL - 1LL)) >= (4194300LL));
        }
        for (long long int i_19 = 0; i_19 < 24; i_19 += 1) /* same iter space */
        {
            var_55 = ((/* implicit */_Bool) max((var_55), (((((/* implicit */int) ((short) -705223536))) == ((-(((/* implicit */int) (short)9814))))))));
            arr_59 [i_7] [10LL] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32736)) & (((/* implicit */int) (short)9501))))) ? (((((/* implicit */_Bool) 10915348600796508078ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_20 [i_7]))) : (((/* implicit */long long int) -1486829957))));
            arr_60 [i_7] [i_19] = (+(-9223372036854775806LL));
        }
    }
    /* vectorizable */
    for (long long int i_20 = 0; i_20 < 11; i_20 += 4) 
    {
        arr_63 [i_20] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_38 [(unsigned short)5] [(unsigned short)5] [i_20] [(signed char)20] [i_20]))));
        arr_64 [i_20] = ((/* implicit */unsigned short) arr_52 [i_20] [i_20] [i_20] [i_20]);
        arr_65 [i_20] [i_20] = ((/* implicit */signed char) (~(arr_32 [i_20] [i_20])));
    }
    var_56 = ((/* implicit */unsigned char) var_13);
    var_57 = ((/* implicit */unsigned short) (short)-1);
    var_58 = ((/* implicit */unsigned char) (!(((((/* implicit */int) var_5)) == (((/* implicit */int) var_6))))));
    var_59 = ((/* implicit */_Bool) ((((/* implicit */int) (((~(((/* implicit */int) (short)-10683)))) == (((/* implicit */int) max(((unsigned char)237), (var_6))))))) >> (((long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-9806)) + (9830))))))));
}
