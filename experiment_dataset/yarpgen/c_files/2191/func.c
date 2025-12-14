/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2191
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((((/* implicit */_Bool) ((short) var_4))) ? (max((((/* implicit */int) var_5)), (((((/* implicit */int) var_7)) >> (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) var_5))))) : ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))))))))));
    var_11 ^= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) 4745103513492843267LL)) ? (((/* implicit */int) (unsigned short)58498)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) - (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (136339441844224LL)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_12 [i_0 + 1] [i_0 + 1] [i_2] [i_3] = ((/* implicit */unsigned char) var_1);
                    var_12 = ((/* implicit */unsigned char) var_3);
                    var_13 = ((/* implicit */unsigned short) var_5);
                    var_14 *= ((/* implicit */unsigned char) arr_1 [i_0 + 1]);
                }
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    var_15 = ((/* implicit */short) (unsigned char)32);
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_0]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)23452))) : (arr_8 [i_0 + 1])))) ? (((/* implicit */int) ((_Bool) (unsigned char)49))) : ((-(((/* implicit */int) var_8))))));
                }
                arr_17 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+((~(((/* implicit */int) var_4))))))) ^ (((long long int) arr_16 [i_0] [i_0] [i_1] [i_2]))));
            }
            var_17 = ((/* implicit */unsigned char) var_6);
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min(((short)32614), (((/* implicit */short) (unsigned char)241))))))))));
        }
        arr_18 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) var_2)), (min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_2))))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) (unsigned short)33147);
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        arr_33 [i_0] [i_5] [i_0 + 1] [i_0] [i_0 + 1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_10 [i_5] [i_6] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (short)-13485))));
                        var_20 = ((/* implicit */long long int) var_8);
                    }
                    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        arr_37 [i_0] [i_0] [i_6] [i_0] [i_0] = arr_29 [i_9] [i_7] [i_0] [i_5] [i_0];
                        var_21 -= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) var_2)))));
                        var_22 = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) var_3)))));
                        arr_38 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    arr_39 [i_0] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_6] [i_7] [i_6] [i_5])) >> (((arr_8 [i_0 + 1]) - (1561912579864104834LL))))))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)20649))));
                    /* LoopSeq 2 */
                    for (short i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        var_24 ^= ((/* implicit */unsigned short) arr_8 [i_7]);
                        var_25 = ((/* implicit */_Bool) var_5);
                        var_26 = ((/* implicit */_Bool) arr_32 [i_0] [i_0 + 1]);
                        arr_42 [i_0] [i_5] [i_6] [i_7] [i_6] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)16)) ^ (((/* implicit */int) (unsigned short)42094))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23452)) ? (((/* implicit */int) (short)23452)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) arr_20 [i_0] [i_5] [i_6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_0 [i_0 + 1]))));
                        var_28 += ((/* implicit */short) ((((/* implicit */int) arr_31 [i_0] [i_5] [i_5] [i_6] [i_7] [i_11])) + (((/* implicit */int) (unsigned short)18244))));
                    }
                    var_29 = ((/* implicit */_Bool) arr_34 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
                }
                var_30 = ((/* implicit */short) (((((-(((/* implicit */int) arr_4 [i_0])))) + (2147483647))) >> (((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_31 [i_0] [i_5] [i_5] [i_5] [i_6] [i_6])))) - (64069)))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_31 = ((unsigned short) ((max((arr_41 [i_5] [i_5] [i_5] [i_0] [i_12]), (((/* implicit */long long int) var_5)))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23453)))));
                var_32 *= ((/* implicit */short) ((max((((/* implicit */long long int) (_Bool)1)), (409185716377503896LL))) >> ((((~(((/* implicit */int) (unsigned char)234)))) + (278)))));
                var_33 &= ((/* implicit */short) 7462524837550655906LL);
            }
            for (short i_13 = 0; i_13 < 17; i_13 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_14 = 1; i_14 < 15; i_14 += 2) 
                {
                    var_34 = ((/* implicit */long long int) arr_32 [i_0] [i_5]);
                    /* LoopSeq 3 */
                    for (long long int i_15 = 2; i_15 < 15; i_15 += 2) 
                    {
                        var_35 ^= ((/* implicit */_Bool) min((((long long int) max((((/* implicit */unsigned char) var_4)), (var_8)))), (((long long int) arr_5 [i_0] [i_5] [i_13]))));
                        arr_60 [i_13] [i_15] = ((/* implicit */unsigned short) (_Bool)1);
                        arr_61 [i_0] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((long long int) (_Bool)1))))) ? (409185716377503896LL) : (min((max((((/* implicit */long long int) arr_27 [i_0] [i_5] [i_5] [i_14] [i_15] [i_5])), (arr_45 [i_0] [i_0] [i_5] [i_13] [i_13] [i_0] [i_15]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_28 [i_0] [i_5] [i_5] [i_14] [i_15 - 2] [i_13])))))))));
                        var_36 = ((/* implicit */long long int) (unsigned short)32768);
                    }
                    for (unsigned char i_16 = 0; i_16 < 17; i_16 += 2) 
                    {
                        var_37 += ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) (short)21822)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (min((((/* implicit */long long int) (unsigned short)28672)), (-3688860452353814872LL))))));
                        var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) arr_24 [i_0 + 1] [i_5] [i_0 + 1] [i_14]))));
                        var_39 *= ((/* implicit */short) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_6))));
                    }
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) (unsigned char)169))), ((~((((_Bool)1) ? (((/* implicit */int) (short)-8252)) : (((/* implicit */int) var_5))))))));
                        var_41 = ((/* implicit */unsigned short) min((min((((/* implicit */int) (short)-548)), (((((/* implicit */int) arr_46 [i_0] [i_0] [i_0 + 1])) * (((/* implicit */int) (short)-21822)))))), (((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned short)20649))))));
                        var_42 *= arr_64 [i_17 - 1] [i_14 + 2] [i_14 - 1] [i_0] [i_13] [i_0] [i_0];
                        var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) (_Bool)1))));
                    }
                    var_44 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2529764261870764694LL)));
                }
                /* vectorizable */
                for (unsigned char i_18 = 0; i_18 < 17; i_18 += 4) 
                {
                    arr_70 [i_0] [i_0] [i_5] [i_0] [i_18] [i_13] = ((/* implicit */unsigned short) (~(arr_59 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                    var_45 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_65 [i_0] [i_5] [i_13] [i_13] [i_5] [i_0 + 1] [i_18])) >> (((((/* implicit */int) var_6)) - (63179))))) < (((/* implicit */int) arr_67 [i_0]))));
                    /* LoopSeq 4 */
                    for (unsigned char i_19 = 2; i_19 < 15; i_19 += 2) 
                    {
                        arr_75 [i_13] = ((/* implicit */_Bool) arr_51 [i_0 + 1] [i_5] [i_5] [i_19]);
                        arr_76 [i_5] [i_5] [i_13] [i_18] [i_0] |= ((/* implicit */unsigned short) var_8);
                    }
                    for (long long int i_20 = 0; i_20 < 17; i_20 += 1) 
                    {
                        arr_80 [i_0] [i_5] [i_13] [i_13] [i_20] = ((/* implicit */long long int) ((((/* implicit */int) arr_62 [i_0] [i_0] [i_0] [i_0] [i_0])) < ((~(((/* implicit */int) (_Bool)0))))));
                        var_46 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8143))));
                        var_47 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
                    }
                    for (unsigned short i_21 = 0; i_21 < 17; i_21 += 4) 
                    {
                        arr_84 [i_0] [i_5] [i_13] [i_18] [i_21] [i_0] = ((/* implicit */unsigned char) arr_58 [i_0] [i_0] [i_0] [i_18] [i_21]);
                        var_48 = ((/* implicit */long long int) (((+(((/* implicit */int) var_9)))) | (((((/* implicit */int) (unsigned char)128)) + (((/* implicit */int) (_Bool)1))))));
                        var_49 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) var_2)))));
                    }
                    for (unsigned char i_22 = 4; i_22 < 16; i_22 += 3) 
                    {
                        var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_0] [i_5] [i_13] [i_18] [i_22] [i_13])) | (((/* implicit */int) arr_77 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_29 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_82 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_51 = arr_64 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1];
                    }
                }
                /* LoopSeq 1 */
                for (unsigned char i_23 = 0; i_23 < 17; i_23 += 3) 
                {
                    var_52 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned char) var_1))), ((~(((long long int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) ((min((((/* implicit */int) min((var_8), (arr_77 [i_0] [i_0] [i_0])))), (((var_2) ? (((/* implicit */int) (unsigned short)24951)) : (((/* implicit */int) var_0)))))) | ((+((+(((/* implicit */int) var_5)))))))))));
                        arr_91 [i_13] [i_5] [i_13] [i_13] [i_24] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % ((+(((/* implicit */int) var_1))))));
                        var_54 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)17)) ? (3355937108797643371LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-6300)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (short)-26696))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0 + 1]))))) : (((((/* implicit */int) var_8)) >> (((((/* implicit */int) (short)-1)) + (1)))))))));
                        var_55 = arr_25 [i_0] [i_5] [i_13] [i_23];
                    }
                }
                var_56 = ((/* implicit */short) min((var_56), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) (unsigned char)175)) - (172)))))) ? (((/* implicit */int) ((short) (short)-30362))) : (((/* implicit */int) (unsigned short)65535))))) ? (((long long int) ((short) var_3))) : (((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))))))));
            }
        }
    }
}
