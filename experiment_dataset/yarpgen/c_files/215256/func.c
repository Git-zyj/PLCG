/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215256
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = (+(min(((~(((/* implicit */int) (signed char)101)))), (((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) ((unsigned int) (unsigned char)7))))));
            var_20 = ((/* implicit */short) (+((~(((/* implicit */int) ((unsigned short) (unsigned char)13)))))));
            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) arr_0 [i_0 - 1] [i_0 - 1])))));
        }
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        arr_9 [(unsigned short)9] [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) >> (((((unsigned int) (unsigned char)255)) - (253U)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_14 [i_4] [1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? (((/* implicit */int) (unsigned char)7)) : (arr_10 [i_2] [i_3])));
                var_22 = ((/* implicit */signed char) var_4);
            }
            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                /* LoopSeq 4 */
                for (int i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    var_23 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)120))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_13)));
                    var_25 = ((/* implicit */signed char) (unsigned char)248);
                    var_26 *= ((/* implicit */signed char) ((unsigned int) arr_18 [i_6] [i_5] [i_2]));
                }
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        arr_26 [i_8] [i_7] [i_5] [i_5] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (var_5) : (((/* implicit */int) (unsigned char)231))));
                        arr_27 [i_7] [i_3] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)25);
                    }
                    var_27 |= ((/* implicit */unsigned long long int) ((unsigned int) arr_21 [i_2]));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_31 [i_9] [i_3] [i_3] [i_5] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)0)))) : (((unsigned int) arr_8 [i_2]))));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((signed char) (unsigned char)249)))));
                }
                for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    var_29 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)13)) / (((/* implicit */int) (short)-32747))));
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_2] [i_10] [i_5] [i_10] [i_10])) ? (var_1) : (((/* implicit */long long int) 0U))));
                    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((unsigned short) 49351455560346487ULL)))));
                    var_32 *= ((((/* implicit */int) arr_32 [(unsigned short)15] [i_3] [i_5] [i_10])) >> (((var_8) - (14693034713744596473ULL))));
                }
                arr_34 [i_2] [i_3] [i_5] = ((unsigned int) (unsigned short)2837);
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    arr_38 [i_11] [16LL] [i_5] [i_11] = ((/* implicit */signed char) (unsigned char)248);
                    var_33 = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) (short)19789)))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    var_34 = ((/* implicit */unsigned long long int) var_6);
                    var_35 *= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_3] [i_3]))) : (arr_40 [i_5] [i_2])));
                    var_36 = ((/* implicit */long long int) var_12);
                    var_37 *= ((/* implicit */unsigned int) 12395206321036916498ULL);
                    var_38 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_14))));
                }
                for (unsigned int i_13 = 2; i_13 < 15; i_13 += 4) 
                {
                    var_39 = ((/* implicit */short) 3746406666U);
                    arr_43 [9LL] [i_3] [i_13] = ((/* implicit */signed char) ((long long int) arr_22 [i_13 - 1] [i_13 - 1] [i_13 + 2] [i_13 - 1]));
                    var_40 = ((/* implicit */unsigned int) (~(((unsigned long long int) var_18))));
                }
            }
            for (unsigned short i_14 = 0; i_14 < 17; i_14 += 4) 
            {
                var_41 = ((/* implicit */short) (~(((/* implicit */int) arr_35 [i_2] [i_2] [i_2] [i_2]))));
                var_42 *= ((((/* implicit */_Bool) (unsigned short)2850)) ? (arr_40 [(short)10] [i_3]) : (var_18));
            }
            arr_46 [i_2] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) var_3)));
            /* LoopSeq 3 */
            for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 1) 
            {
                var_43 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_2] [i_2] [(signed char)8] [i_15] [i_15])))))));
                var_44 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 467021507613774571LL))));
            }
            for (unsigned short i_16 = 0; i_16 < 17; i_16 += 3) 
            {
                var_45 *= ((/* implicit */unsigned long long int) ((short) arr_23 [i_16] [i_16] [i_16] [i_3] [i_2]));
                var_46 = ((/* implicit */_Bool) 3076609076U);
                var_47 = (~((~(((/* implicit */int) var_11)))));
            }
            for (unsigned short i_17 = 1; i_17 < 16; i_17 += 4) 
            {
                /* LoopNest 2 */
                for (int i_18 = 2; i_18 < 15; i_18 += 2) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_57 [i_2] [i_3] [i_17] [i_17] [i_19] = ((/* implicit */short) (~(((unsigned int) var_11))));
                            var_48 *= ((/* implicit */signed char) (+(arr_56 [i_2] [i_18] [i_17 - 1] [i_17] [i_18 + 1])));
                            var_49 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_32 [i_19] [i_18] [i_17] [i_2])) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) var_0))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_20 = 1; i_20 < 16; i_20 += 3) 
                {
                    var_50 = ((/* implicit */long long int) var_0);
                    var_51 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                }
                for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 3) /* same iter space */
                {
                    var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_17] [i_17 - 1] [i_17] [i_17 - 1])) >= (((/* implicit */int) var_12))));
                    var_53 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1710701380)) ? (((/* implicit */int) (unsigned short)62691)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) -467021507613774572LL)) ? (var_7) : (((/* implicit */long long int) 263089030U)))) : (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
                }
                for (unsigned long long int i_22 = 0; i_22 < 17; i_22 += 3) /* same iter space */
                {
                    var_54 = ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */long long int) arr_47 [i_17 - 1] [i_17 - 1] [i_17] [i_17 + 1])) : (-6025296327121543012LL));
                    /* LoopSeq 2 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                    {
                        var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) ((int) arr_50 [i_17 + 1])))));
                        var_56 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)62719)))));
                        arr_68 [i_2] [i_2] [i_2] [i_2] [i_17] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) var_3)))));
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                    {
                        var_57 = ((/* implicit */long long int) (+(((/* implicit */int) ((var_7) <= (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                        var_58 = ((/* implicit */signed char) (+(arr_10 [i_17] [i_17 - 1])));
                        arr_72 [i_22] [i_3] [i_17] [i_22] [i_17] = (unsigned short)62700;
                    }
                    var_59 = ((/* implicit */_Bool) ((185076207U) + (arr_45 [i_17] [i_17] [i_17 - 1])));
                }
                /* LoopSeq 3 */
                for (long long int i_25 = 0; i_25 < 17; i_25 += 4) 
                {
                    arr_76 [i_3] [i_17] [i_17] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((((/* implicit */_Bool) (short)-23429)) ? (((/* implicit */int) (unsigned short)4236)) : (((/* implicit */int) (unsigned char)234))))));
                    arr_77 [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) arr_60 [i_17] [i_17 - 1] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-28419))) : (arr_47 [i_17] [i_17] [i_17 + 1] [i_17 - 1])));
                }
                for (unsigned int i_26 = 0; i_26 < 17; i_26 += 1) 
                {
                    var_60 = ((/* implicit */unsigned char) ((unsigned int) (-(691286257))));
                    var_61 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_52 [i_17] [i_17] [i_17]))))) ? ((~(-691286246))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 10U)))))));
                    arr_80 [i_2] [i_17] [i_17] [i_26] = ((/* implicit */signed char) (-(((int) 4294967265U))));
                }
                for (long long int i_27 = 0; i_27 < 17; i_27 += 3) 
                {
                    var_62 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) (-(-2095543763)))) : (433436647U)));
                    arr_85 [i_17] [i_17] [i_17] = var_9;
                }
                var_63 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)2816)) == (((/* implicit */int) (unsigned short)14))));
            }
            var_64 *= ((/* implicit */unsigned long long int) (unsigned short)62719);
        }
        for (unsigned long long int i_28 = 2; i_28 < 16; i_28 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_29 = 0; i_29 < 17; i_29 += 3) 
            {
                var_65 = ((/* implicit */short) max((((/* implicit */unsigned short) ((short) var_3))), (min((((/* implicit */unsigned short) arr_37 [i_2] [i_28 - 1] [i_28] [i_28 - 2] [i_29])), (var_0)))));
                arr_92 [i_2] [i_28] [i_29] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
                var_66 += ((/* implicit */unsigned char) min((min((((/* implicit */long long int) var_2)), (((long long int) var_5)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) var_16))))))))));
            }
            for (unsigned short i_30 = 1; i_30 < 14; i_30 += 3) 
            {
                arr_95 [15U] [i_28] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)34)));
                var_67 = ((/* implicit */unsigned short) max((min((var_17), (((/* implicit */long long int) 4294967265U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_30 + 1] [i_28 + 1]))) : (var_9))))));
            }
            var_68 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((arr_10 [i_28 - 2] [i_28 + 1]) & (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) 4294967265U)) ? (((((/* implicit */_Bool) var_8)) ? (8956283991778825400ULL) : (((/* implicit */unsigned long long int) 2147483647)))) : (((/* implicit */unsigned long long int) ((unsigned int) 592946511U)))))));
        }
        arr_96 [i_2] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_2] [i_2]))) * (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((((/* implicit */int) (signed char)63)) - (58)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (((((/* implicit */_Bool) 3702020803U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_18))))))));
        var_69 += ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(4294967295U)))), (((long long int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_0), ((unsigned short)26044)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (12753169121157469661ULL)))))))) : (max((((((/* implicit */_Bool) var_11)) ? (4109891089U) : (3U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_16)))))))));
        arr_97 [i_2] [i_2] = min((0ULL), (((/* implicit */unsigned long long int) 2579351975U)));
    }
    var_70 = ((/* implicit */unsigned short) var_18);
    var_71 = ((/* implicit */unsigned long long int) max(((+(((((/* implicit */_Bool) -1920032659636308579LL)) ? (((/* implicit */unsigned int) 1135785167)) : (1U))))), (4294967283U)));
}
