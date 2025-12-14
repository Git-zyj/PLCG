/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245998
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */unsigned long long int) ((long long int) ((unsigned short) var_3)))) : (max((393216ULL), (((/* implicit */unsigned long long int) arr_2 [i_3 + 2])))))))));
                                arr_11 [i_0] [i_0] [(short)17] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) arr_3 [i_3 - 1]))))));
                                var_13 *= ((/* implicit */unsigned long long int) var_3);
                                var_14 += ((/* implicit */short) max((((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))) > (((/* implicit */int) max((var_3), (arr_7 [i_0] [i_1] [i_2] [4U] [(unsigned char)4]))))))), ((signed char)-63)));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((((/* implicit */int) var_7)) % (((/* implicit */int) arr_3 [i_2])))), (((/* implicit */int) min((arr_1 [i_3] [i_3]), (var_1))))))) == (var_5)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 4; i_5 < 18; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)128)))))))));
                                arr_16 [(signed char)10] [2LL] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((((/* implicit */int) var_6)) << (((((/* implicit */int) var_10)) - (236))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133))) > (var_9))))))) + (((((/* implicit */_Bool) var_8)) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */short) (unsigned char)128))))))))));
                                arr_17 [i_0] [i_2] [(signed char)1] [i_2] [i_6] [i_6] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_2] [18ULL] [i_5] [i_6])) == (((/* implicit */int) (unsigned char)128))))) : ((~(((/* implicit */int) var_11))))))));
                                arr_18 [i_0] [i_0] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_2] [i_5 - 4] [i_2] [i_2])) ? (arr_13 [i_2] [i_5 + 2] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)114)))))) : (((-1731119616893902596LL) / (((/* implicit */long long int) arr_13 [i_2] [i_5 - 4] [i_1] [i_2]))))));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) var_8)), (arr_3 [i_1]))), (var_2)))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118)))))))));
                }
            } 
        } 
    } 
    var_17 -= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)137))));
    /* LoopSeq 4 */
    for (unsigned short i_7 = 1; i_7 < 16; i_7 += 1) 
    {
        var_18 ^= ((/* implicit */unsigned long long int) (unsigned char)127);
        arr_22 [i_7] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_3 [i_7 + 2])))), ((+(((/* implicit */int) arr_3 [i_7 + 1]))))));
        var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((long long int) -4515816141513203964LL))) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) arr_6 [i_7 + 1])))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128)))))))));
        var_20 -= var_1;
        arr_23 [i_7 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130))) * ((~(var_9)))));
    }
    for (short i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_9 = 3; i_9 < 24; i_9 += 1) 
        {
            var_21 = arr_24 [i_9 - 2] [i_9 - 3];
            arr_28 [i_9] [(signed char)22] [i_9] = ((/* implicit */unsigned long long int) arr_27 [i_8] [i_9]);
            arr_29 [0LL] |= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (unsigned char)128)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
            /* LoopSeq 1 */
            for (unsigned int i_10 = 3; i_10 < 23; i_10 += 1) 
            {
                var_22 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_25 [i_9 - 3]))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (arr_30 [i_10] [i_9 + 1] [i_8]) : (((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)126)))))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [(signed char)4] [(signed char)4] [i_10 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
            }
        }
        for (unsigned char i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_12 = 0; i_12 < 25; i_12 += 1) 
            {
                for (short i_13 = 1; i_13 < 24; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) min((((((((/* implicit */int) var_1)) < (((/* implicit */int) var_11)))) ? (((((/* implicit */_Bool) arr_36 [i_8] [i_11] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (5351358637379313979ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_8))))))))))));
                            var_26 -= ((/* implicit */_Bool) (unsigned char)129);
                            arr_42 [i_14] [(signed char)0] [i_14] [i_13 + 1] [i_13 - 1] [i_13 + 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) var_6)))));
                            var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_40 [i_13] [i_13] [16LL] [i_13 - 1] [i_14] [i_13])))));
                        }
                    } 
                } 
            } 
            var_28 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (((unsigned int) var_8))));
            var_29 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_34 [i_11])) : (((/* implicit */int) var_2))))), (max((0U), (((/* implicit */unsigned int) arr_34 [i_8]))))));
            arr_43 [i_11] = ((/* implicit */long long int) arr_35 [i_8]);
            var_30 -= ((/* implicit */signed char) max((((min((5351358637379313989ULL), (((/* implicit */unsigned long long int) var_9)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (var_1))))))), (((/* implicit */unsigned long long int) (unsigned char)255))));
        }
        for (unsigned short i_15 = 0; i_15 < 25; i_15 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_16 = 1; i_16 < 24; i_16 += 1) 
            {
                var_31 *= ((/* implicit */_Bool) var_2);
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((((/* implicit */int) (unsigned short)21446)) - (21437)))))) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) (unsigned char)137))))));
                /* LoopNest 2 */
                for (signed char i_17 = 2; i_17 < 23; i_17 += 1) 
                {
                    for (short i_18 = 1; i_18 < 22; i_18 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned char) (~(13095385436330237627ULL)));
                            var_34 *= ((/* implicit */signed char) var_3);
                            var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)228))));
                        }
                    } 
                } 
            }
            for (unsigned char i_19 = 0; i_19 < 25; i_19 += 1) 
            {
                var_36 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)0)), (arr_48 [i_19] [i_19] [i_15] [i_8] [i_8] [i_8]))))))));
                var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) var_2))));
                arr_56 [i_15] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) ((_Bool) arr_32 [i_8] [(unsigned char)15] [i_15] [i_19]))) : ((-(((/* implicit */int) arr_32 [i_19] [i_15] [i_15] [i_8]))))));
                arr_57 [i_8] [i_15] [i_15] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) -4515816141513203964LL))))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_15] [i_15]))))) | (((/* implicit */int) var_11))))));
                /* LoopNest 2 */
                for (long long int i_20 = 2; i_20 < 24; i_20 += 1) 
                {
                    for (long long int i_21 = 0; i_21 < 25; i_21 += 1) 
                    {
                        {
                            arr_66 [i_15] = ((/* implicit */long long int) arr_45 [i_8]);
                            var_38 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) min(((short)11877), (var_6))))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_22 = 2; i_22 < 24; i_22 += 1) 
            {
                arr_69 [i_22] [i_15] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_68 [i_8] [i_15] [i_22 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_68 [i_22] [i_15] [i_22 - 1])))) << (((((0U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43117))))) - (43092U)))));
                arr_70 [i_8] [i_15] [i_22 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_22 - 2] [i_15])) ? (((/* implicit */int) arr_54 [i_22 - 2] [i_15])) : (((/* implicit */int) arr_54 [i_22 - 1] [i_15]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))));
            }
            arr_71 [i_15] [i_15] [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_53 [i_8] [i_15] [i_8] [i_8] [i_8])))));
            arr_72 [i_8] [(signed char)4] &= ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) var_4)))));
            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)58)), (var_9)))) ? (((((/* implicit */int) var_4)) + (((/* implicit */int) arr_68 [i_15] [i_8] [i_8])))) : (((/* implicit */int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_8] [i_8] [i_15]))))))));
            /* LoopNest 2 */
            for (signed char i_23 = 0; i_23 < 25; i_23 += 1) 
            {
                for (unsigned char i_24 = 3; i_24 < 23; i_24 += 1) 
                {
                    {
                        var_40 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        var_41 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) (unsigned char)118)), (32767LL))), (((/* implicit */long long int) (unsigned char)138))));
                        var_42 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_60 [i_15] [i_23] [i_15] [i_15]))) + (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255)))))));
                        var_43 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_49 [8LL])) ? (((/* implicit */int) arr_49 [8ULL])) : (((/* implicit */int) var_8)))), ((+(((((/* implicit */int) arr_65 [8LL] [i_23] [(unsigned char)12] [i_15] [8LL])) + (((/* implicit */int) (signed char)16))))))));
                    }
                } 
            } 
        }
        var_44 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (signed char)41)), (((((/* implicit */_Bool) min((var_1), ((unsigned char)0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8175)) + (((/* implicit */int) arr_39 [i_8] [i_8] [i_8]))))) : ((+(var_5)))))));
    }
    for (unsigned int i_25 = 2; i_25 < 13; i_25 += 1) 
    {
        var_45 ^= ((/* implicit */unsigned short) arr_47 [(_Bool)1]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_26 = 3; i_26 < 12; i_26 += 1) 
        {
            var_46 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [(unsigned char)0] [i_26 + 3] [i_26 - 1] [i_26]))) < (arr_62 [i_26 - 2] [i_25])));
            var_47 = ((/* implicit */long long int) var_6);
            var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_26] [i_26 - 1] [i_25] [i_26 - 2] [i_25] [i_25 - 2])) ? (arr_8 [i_26] [i_26 + 1] [(_Bool)1] [i_26] [i_25 + 1] [i_25 + 1]) : (arr_8 [i_26] [i_26 + 1] [i_26 - 2] [i_26 - 2] [(_Bool)1] [i_25 - 2])));
            arr_83 [i_25] [i_25] [i_25] |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
        }
        var_49 = ((/* implicit */signed char) var_1);
    }
    for (long long int i_27 = 0; i_27 < 18; i_27 += 1) 
    {
        var_50 = ((/* implicit */unsigned short) ((unsigned char) (short)-28633));
        var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_13 [i_27] [i_27] [i_27] [i_27])) ? (arr_38 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27]) : (((/* implicit */long long int) 3071877539U))))))) ? ((~(((unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_27] [i_27] [(_Bool)1] [i_27] [(_Bool)1])))));
    }
    var_52 = ((/* implicit */unsigned long long int) (signed char)0);
}
