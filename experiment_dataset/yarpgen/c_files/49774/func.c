/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49774
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
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_10 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(8191ULL))))))) > (((/* implicit */int) min((((/* implicit */signed char) arr_1 [i_0])), ((signed char)(-127 - 1)))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_11 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_1 [i_0])), (arr_4 [i_0 + 3] [i_0 + 1] [i_0 + 3])))), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)119))))), ((+(arr_5 [i_0] [i_0] [i_1])))))));
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */short) (-(min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_4 [i_0] [i_2] [i_3])), (var_7)))), (((((/* implicit */_Bool) -9223372036854775788LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)))))));
                        arr_11 [i_0] [i_1] [i_2 + 1] [i_3] = ((/* implicit */int) max((((((((/* implicit */_Bool) var_7)) && ((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (max((((/* implicit */unsigned int) (_Bool)1)), (var_7))))), (((/* implicit */unsigned int) (_Bool)1))));
                        var_13 |= ((/* implicit */long long int) max((((((/* implicit */_Bool) max((var_8), (var_5)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)4))))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) + ((+(((/* implicit */int) arr_0 [(signed char)10])))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 20; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        {
                            var_14 += ((/* implicit */signed char) ((((/* implicit */int) var_9)) >> ((((-(((/* implicit */int) (_Bool)1)))) + (4)))));
                            arr_19 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 2]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) : (0U)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0 + 2] [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_9 [i_0] [i_5] [i_4] [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(signed char)14] [i_6] [i_6]))) : (9223372036854775802LL)))))));
                        }
                    } 
                } 
                arr_20 [i_0] [i_0] = ((/* implicit */short) ((unsigned short) (_Bool)1));
                var_15 = ((/* implicit */_Bool) max((var_15), (min((((_Bool) arr_5 [i_0 + 1] [(signed char)8] [i_0])), (var_6)))));
            }
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_0)) || ((_Bool)1))))))) + (arr_10 [i_0 + 3] [i_0] [14U] [i_0] [i_0 + 3] [i_0]))))));
        }
        for (unsigned int i_7 = 2; i_7 < 17; i_7 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (var_2) : (((/* implicit */long long int) 4294967295U))))) ? (((unsigned long long int) (short)-1)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [i_0] [i_0 + 1] [i_0] [i_0] [(_Bool)1])))))));
            var_18 *= ((/* implicit */_Bool) (+((-(((/* implicit */int) (!((_Bool)1))))))));
            var_19 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((/* implicit */int) max((((/* implicit */short) arr_6 [i_0] [i_7 + 1] [(_Bool)0] [i_7])), (var_1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) (unsigned char)4))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))) : ((~(((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) arr_6 [(unsigned short)3] [i_7] [i_0] [(unsigned short)3])) : (((/* implicit */int) arr_17 [i_0] [4] [i_7] [i_0] [(short)6] [i_7] [(_Bool)0])))))));
        }
        for (unsigned int i_8 = 3; i_8 < 18; i_8 += 2) 
        {
            var_20 ^= ((/* implicit */signed char) ((((arr_1 [(unsigned short)14]) ? (((/* implicit */int) arr_23 [i_8 - 1] [i_8 - 3] [12])) : (((/* implicit */int) var_8)))) << (((max((((/* implicit */long long int) (signed char)122)), (arr_18 [i_8 - 2] [i_8] [i_8] [14] [i_8] [i_8]))) - (117LL)))));
            var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_7)) : (arr_10 [6ULL] [9LL] [i_8] [i_8] [i_8 - 1] [i_8]))), (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_22 += ((/* implicit */_Bool) var_1);
                        var_23 = ((/* implicit */unsigned short) (((~(min((4611686018427387904LL), (((/* implicit */long long int) var_4)))))) > ((-(arr_13 [i_0] [i_0] [i_8 + 2])))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) 1073741312ULL))));
                    }
                } 
            } 
            var_25 = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_22 [i_0] [i_0]))))));
            var_26 = ((/* implicit */unsigned char) min((var_26), (max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))))), (((unsigned char) arr_25 [i_0 + 3]))))));
        }
    }
    for (short i_11 = 2; i_11 < 9; i_11 += 3) 
    {
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) min(((!(((/* implicit */_Bool) arr_21 [18U])))), ((_Bool)1)))) < (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (unsigned char)23))))) > (((/* implicit */int) (short)4032)))))));
        var_28 |= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_8)))))) >= (arr_13 [(unsigned char)0] [(_Bool)1] [i_11 + 2]))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_12 = 2; i_12 < 10; i_12 += 3) /* same iter space */
        {
            var_29 += ((((/* implicit */_Bool) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_11] [i_11] [i_12] [i_12])))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)63))) : (((arr_2 [10LL]) & (((/* implicit */long long int) ((/* implicit */int) var_6))))));
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    {
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_13])) || (((/* implicit */_Bool) arr_10 [i_11] [i_11 - 1] [i_12 - 2] [12] [i_13] [i_13]))));
                        var_31 = ((/* implicit */unsigned int) arr_9 [i_13] [i_11 + 2] [i_12 + 1] [i_12]);
                        arr_41 [i_11] [i_12] [(unsigned short)0] [i_13] = ((/* implicit */unsigned short) (-(1U)));
                        var_32 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_12 [i_12 - 2] [i_12] [20] [i_14])) + (2147483647))) << (((((((/* implicit */int) arr_12 [i_12 - 2] [i_11] [i_13] [i_14])) + (29))) - (25)))));
                    }
                } 
            } 
            var_33 = ((/* implicit */_Bool) min((var_33), (var_6)));
            var_34 = ((/* implicit */unsigned char) arr_28 [i_11] [i_11 - 1] [i_12 - 2] [i_12 - 2]);
        }
        /* vectorizable */
        for (unsigned short i_15 = 2; i_15 < 10; i_15 += 3) /* same iter space */
        {
            arr_44 [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */int) arr_34 [i_11])) >= (((/* implicit */int) arr_36 [(short)0] [i_11 + 1] [i_11 - 2] [(short)0]))));
            arr_45 [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_27 [i_15 + 1] [(signed char)8]))));
        }
        for (unsigned short i_16 = 0; i_16 < 11; i_16 += 3) 
        {
            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) arr_16 [i_11] [i_11] [(unsigned short)12] [(unsigned char)20] [i_16]))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (int i_17 = 4; i_17 < 10; i_17 += 2) 
            {
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_17] [i_17] [(_Bool)1] [i_17] [i_11 + 2]))))) ? (((/* implicit */int) (!(var_6)))) : (((/* implicit */int) arr_27 [i_11 + 1] [i_17]))));
                arr_51 [i_11] [i_16] [(_Bool)1] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_11] [i_11] [i_11 + 2] [i_11 + 2] [i_11 + 2] [i_11])) == (((/* implicit */int) var_9))));
            }
            /* vectorizable */
            for (signed char i_18 = 1; i_18 < 10; i_18 += 2) 
            {
                var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_11] [i_11] [14U])))))));
                /* LoopNest 2 */
                for (unsigned short i_19 = 0; i_19 < 11; i_19 += 1) 
                {
                    for (unsigned int i_20 = 0; i_20 < 11; i_20 += 3) 
                    {
                        {
                            arr_62 [i_11 - 1] [7U] [i_18] [(unsigned short)8] [i_20] = ((/* implicit */signed char) ((long long int) (_Bool)1));
                            var_38 = ((/* implicit */_Bool) ((unsigned char) ((unsigned short) (unsigned short)65531)));
                            var_39 = ((/* implicit */_Bool) (unsigned short)4096);
                            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [16ULL] [i_20] [(unsigned char)18] [i_20] [(unsigned char)18] [i_20] [i_18 + 1])) ? (((((/* implicit */int) (unsigned short)8192)) << (((((/* implicit */int) (signed char)60)) - (52))))) : (((/* implicit */int) ((short) var_6)))));
                            arr_63 [i_11] [i_11 - 1] = ((/* implicit */_Bool) ((arr_38 [i_11 + 1] [i_11 + 2] [i_11 + 2]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20)))));
                        }
                    } 
                } 
                arr_64 [i_16] = ((66584576U) > (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
                var_41 = ((((((/* implicit */int) var_6)) + (((/* implicit */int) var_3)))) > (((/* implicit */int) (signed char)-1)));
            }
            for (signed char i_21 = 2; i_21 < 8; i_21 += 4) 
            {
                var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)65535))) ? (15U) : (((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) 274877890560LL)))), (((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) arr_57 [i_11] [(unsigned char)4] [(unsigned char)2] [i_21 + 3]))))))))));
                arr_67 [(unsigned char)3] [i_16] [(unsigned short)7] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */long long int) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_54 [i_21 + 2]))))) == (max((arr_35 [i_11 + 2] [i_11 - 2] [i_21 + 3] [i_21]), (((/* implicit */long long int) var_3))))));
            }
            for (signed char i_22 = 0; i_22 < 11; i_22 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_23 = 0; i_23 < 11; i_23 += 3) 
                {
                    arr_73 [i_11] [0ULL] [0ULL] [i_23] [i_16] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), ((-(max((((/* implicit */unsigned long long int) (unsigned short)65522)), (22ULL)))))));
                    arr_74 [i_11] [i_16] [(_Bool)1] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32758))) : (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57334))) : (((((/* implicit */_Bool) arr_28 [i_23] [i_22] [i_16] [i_11])) ? (4294967295U) : (var_7)))))));
                }
                for (signed char i_24 = 3; i_24 < 9; i_24 += 1) 
                {
                    arr_77 [(signed char)10] [i_11] [i_16] [i_11] [8U] = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_1))))) + (max((-274877890558LL), (((/* implicit */long long int) arr_68 [i_11] [i_16] [i_16])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_7) % (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) (unsigned short)57343)) ? (((/* implicit */int) arr_23 [i_11] [i_11] [i_22])) : (((/* implicit */int) arr_12 [i_24] [i_22] [i_16] [18ULL])))) : (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                    {
                        arr_80 [i_22] [i_25] [(_Bool)1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned int) arr_32 [(short)1] [i_16]))) ? (((/* implicit */unsigned long long int) (+(arr_24 [i_11 + 1] [i_16] [i_16])))) : (max((3ULL), (((/* implicit */unsigned long long int) var_8)))))) == (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))), ((-(2147483647U))))))));
                        var_43 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) min((134217727U), (((/* implicit */unsigned int) (_Bool)1))))) || (((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1)))))))));
                        var_44 = ((/* implicit */short) ((((/* implicit */_Bool) max((844424930131968ULL), (((/* implicit */unsigned long long int) arr_9 [i_25] [i_16] [i_24] [i_25 - 1]))))) ? (((((/* implicit */int) var_6)) & (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_70 [i_16] [(unsigned char)9] [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_70 [i_16] [8U] [(unsigned short)5] [i_16] [8U] [i_16])) : (((/* implicit */int) arr_70 [i_25 - 1] [i_24] [6LL] [10U] [i_11 - 2] [i_11 - 1]))))));
                    }
                    var_45 = (!(((/* implicit */_Bool) arr_10 [i_24] [i_16] [i_16] [i_24] [i_24] [i_22])));
                }
                var_46 = ((/* implicit */short) arr_39 [i_11 - 1] [i_11 - 1] [i_11] [i_22]);
                var_47 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((_Bool) (unsigned short)16368))) : (((((/* implicit */_Bool) arr_69 [i_11] [(signed char)4] [(_Bool)1] [i_16])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_0)))))));
            }
            /* LoopNest 3 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                for (unsigned char i_27 = 0; i_27 < 11; i_27 += 4) 
                {
                    for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) var_0))));
                            arr_90 [i_28] = ((/* implicit */unsigned int) ((long long int) ((arr_78 [2ULL] [i_16] [(short)8] [i_16] [i_28]) / (((/* implicit */long long int) ((/* implicit */int) var_5))))));
                        }
                    } 
                } 
            } 
            arr_91 [i_11] [2] = ((/* implicit */unsigned int) 9ULL);
        }
    }
    var_49 = ((/* implicit */unsigned long long int) (((+((+(9223372036854775807LL))))) / (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))))));
}
