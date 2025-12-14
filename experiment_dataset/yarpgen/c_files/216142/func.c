/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216142
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_14))));
    var_18 = ((/* implicit */unsigned short) var_15);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) ((unsigned int) arr_0 [i_0] [i_0]));
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) + (((/* implicit */int) (_Bool)0))))) + ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_3 [i_0] [i_1] [i_1]))))))));
            var_21 = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_1]);
        }
        for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            var_22 &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-17027)))), (((/* implicit */int) (signed char)-82))));
            var_23 = ((/* implicit */unsigned int) ((unsigned char) (signed char)-82));
        }
        arr_8 [(_Bool)1] [i_0] = ((/* implicit */short) (!(arr_2 [i_0] [i_0] [i_0])));
    }
    for (short i_3 = 3; i_3 < 19; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            for (unsigned int i_5 = 1; i_5 < 16; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_19 [i_6] [i_6] &= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (signed char)-105))))))));
                                var_24 &= ((/* implicit */unsigned short) ((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (~((((((_Bool)0) ? (((/* implicit */unsigned int) 268431360)) : (4294967295U))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)104))))))))));
                            }
                        } 
                    } 
                    var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) < (1U))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5]))) <= (var_8)))))) : ((-(((/* implicit */int) (unsigned char)153))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) max(((+(((((/* implicit */int) arr_14 [12ULL])) << (((17864067871822408963ULL) - (17864067871822408954ULL))))))), (((/* implicit */int) (signed char)30)))))));
        var_28 = ((/* implicit */_Bool) (signed char)-82);
        /* LoopSeq 3 */
        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            var_29 = ((/* implicit */short) (((~(((/* implicit */int) arr_12 [i_3] [i_3] [(signed char)11])))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (var_15))))));
            var_30 = ((/* implicit */_Bool) (+((+(((((/* implicit */int) (signed char)-72)) - (((/* implicit */int) (unsigned char)102))))))));
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 4 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_31 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((arr_21 [i_3]), (((/* implicit */unsigned short) arr_13 [i_3 - 1] [i_3] [i_3 - 1]))))) ? (((/* implicit */unsigned long long int) max((arr_18 [i_3] [i_9] [i_3] [i_10] [i_10]), (((/* implicit */unsigned int) (signed char)104))))) : (((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) (_Bool)0))));
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        {
                            var_32 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)154))))) == (var_8)));
                            var_33 &= ((/* implicit */signed char) ((((_Bool) var_4)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) ((min((arr_3 [i_3] [i_9] [i_11]), (((/* implicit */unsigned int) (signed char)72)))) == (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_10)))))))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */_Bool) max((var_34), ((_Bool)0)));
                var_35 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-113)), (arr_17 [i_3] [i_9] [i_10])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-14))))) : (min((((/* implicit */unsigned int) arr_0 [i_3] [i_3])), (arr_9 [i_3] [i_3]))))));
            }
            for (short i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                arr_33 [i_3] [i_9] [i_3] = ((/* implicit */int) var_6);
                var_36 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned short) (unsigned short)0))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)60))) - (arr_15 [i_3 - 3] [i_3] [i_9 - 1] [i_3 - 3])))));
                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) var_1))));
                var_38 = ((/* implicit */signed char) arr_25 [i_3] [i_9] [i_9]);
            }
            for (int i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_15 = 0; i_15 < 20; i_15 += 4) 
                {
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)148))) / (4294967294U))))) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((/* implicit */int) arr_5 [i_15] [i_9]))));
                    var_40 = ((/* implicit */short) (((+(11678661924447648748ULL))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                }
                for (long long int i_16 = 1; i_16 < 19; i_16 += 4) 
                {
                    var_41 -= ((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3] [i_3]);
                    var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) ((((/* implicit */_Bool) 11678661924447648748ULL)) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 6768082149261902845ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-17)))))) : (var_8))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 0; i_17 < 20; i_17 += 4) 
                    {
                        var_43 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_3] [i_9] [i_14] [i_16] [i_17])) | (((/* implicit */int) var_0))))) ? (((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_17] [i_16 - 1] [i_14] [i_9 - 1] [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_3] [i_9 - 1] [i_14] [i_9 - 1] [i_14])) || (((/* implicit */_Bool) (signed char)-45))))))));
                        var_44 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_35 [i_3] [i_3])), ((+(15417477623898905266ULL)))));
                        var_45 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -49432293)) < (var_14)))), (max((var_8), (((/* implicit */unsigned long long int) (unsigned char)154)))))) >= (((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) (unsigned short)17353))), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)69)))))))));
                    }
                    var_46 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)81)) > (((/* implicit */int) (unsigned char)186))))), (arr_16 [i_3] [i_3] [i_14] [i_16])));
                    var_47 = (i_3 % 2 == zero) ? (((/* implicit */int) (!(((/* implicit */_Bool) (((((~(((/* implicit */int) arr_31 [i_3] [i_14] [i_14] [(_Bool)1])))) + (2147483647))) << (((arr_18 [i_9 - 1] [i_9 - 1] [i_3] [i_3 - 1] [i_16 - 1]) - (1806568367U))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (((((~(((/* implicit */int) arr_31 [i_3] [i_14] [i_14] [(_Bool)1])))) + (2147483647))) << (((((arr_18 [i_9 - 1] [i_9 - 1] [i_3] [i_3 - 1] [i_16 - 1]) - (1806568367U))) - (1505538417U)))))))));
                }
                var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned char)90), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)17)))))))) && (((arr_23 [i_3 - 2] [i_3 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) (~((((~(((/* implicit */int) (unsigned char)187)))) & (((/* implicit */int) var_9)))))))));
                /* LoopSeq 1 */
                for (long long int i_18 = 2; i_18 < 19; i_18 += 4) 
                {
                    var_50 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)-17))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-24298))) / (var_5)))), (min((((/* implicit */unsigned long long int) var_16)), (var_13)))))));
                    var_51 = var_1;
                    arr_50 [i_3] [i_9] [i_3] [i_18] = ((/* implicit */signed char) ((298348109U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71)))));
                    arr_51 [i_18] [i_18] [i_3] [i_18] [i_3] [i_9 - 1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)127)) ^ (((/* implicit */int) (short)-16544))));
                }
            }
            for (int i_19 = 3; i_19 < 18; i_19 += 2) 
            {
                var_52 = ((/* implicit */unsigned char) min((((/* implicit */long long int) -1203684139)), (var_5)));
                var_53 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_49 [i_3] [i_19 - 3] [i_19 + 1] [i_3])))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (9223372036317904896ULL))))));
                var_54 -= ((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) (+(min((var_13), (((/* implicit */unsigned long long int) (_Bool)0)))))))));
            }
            arr_54 [i_3] [(short)1] [i_3] = (+((((-(((/* implicit */int) (signed char)127)))) * (((/* implicit */int) (_Bool)1)))));
            var_55 = ((/* implicit */unsigned int) (signed char)127);
            var_56 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)85))))) >= (max((((/* implicit */long long int) (signed char)-105)), (max((-1LL), (((/* implicit */long long int) arr_4 [i_9] [i_3] [i_9]))))))));
        }
        for (unsigned char i_20 = 3; i_20 < 17; i_20 += 3) 
        {
            var_57 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_0 [i_20] [(unsigned char)17])))))))));
            var_58 = ((/* implicit */signed char) ((((/* implicit */int) ((0LL) > (((/* implicit */long long int) ((var_14) >> (((var_13) - (6414403564886870158ULL))))))))) % (((((/* implicit */int) arr_24 [i_3] [i_3] [i_3])) >> (((/* implicit */int) (_Bool)0))))));
            var_59 = ((/* implicit */signed char) (~(((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_20 [i_3] [i_3] [i_3]))))));
            var_60 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) min((((/* implicit */short) (unsigned char)6)), ((short)32767))))))));
        }
    }
}
