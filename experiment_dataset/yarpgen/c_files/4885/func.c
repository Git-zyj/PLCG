/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4885
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
    var_18 = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (-6668603646684383405LL)))))), (((((/* implicit */unsigned int) ((((/* implicit */int) var_16)) + (((/* implicit */int) var_6))))) < (var_1)))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-32746))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)223)) ? (max((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) (short)32745)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32744))) : (arr_1 [i_0] [i_0]))))) : ((~(((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32756))))))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]);
                    var_22 = ((/* implicit */int) ((short) (~(arr_8 [i_0] [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_23 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (max((max((((/* implicit */unsigned long long int) var_10)), (arr_14 [i_0] [i_0] [i_0] [i_0] [(short)2] [i_0]))), (arr_12 [i_1] [i_1] [i_2] [i_3 + 3] [i_4])))));
                                var_24 = ((/* implicit */int) max((var_24), ((+(((/* implicit */int) arr_9 [i_3 + 2] [i_1] [3] [i_3]))))));
                                var_25 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32755))))) * (max(((-(var_17))), (((/* implicit */unsigned long long int) ((int) (unsigned char)217)))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_2] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32745))))) ? (((((/* implicit */_Bool) (short)32745)) ? (((/* implicit */int) (short)32659)) : (209994106))) : ((~(2001491642)))));
                    var_26 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_2])) + (18265))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    {
                        var_27 = ((/* implicit */short) max((((var_17) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_22 [i_5] [i_6] [(unsigned char)8]), (((/* implicit */unsigned char) arr_3 [i_0] [i_5] [i_7])))))))), (((/* implicit */unsigned long long int) var_12))));
                        var_28 &= ((/* implicit */_Bool) ((signed char) max((max((35184372088832LL), (((/* implicit */long long int) var_1)))), (((long long int) (unsigned char)24)))));
                        var_29 -= ((/* implicit */long long int) arr_7 [i_5] [(signed char)9] [(signed char)9] [i_5]);
                        var_30 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_6) ? (1048064) : (((/* implicit */int) (short)-32761))))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [15]))) : (arr_14 [i_0] [i_5] [(unsigned char)16] [i_5] [(signed char)1] [i_5])))))) ? (((/* implicit */unsigned long long int) -3953814169367488592LL)) : ((~(((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_14 [i_7] [i_7] [i_6] [i_5] [i_5] [i_0])))))));
                    }
                } 
            } 
        } 
    }
    for (int i_8 = 4; i_8 < 18; i_8 += 1) /* same iter space */
    {
        arr_29 [i_8 - 2] = ((/* implicit */int) ((arr_26 [i_8 + 1] [i_8 - 2]) / ((-(arr_26 [i_8 - 3] [i_8 + 4])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_9 = 1; i_9 < 21; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                for (short i_11 = 4; i_11 < 21; i_11 += 2) 
                {
                    {
                        var_31 = arr_35 [i_9 + 1];
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) < (var_4)));
                        var_33 += ((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_8 + 1])) >= (((/* implicit */int) arr_37 [i_8 + 3] [i_9 - 1] [i_10] [i_11 + 1]))));
                        arr_39 [i_10] [i_11] = ((/* implicit */unsigned char) ((arr_34 [i_11 - 3] [i_11 + 1] [i_11 + 1] [i_11 + 1]) ? (arr_33 [i_11 - 2] [i_11 - 1] [i_11 - 3] [i_11 - 4]) : (arr_33 [i_11 - 2] [i_11 - 1] [i_11 + 1] [i_11 - 2])));
                    }
                } 
            } 
            var_34 = ((((/* implicit */_Bool) (~(-1254332581)))) ? ((+(((/* implicit */int) (unsigned char)128)))) : (((/* implicit */int) (unsigned char)234)));
            /* LoopNest 3 */
            for (short i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                for (unsigned char i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    for (signed char i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        {
                            arr_48 [i_12] [i_14] [i_13] [i_12] [i_12] [i_9] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_8 - 4] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_8] [i_9] [i_12] [i_13]))) : (((((/* implicit */_Bool) arr_46 [(unsigned char)18] [i_13] [(unsigned char)18] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_9]))) : (arr_36 [i_9] [i_12] [i_13])))));
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_12] [i_13] [i_12] [i_14])) ? (((/* implicit */int) arr_46 [17LL] [i_8] [i_9] [i_9] [(signed char)21])) : (536805376)))) ? (((/* implicit */int) arr_42 [i_9 - 1] [i_9] [(signed char)8] [i_9 - 1])) : (((/* implicit */int) var_5)))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_15 = 0; i_15 < 22; i_15 += 4) 
        {
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                for (unsigned short i_17 = 0; i_17 < 22; i_17 += 3) 
                {
                    {
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2147483647)) + (10128199653833450837ULL)));
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_45 [i_8 + 1])) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_46 [i_8] [i_8 - 2] [i_8 - 4] [i_8] [i_8 + 3])), (arr_31 [i_8 - 4] [i_8 + 4]))))));
                        var_38 = (-(max((((/* implicit */unsigned long long int) (signed char)115)), (arr_44 [i_8 - 1]))));
                        var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-107))))) + (((unsigned int) var_17))))) ? (arr_54 [i_8 + 4] [i_8 + 4] [i_8] [i_8 + 4]) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))));
                    }
                } 
            } 
            arr_57 [i_8 + 1] [i_15] = ((/* implicit */int) arr_46 [i_8] [i_8 - 2] [i_8] [i_8 + 2] [i_8]);
            var_40 = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_34 [i_8] [i_8 + 3] [i_8 + 3] [(unsigned char)5])))), (var_12)));
        }
        for (unsigned char i_18 = 2; i_18 < 21; i_18 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_19 = 0; i_19 < 22; i_19 += 4) 
            {
                var_41 = ((unsigned char) max((arr_61 [i_8] [i_18] [i_19] [i_18]), (arr_61 [i_8] [i_8] [i_19] [i_18])));
                var_42 ^= ((/* implicit */short) (-(((/* implicit */int) arr_34 [i_8 - 2] [i_18] [0ULL] [0ULL]))));
                var_43 *= var_3;
            }
            for (int i_20 = 0; i_20 < 22; i_20 += 3) 
            {
                var_44 &= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)12262))));
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 22; i_21 += 2) 
                {
                    for (unsigned char i_22 = 0; i_22 < 22; i_22 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) (signed char)-109)));
                            var_46 = ((/* implicit */unsigned char) (-(var_1)));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned int i_23 = 2; i_23 < 21; i_23 += 4) 
                {
                    var_47 ^= ((/* implicit */unsigned char) arr_62 [i_8] [i_23] [i_20] [i_23 + 1]);
                    var_48 = ((/* implicit */unsigned char) var_6);
                    var_49 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) -35184372088833LL)) || (((/* implicit */_Bool) arr_28 [i_20])))), ((((_Bool)1) && (((/* implicit */_Bool) -35184372088832LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)245))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_65 [i_18 - 1] [i_23 - 2] [i_8 - 3] [13LL])))))));
                }
                /* vectorizable */
                for (signed char i_24 = 0; i_24 < 22; i_24 += 4) 
                {
                    arr_75 [i_8] [i_18] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((unsigned long long int) arr_25 [i_20])) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_37 [i_8 + 4] [i_18] [i_20] [i_24])))))));
                    /* LoopSeq 1 */
                    for (int i_25 = 0; i_25 < 22; i_25 += 1) 
                    {
                        arr_80 [i_24] &= ((/* implicit */long long int) ((((/* implicit */int) arr_62 [i_18 - 1] [i_24] [i_8 - 2] [i_24])) - (((/* implicit */int) arr_62 [i_18 + 1] [i_24] [i_8 - 1] [(_Bool)1]))));
                        var_50 &= ((/* implicit */signed char) (-((~(((/* implicit */int) (short)(-32767 - 1)))))));
                    }
                }
                for (short i_26 = 0; i_26 < 22; i_26 += 4) 
                {
                    var_51 = ((((((((/* implicit */_Bool) (unsigned short)304)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-32761)))) * (((/* implicit */int) var_6)))) - (((/* implicit */int) arr_67 [i_8 + 3] [i_8 - 3] [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18 - 2] [i_18 - 1])));
                    var_52 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_55 [i_26] [i_18 - 1] [i_18])) ? (((((/* implicit */_Bool) arr_28 [i_8 - 2])) ? (-3456705225738895964LL) : (((/* implicit */long long int) ((/* implicit */int) max((arr_72 [i_8 - 1] [i_8 - 1] [(signed char)6] [i_26] [i_8 - 3]), (((/* implicit */short) var_6)))))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_76 [i_20] [i_20] [i_20] [i_8 - 4] [i_8 - 4]))))), (((long long int) arr_49 [(_Bool)1] [i_18]))))));
                }
                /* vectorizable */
                for (short i_27 = 2; i_27 < 18; i_27 += 3) 
                {
                    var_53 = ((/* implicit */_Bool) ((unsigned long long int) 209994106));
                    var_54 = ((/* implicit */signed char) ((unsigned short) arr_34 [i_8 + 2] [i_8] [i_8] [i_8]));
                }
            }
            var_55 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_83 [i_8] [i_8] [i_8 - 3] [i_18] [i_18 + 1])) ? (((/* implicit */int) arr_83 [i_18] [i_18] [i_18] [i_18] [i_18 - 1])) : (((/* implicit */int) arr_83 [i_18] [21] [13LL] [i_18] [i_18 - 1]))))));
        }
        var_56 -= ((((/* implicit */int) ((signed char) arr_47 [i_8 - 2] [i_8 - 3] [i_8 - 2] [i_8 + 1] [i_8 + 3]))) * (((/* implicit */int) arr_47 [i_8 - 2] [(_Bool)1] [i_8 - 4] [i_8] [i_8 - 2])));
        var_57 = ((((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)9)))) >= (((/* implicit */int) ((_Bool) arr_54 [i_8 + 3] [i_8 + 3] [i_8 + 2] [i_8]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_74 [i_8] [i_8 + 3] [(short)10] [i_8 - 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_74 [i_8] [i_8] [(short)6] [2U]))))));
    }
    /* vectorizable */
    for (int i_28 = 4; i_28 < 18; i_28 += 1) /* same iter space */
    {
        arr_89 [i_28] = ((/* implicit */short) (-(((/* implicit */int) arr_30 [i_28 - 3] [i_28 + 3]))));
        var_58 = ((/* implicit */unsigned short) ((signed char) (unsigned char)234));
        var_59 = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned short)22900)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32753))) : (18446744073709551606ULL)))));
        var_60 = ((/* implicit */unsigned char) ((unsigned long long int) arr_59 [i_28] [i_28] [(_Bool)1]));
    }
}
