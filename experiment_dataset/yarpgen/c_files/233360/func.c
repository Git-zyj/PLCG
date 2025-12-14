/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233360
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
    for (short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) / ((-(((((/* implicit */_Bool) var_1)) ? (116647304886886630ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_0])))))), (var_1))))));
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_0] [i_0] [10] [i_0] [i_0] [i_0]))))) * (((unsigned int) 7271432710045497074LL))))) ? (((((/* implicit */int) arr_1 [i_0 + 1])) & (((/* implicit */int) max((arr_3 [i_3]), (((/* implicit */unsigned char) var_2))))))) : (((((/* implicit */int) var_5)) / (var_4)))));
                                arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((1U) - (491767566U)));
                                var_16 = 4395899027456ULL;
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            {
                                arr_24 [i_8] [i_5] [i_5] = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -16318090)) ? (-862506440987211944LL) : (5325332253895074567LL)))), (max((((/* implicit */unsigned long long int) arr_4 [(short)22] [i_6] [(unsigned char)20] [i_0])), (var_0)))))));
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) 2322438619860266158LL)))))));
                                arr_25 [i_0] [i_5] [i_6] [i_7] = ((/* implicit */long long int) ((_Bool) var_6));
                                var_18 = ((/* implicit */unsigned int) var_12);
                            }
                        } 
                    } 
                    var_19 = ((((/* implicit */unsigned long long int) ((((arr_21 [i_0] [i_0] [i_0 + 2] [i_0 + 2]) + (9223372036854775807LL))) >> (((arr_8 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_6]) - (17552460375325445554ULL)))))) <= (arr_20 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0]));
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_10 = 2; i_10 < 21; i_10 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (18142742636913848608ULL))) >> (((3803199713U) - (3803199699U))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])) ^ (((/* implicit */int) (unsigned char)221)))))));
                            arr_31 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */int) var_11);
                            var_21 = ((/* implicit */unsigned char) max((((/* implicit */long long int) 2356863978U)), (-5404292885675027604LL)));
                            arr_32 [i_0] [i_5] [i_0] [i_9] [i_5] [i_6] [i_9] = ((/* implicit */unsigned int) arr_18 [14] [i_5] [i_5] [i_5]);
                        }
                        for (short i_11 = 2; i_11 < 21; i_11 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) (-(8184LL)));
                            arr_37 [i_9] [i_9] [(_Bool)1] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_35 [i_0])))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_22 [i_5] [i_6] [i_9])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) < (((unsigned long long int) arr_13 [i_0] [i_11]))))) : (((/* implicit */int) ((var_10) && (((/* implicit */_Bool) (+(491767591U)))))))));
                            arr_38 [i_0] [i_0] [i_5] [i_5] [i_6] [14] [5LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (arr_36 [i_0 + 2] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_13 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_17 [i_6]))))) ? (arr_21 [i_0 + 2] [i_0 + 2] [i_0] [i_0]) : (((/* implicit */long long int) ((((var_6) != (3803199722U))) ? (((/* implicit */int) (unsigned char)151)) : (((int) (short)-1978)))))));
                        }
                        arr_39 [i_5] [i_5] [i_9] = ((/* implicit */signed char) ((_Bool) var_11));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((unsigned long long int) arr_12 [i_6]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 0; i_12 < 23; i_12 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) arr_41 [i_0] [i_5]);
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4294967295U)))) ? ((-(((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */int) var_2)) + (((/* implicit */int) (signed char)64))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)72)))) : ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_0)))))));
                            arr_42 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_9] [i_9] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) 845485208)), (13983407729222180445ULL))), (((/* implicit */unsigned long long int) ((((_Bool) arr_33 [i_0 - 2] [i_0 - 2] [i_0 - 2] [16] [i_0 + 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)64)) ? (18330096768822664981ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))))));
                            arr_43 [i_0] [i_0] [i_6] [i_6] [i_12] = ((/* implicit */unsigned int) arr_14 [i_0] [i_5] [i_6]);
                        }
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 23; i_13 += 2) /* same iter space */
                    {
                        var_26 ^= ((/* implicit */_Bool) arr_41 [i_0] [i_0]);
                        var_27 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_0 + 2] [i_0] [i_5] [i_5] [i_6] [(signed char)6])) ? (((/* implicit */unsigned long long int) 3803199704U)) : (var_8)))) ? ((~(((/* implicit */int) (signed char)64)))) : (((/* implicit */int) arr_7 [i_6] [i_0 - 1])));
                        var_28 = ((/* implicit */unsigned int) (-(((var_10) ? (((/* implicit */int) arr_5 [i_0] [i_5] [i_13])) : (((/* implicit */int) (signed char)-79))))));
                        var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_5] [i_5])) / (arr_36 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]))))));
                        arr_46 [i_0] = ((/* implicit */unsigned short) var_11);
                    }
                }
            } 
        } 
    }
    for (unsigned short i_14 = 0; i_14 < 18; i_14 += 3) 
    {
        var_30 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((7443249147831682750LL), (((/* implicit */long long int) max((((/* implicit */int) arr_19 [i_14] [i_14] [i_14] [i_14] [i_14])), (arr_47 [(unsigned char)14] [16]))))))) ? (arr_21 [i_14] [i_14] [i_14] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_23 [i_14] [i_14] [i_14] [i_14] [i_14]))))));
        arr_50 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (18330096768822664969ULL)));
        var_31 = (~((~(((/* implicit */int) (!(((/* implicit */_Bool) -2584494240477707992LL))))))));
    }
    for (short i_15 = 4; i_15 < 23; i_15 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_16 = 0; i_16 < 24; i_16 += 4) 
        {
            arr_55 [i_15] [19U] [i_16] = ((/* implicit */short) ((_Bool) (unsigned char)250));
            /* LoopSeq 2 */
            for (unsigned int i_17 = 3; i_17 < 23; i_17 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_18 = 2; i_18 < 22; i_18 += 2) 
                {
                    for (signed char i_19 = 0; i_19 < 24; i_19 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((var_6), (((/* implicit */unsigned int) arr_51 [i_15])))) == (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_63 [i_15])), (var_11))))))))) < (1951852582U)));
                            arr_65 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned short) (+((~(((((/* implicit */unsigned long long int) var_4)) * (arr_57 [i_16])))))));
                        }
                    } 
                } 
                arr_66 [i_15] [2LL] [i_17] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) max((2147483647), (((/* implicit */int) (signed char)127))))), (7851874820435134470ULL))), (((/* implicit */unsigned long long int) 3803199731U))));
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 24; i_20 += 1) 
                {
                    for (signed char i_21 = 0; i_21 < 24; i_21 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_54 [i_15 - 1])), (((((/* implicit */_Bool) arr_54 [i_15 - 4])) ? (18330096768822664972ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_15 - 4])))))));
                            var_34 = ((/* implicit */short) ((long long int) (~((~(((/* implicit */int) (unsigned char)140)))))));
                        }
                    } 
                } 
            }
            for (long long int i_22 = 1; i_22 < 22; i_22 += 3) 
            {
                arr_75 [i_15] [i_16] [i_22] = ((/* implicit */signed char) -1046440151);
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_69 [i_15 - 1] [i_15 - 1] [i_22] [i_22 - 1] [(unsigned char)11]) - (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_56 [i_22] [i_16] [i_15]))))) : (((((/* implicit */_Bool) arr_56 [i_22 + 1] [i_16] [4LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_15 - 4] [i_15 - 4] [i_22 - 1]))) : (arr_69 [(_Bool)1] [i_16] [i_22] [i_15] [i_15 + 1])))));
                var_36 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)29227)) << (((3803199713U) - (3803199698U)))));
                var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_58 [i_16] [i_16] [i_16])) : (((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_59 [i_15] [i_16] [i_22 - 1] [i_15]))))));
            }
            arr_76 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_54 [i_16])) | ((~(((/* implicit */int) var_2))))));
            var_38 = (!(((/* implicit */_Bool) arr_56 [i_15] [i_16] [i_16])));
            arr_77 [i_15] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_59 [i_15 - 1] [i_15 - 4] [i_15 - 3] [i_15 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_15] [i_15 - 1] [i_15 - 3] [i_15 + 1]))) : (var_1))));
        }
        arr_78 [i_15] = ((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_62 [i_15] [i_15] [i_15] [i_15])))))) % (var_6))));
        /* LoopNest 3 */
        for (unsigned char i_23 = 0; i_23 < 24; i_23 += 4) 
        {
            for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
            {
                for (unsigned int i_25 = 3; i_25 < 21; i_25 += 1) 
                {
                    {
                        arr_86 [i_15] [i_15] [i_15] [i_24] = ((/* implicit */short) max((max((((/* implicit */long long int) (_Bool)0)), (9223372036854775807LL))), (((/* implicit */long long int) (+(arr_71 [i_15] [i_15] [i_23] [i_24] [i_25]))))));
                        var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_54 [i_23])) * (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48075)) ? (3803199722U) : (((/* implicit */unsigned int) -1704661478))))) ? (max((10755714579859880624ULL), (((/* implicit */unsigned long long int) (unsigned char)37)))) : (((/* implicit */unsigned long long int) (~(var_4)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_51 [i_24])) | (((/* implicit */int) arr_85 [i_15 + 1] [3ULL] [i_24] [i_24 - 1] [i_24 - 1] [i_25 - 2]))))))))));
                        var_40 = ((/* implicit */_Bool) (~(3803199722U)));
                        arr_87 [i_25] [i_24] [i_24] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_83 [i_24])), (var_8)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_83 [i_24])) ? (arr_83 [i_24]) : (arr_83 [i_24]))))));
                    }
                } 
            } 
        } 
        arr_88 [i_15] [i_15] = ((/* implicit */int) arr_59 [i_15] [i_15] [i_15] [i_15]);
        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) max((arr_80 [i_15]), (((/* implicit */short) arr_51 [i_15]))))) : (((/* implicit */int) var_2))))) ? ((~(-1))) : ((~(((/* implicit */int) arr_54 [i_15 - 2]))))));
    }
    var_42 = ((/* implicit */short) ((long long int) var_3));
}
