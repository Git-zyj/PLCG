/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46501
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_20 &= ((/* implicit */unsigned int) ((7220291096482536343LL) + (((/* implicit */long long int) 20U))));
                            arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (short)18339))))));
                            var_21 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_6 [i_0])) < (((/* implicit */int) arr_6 [i_0])))))));
                        }
                    } 
                } 
                var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) 45U)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))));
                arr_10 [i_0] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) ^ (var_12)))), (((unsigned int) 20U))))));
    /* LoopNest 3 */
    for (signed char i_4 = 3; i_4 < 21; i_4 += 2) 
    {
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_24 ^= ((/* implicit */_Bool) (unsigned char)21);
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_8 [i_4] [i_6] [i_6] [i_7] [i_8]))));
                                arr_24 [i_4] [i_4] [i_4] [i_7 + 1] [i_8] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_4] [i_5] [i_6] [i_6] [i_7] [(unsigned char)9])))))) * (((arr_3 [i_5] [i_4]) ^ (arr_3 [i_4 - 2] [i_4])))));
                                arr_25 [i_4] [i_5] [i_6] [i_7] [i_6] [i_6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-1LL), (((/* implicit */long long int) (unsigned short)53771))))) ? (((/* implicit */int) (unsigned short)53771)) : (((/* implicit */int) (short)23749))));
                            }
                        } 
                    } 
                    var_26 += ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_18 [i_4] [i_4] [i_4])))) ? (((((/* implicit */_Bool) arr_15 [i_6] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6] [i_6]))) : (arr_14 [i_6] [(signed char)6] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_6]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        arr_28 [i_9] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [6ULL]))) : (var_19)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((14635163726208864883ULL) - (((/* implicit */unsigned long long int) var_19)))))));
        var_27 = ((/* implicit */unsigned int) min((var_27), ((((~(arr_5 [i_9] [2U] [i_9] [i_9]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_9] [i_9] [i_9] [7U] [i_9] [i_9] [i_9])))))));
        /* LoopSeq 3 */
        for (signed char i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            arr_33 [i_9] &= ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8)))) : ((+(18LL))));
            var_28 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60989))))) <= (((/* implicit */int) max((var_5), (((/* implicit */short) var_3))))))))) != (min((((/* implicit */long long int) max((var_9), (arr_18 [i_9] [i_10] [i_10])))), (min((((/* implicit */long long int) var_1)), (arr_14 [8ULL] [(unsigned short)4] [8ULL])))))));
            arr_34 [i_10] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) (((+(((/* implicit */int) var_3)))) - (2147483647))))));
        }
        for (unsigned short i_11 = 2; i_11 < 9; i_11 += 4) 
        {
            arr_38 [i_11] [i_11] [i_9] &= (-((+(((((/* implicit */int) arr_32 [i_9] [i_9])) + (((/* implicit */int) (unsigned short)32669)))))));
            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) var_0))));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 11; i_12 += 4) 
            {
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        {
                            var_30 ^= ((/* implicit */unsigned long long int) (signed char)-2);
                            var_31 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_22 [i_9] [i_9] [i_12] [i_9] [i_14]) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_11] [i_11])))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (2601135974U)))) : (((((/* implicit */int) arr_32 [i_11 - 1] [i_11 + 1])) - (((/* implicit */int) arr_32 [i_11 - 1] [i_11 + 1]))))));
                            arr_46 [i_9] [i_9] [i_12] [9U] [i_13] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((arr_4 [i_11] [i_13]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_35 [i_9] [(signed char)8]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) var_5))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))) + ((~(var_16)))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_15 = 0; i_15 < 11; i_15 += 2) 
        {
            var_32 -= ((/* implicit */signed char) (-((~(((long long int) var_15))))));
            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 3) 
            {
                var_34 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_23 [i_15] [(unsigned char)14] [i_15] [i_16] [i_16] [i_15])) ? (arr_0 [i_9] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [10ULL] [i_15] [i_16]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) 805306368U)) ^ (arr_0 [i_9] [(unsigned char)6]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_47 [i_9]), ((unsigned char)6))))))))) : (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_6 [i_9])), (var_15)))) + ((-(15852357344346262801ULL)))))));
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 11; i_17 += 1) 
                {
                    for (short i_18 = 1; i_18 < 9; i_18 += 1) 
                    {
                        {
                            arr_56 [i_9] [i_15] [i_9] [i_15] [i_16] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_15] [i_16])) | (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (20U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) (signed char)1)) << (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) ((short) (unsigned char)149))))))));
                            arr_57 [i_17] = ((/* implicit */unsigned long long int) ((short) ((arr_42 [i_17] [i_17] [i_18 + 2] [i_17] [i_18] [i_18]) % (arr_42 [i_9] [i_17] [i_18 + 2] [i_18 + 2] [i_18 + 2] [i_18]))));
                        }
                    } 
                } 
            }
            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((-486829318556261409LL) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */int) ((short) ((_Bool) var_4)))) : ((+(((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_17 [i_9] [i_9] [i_9] [i_9])))))))))));
            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (~((-(((/* implicit */int) min((arr_43 [i_9] [i_9] [i_9] [i_9] [i_9]), (((/* implicit */signed char) var_18))))))))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_19 = 0; i_19 < 11; i_19 += 1) 
        {
            for (int i_20 = 0; i_20 < 11; i_20 += 4) 
            {
                {
                    var_37 = ((/* implicit */int) max((max((((((/* implicit */_Bool) (unsigned short)7)) ? (36U) : (((/* implicit */unsigned int) 2147483647)))), (((/* implicit */unsigned int) 2147483647)))), (((/* implicit */unsigned int) max((var_12), (((/* implicit */int) var_17)))))));
                    var_38 = ((/* implicit */unsigned long long int) max((var_38), (((unsigned long long int) arr_15 [i_20] [i_20]))));
                    /* LoopNest 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 1) 
                        {
                            {
                                arr_72 [i_20] [i_19] [i_20] [i_20] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_9])) * (((/* implicit */int) arr_12 [i_20]))))) ? (((/* implicit */int) arr_16 [i_9])) : (((/* implicit */int) (unsigned char)141))));
                                var_39 = ((/* implicit */long long int) (-((-(arr_65 [i_9] [i_9] [i_19] [i_20] [i_21] [i_22])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_23 = 1; i_23 < 24; i_23 += 3) 
    {
        var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) (!(((/* implicit */_Bool) 32760)))))));
        /* LoopNest 2 */
        for (short i_24 = 0; i_24 < 25; i_24 += 4) 
        {
            for (unsigned int i_25 = 3; i_25 < 21; i_25 += 1) 
            {
                {
                    var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) var_4))));
                    var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) ((unsigned short) min((((((/* implicit */_Bool) 36U)) ? (((/* implicit */int) (short)-22901)) : (((/* implicit */int) var_4)))), (((/* implicit */int) (_Bool)1))))))));
                    var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)37199)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_23 + 1] [i_23 - 1] [19ULL]))) + (arr_73 [i_23 - 1])))) ? (((arr_73 [i_23 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (min((((/* implicit */unsigned long long int) arr_76 [i_23 + 1] [i_23 + 1] [i_24])), (arr_73 [i_23 - 1]))))))));
                    arr_81 [i_24] [i_25] = ((/* implicit */short) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_75 [i_25] [i_25] [i_25 + 4]))) != (1460320212U))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_26 = 0; i_26 < 25; i_26 += 3) 
        {
            var_45 = ((/* implicit */_Bool) var_19);
            var_46 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((var_16) & (((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_23 + 1] [i_23 + 1] [i_23])))))) | (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_76 [i_26] [i_26] [i_26])) - (((/* implicit */int) (_Bool)1))))), (arr_73 [i_26])))));
            var_47 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_74 [i_23]))) : (max((((/* implicit */unsigned int) arr_76 [i_23] [12] [i_23])), (var_15))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_82 [i_23] [i_23] [i_26])))))));
        }
        /* LoopNest 2 */
        for (signed char i_27 = 1; i_27 < 24; i_27 += 1) 
        {
            for (unsigned char i_28 = 0; i_28 < 25; i_28 += 3) 
            {
                {
                    var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) 6214213020514086725ULL)) ? (min((((/* implicit */unsigned long long int) var_10)), (8ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9747))))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)-46)))))))));
                    arr_90 [i_23 + 1] [i_27] [i_28] [i_27] = ((/* implicit */unsigned int) ((11429479787962250342ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_80 [i_23] [i_27] [i_27] [i_28])) ? (1100082345U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_87 [i_27] [i_28] [i_28])) % (((/* implicit */int) arr_87 [i_27] [i_27 + 1] [i_28]))))))))));
                }
            } 
        } 
        var_49 ^= ((/* implicit */unsigned int) arr_82 [i_23] [0] [18LL]);
    }
    for (short i_29 = 0; i_29 < 21; i_29 += 3) 
    {
        var_50 = var_16;
        /* LoopNest 2 */
        for (unsigned short i_30 = 0; i_30 < 21; i_30 += 3) 
        {
            for (unsigned long long int i_31 = 0; i_31 < 21; i_31 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        for (unsigned char i_33 = 0; i_33 < 21; i_33 += 1) 
                        {
                            {
                                arr_107 [i_30] [18ULL] |= ((signed char) ((((/* implicit */int) (short)22900)) | (((/* implicit */int) max((var_11), (((/* implicit */unsigned char) arr_82 [i_30] [i_32] [(signed char)12])))))));
                                var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) (~(max((1100082345U), (((/* implicit */unsigned int) (short)22894)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_34 = 0; i_34 < 21; i_34 += 2) 
                    {
                        for (unsigned int i_35 = 0; i_35 < 21; i_35 += 2) 
                        {
                            {
                                var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) (((-(var_12))) >= (((/* implicit */int) min((((/* implicit */short) arr_84 [i_35] [i_30])), (var_5)))))))));
                                arr_114 [i_29] [i_29] [(unsigned char)7] [i_34] [i_35] = ((/* implicit */unsigned char) var_0);
                            }
                        } 
                    } 
                    var_53 |= ((/* implicit */signed char) var_19);
                }
            } 
        } 
    }
}
