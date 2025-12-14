/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236648
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) (_Bool)0);
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (-3505124700693789361LL)))) ? (((/* implicit */unsigned int) min((var_10), (((/* implicit */int) max((var_13), (((/* implicit */short) arr_2 [i_1] [i_1] [i_0])))))))) : (max((((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (4294967295U))), (((/* implicit */unsigned int) var_7))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 14; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            {
                arr_9 [i_2] [i_2 + 2] [i_2] |= ((/* implicit */unsigned int) (-(((((/* implicit */long long int) 16775168)) + (var_6)))));
                var_15 = ((/* implicit */_Bool) (-(((var_10) * (((/* implicit */int) (_Bool)0))))));
            }
        } 
    } 
    var_16 = ((int) var_8);
    /* LoopSeq 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_17 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (~(9126839752267146730LL)))) ? (arr_11 [(short)23] [(short)23]) : (((/* implicit */long long int) arr_10 [i_4])))));
        /* LoopSeq 1 */
        for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) min((min((arr_10 [i_5 + 1]), (arr_10 [i_5 - 1]))), (((int) arr_10 [i_5 + 2]))));
            var_19 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_13)), (((var_12) ? (((/* implicit */long long int) var_1)) : (var_4))))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4] [i_4] [(unsigned short)2]))))) != (((((/* implicit */_Bool) (unsigned char)255)) ? (var_1) : (((/* implicit */int) var_13)))))))));
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_16 [(unsigned short)12] &= ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) arr_3 [i_6] [i_6])), (var_5)))) + (((/* implicit */int) ((unsigned short) arr_0 [8ULL])))));
        arr_17 [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2411859134405565272LL))));
        arr_18 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -4611686018427387904LL)) ? (((((/* implicit */_Bool) (unsigned char)219)) ? (arr_15 [i_6]) : (arr_15 [i_6]))) : (var_4)));
        arr_19 [i_6] = ((/* implicit */int) arr_12 [i_6] [i_6] [i_6]);
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned int) var_8))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(short)9])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)255))))) ? (max((var_10), (arr_10 [i_6]))) : (((/* implicit */int) arr_12 [i_6] [i_6] [i_6]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) + ((-(var_6)))))));
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3505124700693789363LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_6)));
        var_22 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_12 [17U] [17U] [i_7])))) <= (((/* implicit */int) arr_3 [i_7] [i_7]))));
        /* LoopSeq 2 */
        for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_9 = 2; i_9 < 16; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 18; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_32 [i_7] [6U] [i_9 + 2] [i_10] [i_11]))));
                            var_24 |= var_11;
                        }
                    } 
                } 
            } 
            arr_34 [i_7] [i_8] [i_7] = ((/* implicit */signed char) ((short) arr_13 [i_7] [i_7] [i_7]));
            /* LoopSeq 3 */
            for (int i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [(short)5] [i_8] [i_12] [i_12])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [5] [(unsigned char)10] [i_12] [i_12] [i_12]))))) : ((~(arr_6 [i_7] [17])))));
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32766)) ? (((((/* implicit */_Bool) 2411859134405565294LL)) ? (((/* implicit */int) var_3)) : (-1625103226))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4390360105250823114LL))))))))));
            }
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                arr_42 [i_7] [7] [i_7] [i_13] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))) : (11U)))));
                var_27 = ((/* implicit */unsigned int) arr_30 [i_7] [i_8] [14LL] [i_13 - 1]);
            }
            for (signed char i_14 = 0; i_14 < 18; i_14 += 1) 
            {
                var_28 ^= (-(((/* implicit */int) arr_27 [i_7] [16] [(_Bool)1])));
                var_29 = ((/* implicit */unsigned short) arr_33 [i_7] [15U] [i_7] [i_7] [i_14] [(signed char)15] [i_14]);
                /* LoopSeq 3 */
                for (unsigned int i_15 = 0; i_15 < 18; i_15 += 3) 
                {
                    var_30 += ((/* implicit */unsigned int) ((int) var_13));
                    var_31 += ((/* implicit */unsigned char) ((_Bool) arr_32 [i_7] [(signed char)8] [i_8] [i_14] [i_7]));
                    var_32 &= ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-121)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
                }
                for (long long int i_16 = 0; i_16 < 18; i_16 += 1) 
                {
                    var_33 = ((/* implicit */int) max((var_33), (((((/* implicit */_Bool) arr_32 [i_7] [14U] [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_8 [14ULL] [i_14])) : (((/* implicit */int) ((unsigned short) var_11)))))));
                    var_34 = ((/* implicit */signed char) 15);
                    /* LoopSeq 1 */
                    for (int i_17 = 0; i_17 < 18; i_17 += 4) 
                    {
                        var_35 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7744)) ? (arr_26 [i_17] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) arr_2 [13] [(short)16] [13]))))))));
                        arr_53 [i_7] [15] [i_7] [16U] [i_17] = ((/* implicit */short) ((arr_3 [i_8] [i_14]) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_8] [i_8])))));
                        arr_54 [(unsigned char)17] [i_7] [i_17] = ((/* implicit */int) ((arr_29 [i_7] [i_8] [i_14] [i_16] [i_7]) >= ((~(((/* implicit */int) (unsigned char)251))))));
                    }
                    var_36 = ((/* implicit */long long int) ((_Bool) 30960742U));
                }
                for (unsigned long long int i_18 = 1; i_18 < 16; i_18 += 4) 
                {
                    var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */long long int) 1228056745U)) + (4352916085050477518LL))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 1) 
                    {
                        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)3840))) ? (-2411859134405565273LL) : (((/* implicit */long long int) 1228056745U))));
                        var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_13))));
                    }
                    for (long long int i_20 = 0; i_20 < 18; i_20 += 4) 
                    {
                        var_40 = ((/* implicit */short) var_0);
                        var_41 = ((/* implicit */long long int) var_13);
                        arr_63 [i_7] [i_7] [i_14] [i_14] [i_7] = (unsigned char)4;
                        var_42 *= ((/* implicit */_Bool) (~(arr_7 [i_14] [i_20])));
                        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) 0)) ? (-9223372036854775796LL) : (-3505124700693789364LL)));
                    }
                    for (unsigned char i_21 = 4; i_21 < 17; i_21 += 4) 
                    {
                        var_44 = ((/* implicit */unsigned char) arr_10 [i_7]);
                        var_45 = ((/* implicit */unsigned short) var_3);
                        var_46 = var_6;
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 18; i_22 += 3) 
                    {
                        var_47 -= ((/* implicit */long long int) var_9);
                        var_48 ^= ((/* implicit */long long int) (unsigned short)25390);
                    }
                    arr_70 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-64)) / (((/* implicit */int) (signed char)55))));
                    arr_71 [i_7] [i_8] [i_14] [i_7] = ((/* implicit */_Bool) (((-(arr_39 [i_18] [i_7] [i_7]))) / ((+(((/* implicit */int) arr_2 [i_14] [i_14] [i_14]))))));
                }
            }
            /* LoopSeq 3 */
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
            {
                arr_75 [i_7] [i_8] [i_8] [i_7] = ((/* implicit */signed char) ((((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_13)) - (24363))))) <= (((((/* implicit */int) (short)25)) << (((arr_6 [i_7] [i_7]) + (1852194856)))))));
                var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((int) var_10))) : (((unsigned int) 2411859134405565269LL)))))));
                /* LoopNest 2 */
                for (long long int i_24 = 0; i_24 < 18; i_24 += 3) 
                {
                    for (long long int i_25 = 0; i_25 < 18; i_25 += 1) 
                    {
                        {
                            var_50 ^= ((/* implicit */long long int) ((var_6) <= (((/* implicit */long long int) var_8))));
                            var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_8] [i_23] [i_25])) ? (((/* implicit */int) arr_51 [i_7] [i_24] [i_7] [i_7])) : (((/* implicit */int) arr_13 [i_7] [i_8] [19LL]))));
                            arr_81 [i_7] = ((/* implicit */unsigned long long int) ((int) arr_27 [i_7] [i_8] [i_7]));
                        }
                    } 
                } 
            }
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
            {
                var_52 = ((/* implicit */short) ((int) arr_2 [i_7] [i_8] [i_26]));
                var_53 |= ((((/* implicit */_Bool) (unsigned short)42963)) ? (((((/* implicit */_Bool) var_11)) ? (arr_36 [i_8] [6U] [4U] [i_7]) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_43 [2ULL] [i_8] [i_7] [2ULL]))))));
                arr_84 [(unsigned char)12] [i_8] &= ((/* implicit */long long int) var_11);
            }
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
            {
                var_54 = ((/* implicit */unsigned int) var_6);
                arr_87 [14U] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_8])) ? (-4511872015317725580LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                arr_88 [i_7] [i_7] [5LL] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)12542))));
                /* LoopSeq 2 */
                for (unsigned char i_28 = 0; i_28 < 18; i_28 += 1) /* same iter space */
                {
                    arr_91 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) -4305993347825977684LL);
                    arr_92 [i_7] [i_7] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) == (arr_77 [i_8] [i_27])));
                    var_55 |= ((/* implicit */int) ((arr_68 [12ULL] [i_27] [(_Bool)1] [12LL] [i_27] [(unsigned char)6] [i_27]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_7]))) : (4039862305U)));
                    var_56 = ((/* implicit */int) (~(arr_23 [i_8])));
                }
                for (unsigned char i_29 = 0; i_29 < 18; i_29 += 1) /* same iter space */
                {
                    var_57 = ((/* implicit */signed char) (unsigned char)21);
                    var_58 = ((/* implicit */unsigned int) (~(var_10)));
                }
            }
            /* LoopSeq 2 */
            for (long long int i_30 = 0; i_30 < 18; i_30 += 1) 
            {
                var_59 = ((/* implicit */unsigned short) ((arr_67 [i_7] [i_8] [i_8] [8] [i_30]) & (arr_67 [(_Bool)1] [i_8] [i_8] [i_8] [(unsigned short)7])));
                arr_98 [i_7] [3ULL] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_58 [i_7] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_7]))) : (var_11)));
                var_60 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)63))));
            }
            for (unsigned short i_31 = 2; i_31 < 14; i_31 += 4) 
            {
                var_61 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_7] [i_8] [i_7] [i_31 + 1])) <= (((/* implicit */int) arr_30 [5ULL] [i_8] [i_31 - 2] [i_31 + 1]))));
                var_62 = ((/* implicit */unsigned int) ((arr_43 [i_7] [i_31 + 4] [i_31 + 3] [i_31 + 4]) ? (((/* implicit */int) arr_32 [i_31 + 3] [i_7] [i_31 + 2] [i_31 - 2] [i_31 + 1])) : (((/* implicit */int) arr_32 [i_31 + 4] [i_7] [i_31 + 4] [i_31 - 1] [i_31 + 4]))));
                var_63 = ((/* implicit */signed char) max((var_63), (((/* implicit */signed char) var_0))));
            }
        }
        for (unsigned char i_32 = 0; i_32 < 18; i_32 += 4) 
        {
            arr_105 [i_32] [i_32] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-8006)) ? (((/* implicit */int) arr_68 [i_32] [(unsigned char)12] [i_32] [i_32] [(unsigned char)12] [i_32] [i_32])) : (((/* implicit */int) (short)-12520))));
            arr_106 [i_7] [i_32] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_100 [i_32])) % (((((/* implicit */_Bool) 893788134)) ? (var_10) : (((/* implicit */int) var_0))))));
            arr_107 [i_7] [9U] [14ULL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_7])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_32])))));
        }
    }
}
