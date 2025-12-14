/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242723
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
    var_11 = ((/* implicit */int) var_10);
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_12 |= ((((/* implicit */_Bool) (unsigned short)11813)) ? (min((((((/* implicit */int) (unsigned short)672)) ^ (((/* implicit */int) (short)10473)))), (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 1])));
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) arr_2 [i_0]))));
            arr_5 [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned int) arr_4 [i_0 + 1] [i_1] [i_1])), (3869001154U))));
            var_14 = (short)-27639;
        }
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    {
                        var_15 = ((unsigned int) arr_13 [(signed char)2] [(signed char)2] [(signed char)2] [i_3]);
                        /* LoopSeq 4 */
                        for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            arr_16 [i_2] = ((/* implicit */_Bool) 3429241839U);
                            var_16 = ((/* implicit */unsigned int) ((int) ((short) ((16758232727142610755ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31930)))))));
                            var_17 = ((/* implicit */long long int) max(((unsigned char)233), (((/* implicit */unsigned char) ((signed char) 368154378635430995LL)))));
                            var_18 -= max((min((((/* implicit */unsigned long long int) 4)), (((3190808527697910195ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)91))))))), (((/* implicit */unsigned long long int) arr_13 [i_5] [i_3] [i_2] [5])));
                        }
                        for (short i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
                        {
                            var_19 = ((154109039) << (((/* implicit */int) (_Bool)1)));
                            var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)126)) & (((/* implicit */int) (unsigned char)170))))) ? (max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117))) != (var_8)))), (arr_18 [i_0 + 1] [i_2] [i_3] [i_4] [i_6]))) : (((/* implicit */int) arr_3 [i_0]))))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)24560))))));
                        }
                        for (short i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [(short)9] [i_0] [i_7] = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (unsigned char)163)))), (((/* implicit */int) ((((/* implicit */_Bool) 28U)) || (((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_4] [i_7]))))))), (((/* implicit */int) arr_22 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] [(unsigned short)10]))));
                            var_22 = ((/* implicit */unsigned long long int) 2305825417027649536LL);
                            var_23 = ((/* implicit */unsigned char) var_7);
                        }
                        for (short i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) ((unsigned short) ((int) (signed char)1)));
                            arr_26 [i_0] [16] [i_4] [16] = ((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4] [i_8]);
                            var_25 -= ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned short) arr_8 [i_0 - 1]))), (7584432949335178768LL)));
                            var_26 ^= ((/* implicit */signed char) arr_4 [i_0] [i_2] [i_3]);
                        }
                    }
                } 
            } 
            arr_27 [i_0] [i_0] = ((/* implicit */_Bool) max((((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2])) || (((/* implicit */_Bool) (unsigned char)241))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] [i_2])), (((unsigned char) (unsigned short)31)))))));
            arr_28 [i_2] = ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
        }
        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) min(((unsigned short)33610), (min((arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]), (arr_11 [(unsigned short)16] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))))));
            arr_33 [i_0] [(unsigned short)9] = ((/* implicit */unsigned char) ((short) (unsigned char)229));
        }
        for (int i_10 = 2; i_10 < 13; i_10 += 4) 
        {
            arr_36 [i_0] [10U] [i_0 + 1] = ((/* implicit */unsigned short) arr_1 [10U] [i_10]);
            var_28 = arr_8 [i_0];
        }
        arr_37 [i_0] = ((/* implicit */short) (unsigned short)11);
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) arr_15 [(_Bool)1] [i_0] [i_0] [11ULL] [i_0]))));
    }
    for (unsigned long long int i_11 = 1; i_11 < 11; i_11 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) var_9))));
        var_31 = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) (_Bool)1))));
        arr_40 [i_11] = ((/* implicit */unsigned char) (signed char)-39);
        arr_41 [i_11] [i_11] = ((/* implicit */long long int) var_2);
    }
    for (unsigned long long int i_12 = 1; i_12 < 11; i_12 += 3) /* same iter space */
    {
        var_32 = ((/* implicit */short) var_9);
        arr_46 [i_12 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((((((/* implicit */_Bool) arr_12 [13U] [i_12] [i_12])) ? (((/* implicit */int) arr_4 [i_12] [i_12] [i_12])) : (((/* implicit */int) (short)5822)))) != (((/* implicit */int) (signed char)107))))));
        var_33 = 1688511346566940873ULL;
        /* LoopSeq 1 */
        for (short i_13 = 0; i_13 < 13; i_13 += 2) 
        {
            /* LoopSeq 3 */
            for (signed char i_14 = 1; i_14 < 9; i_14 += 3) /* same iter space */
            {
                var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_10))) ? (max((((/* implicit */int) arr_24 [i_12] [i_13] [i_14])), (-1550211288))) : (((/* implicit */int) arr_21 [(signed char)10] [(signed char)10] [(signed char)10]))))) && (((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned long long int) var_3)), (17627843548602363545ULL))))));
                var_35 = ((/* implicit */_Bool) max((((long long int) arr_50 [i_12] [i_13] [i_14])), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)102)) ? (-1184486947) : (((/* implicit */int) ((_Bool) 1688511346566940851ULL))))))));
                arr_51 [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (short)14388))) && (((/* implicit */_Bool) (short)-12789))));
            }
            for (signed char i_15 = 1; i_15 < 9; i_15 += 3) /* same iter space */
            {
                arr_56 [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */int) arr_20 [i_12 + 2] [i_12 + 1] [i_12 + 2] [i_12 + 2] [i_12 - 1] [i_15 + 3] [i_15 + 1])), (arr_42 [i_15]))));
                var_36 ^= ((/* implicit */int) arr_10 [i_12 + 2] [i_12 + 2] [i_13] [16]);
                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) max((((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) 666231992))))) ? (((/* implicit */int) arr_14 [i_12] [i_12])) : (max((((/* implicit */int) var_9)), (((666232011) / (((/* implicit */int) (unsigned char)8))))))));
                arr_57 [i_12] [i_12] [i_15] [(unsigned short)11] = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_13 [8ULL] [8ULL] [i_15 - 1] [i_13])) ? (var_1) : (((/* implicit */unsigned long long int) arr_18 [i_15] [i_12 + 2] [i_13] [i_12 - 1] [i_12 + 2])))))) ? (((/* implicit */int) ((unsigned char) arr_48 [i_12]))) : (((/* implicit */int) (short)-2456)));
            }
            for (signed char i_16 = 1; i_16 < 9; i_16 += 3) /* same iter space */
            {
                var_38 = ((/* implicit */short) arr_58 [i_12]);
                var_39 = ((/* implicit */int) max((var_39), (arr_18 [i_12] [i_12] [i_12] [i_12] [i_12])));
                arr_60 [i_12] [i_13] [i_16] [i_16 - 1] = ((/* implicit */unsigned char) (unsigned short)15222);
            }
            arr_61 [i_12] = ((/* implicit */short) ((((/* implicit */int) max((arr_17 [i_12] [i_12 + 2] [i_12 + 2] [i_12 + 1] [i_12 + 1] [i_12 + 2] [i_12]), (((/* implicit */unsigned short) arr_22 [(_Bool)1] [(_Bool)1] [i_12 + 2] [i_12] [i_12] [i_13] [i_13]))))) << (((((((/* implicit */int) ((short) var_2))) | (((/* implicit */int) (short)-32753)))) + (32650)))));
            arr_62 [i_13] = ((/* implicit */unsigned char) arr_34 [i_12] [i_12] [i_13]);
        }
    }
    for (unsigned long long int i_17 = 1; i_17 < 11; i_17 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_18 = 0; i_18 < 13; i_18 += 4) 
        {
            arr_68 [i_17] = ((/* implicit */_Bool) var_2);
            var_40 += ((/* implicit */unsigned long long int) (unsigned short)31930);
            /* LoopNest 2 */
            for (unsigned short i_19 = 0; i_19 < 13; i_19 += 2) 
            {
                for (unsigned short i_20 = 4; i_20 < 9; i_20 += 2) 
                {
                    {
                        arr_74 [i_17 - 1] = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) arr_63 [i_18]))), (max((arr_59 [i_20 + 2] [i_19] [(_Bool)1] [(_Bool)1]), (((/* implicit */int) arr_44 [i_17 + 2] [i_20 - 2]))))));
                        arr_75 [i_20] [i_19] [(_Bool)1] [i_17] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_59 [i_17] [i_18] [i_19] [(unsigned char)4])), (max((11481090517597562484ULL), (arr_67 [i_17 - 1])))));
                    }
                } 
            } 
            arr_76 [(unsigned char)10] [i_18] = ((/* implicit */short) ((unsigned short) ((short) ((((/* implicit */int) arr_7 [i_17] [i_17])) << (((var_6) - (9360816620886624084ULL)))))));
            var_41 += ((/* implicit */_Bool) max((((short) min(((unsigned short)21936), (((/* implicit */unsigned short) (signed char)124))))), (((/* implicit */short) arr_47 [10] [i_18]))));
        }
        for (unsigned char i_21 = 0; i_21 < 13; i_21 += 1) 
        {
            arr_80 [i_17 + 1] = ((/* implicit */_Bool) max(((unsigned short)31926), (((/* implicit */unsigned short) var_2))));
            /* LoopSeq 3 */
            for (unsigned short i_22 = 0; i_22 < 13; i_22 += 3) /* same iter space */
            {
                var_42 = ((/* implicit */signed char) ((long long int) arr_69 [(unsigned char)4] [(unsigned char)4] [(unsigned char)4]));
                /* LoopNest 2 */
                for (signed char i_23 = 0; i_23 < 13; i_23 += 4) 
                {
                    for (unsigned short i_24 = 0; i_24 < 13; i_24 += 2) 
                    {
                        {
                            var_43 += ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) -1828942887))), (-310022466)));
                            var_44 = ((/* implicit */int) 16625727611593155444ULL);
                            arr_89 [i_17] [i_24] [i_22] [i_17] [(short)8] [i_21] [(short)8] &= ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) | (((((((((/* implicit */int) (short)-32761)) + (2147483647))) >> (((var_8) - (8090658688225824098ULL))))) << (((((/* implicit */int) arr_83 [i_23] [i_23] [i_23])) + (24471)))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_25 = 0; i_25 < 13; i_25 += 3) /* same iter space */
            {
                var_45 = ((/* implicit */unsigned char) max((var_1), (((/* implicit */unsigned long long int) (unsigned char)0))));
                var_46 += ((/* implicit */long long int) (short)22292);
                /* LoopSeq 1 */
                for (unsigned long long int i_26 = 0; i_26 < 13; i_26 += 2) 
                {
                    var_47 *= ((/* implicit */unsigned long long int) -1);
                    /* LoopSeq 1 */
                    for (unsigned int i_27 = 0; i_27 < 13; i_27 += 4) 
                    {
                        arr_98 [i_25] [i_21] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)24261))) - (max((((/* implicit */unsigned long long int) ((unsigned short) 6660976228266824LL))), (((((/* implicit */_Bool) arr_79 [i_26])) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-108)))))))));
                        var_48 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_39 [i_17 - 1])) ? (arr_39 [i_17 + 1]) : (arr_39 [i_17 - 1]))), (((/* implicit */int) ((_Bool) arr_39 [i_17 - 1])))));
                    }
                    var_49 = ((/* implicit */long long int) (unsigned short)31925);
                }
                arr_99 [8LL] [i_21] [i_25] [i_25] |= ((/* implicit */signed char) arr_84 [i_21] [i_25]);
                arr_100 [i_17 + 1] [i_21] [i_25] = ((/* implicit */_Bool) ((arr_52 [i_17 - 1] [i_17 + 1] [i_17 + 2] [i_17 - 1]) % (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_94 [i_17] [i_21] [i_17 - 1] [i_17])), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (6660976228266843LL))))))));
            }
            for (unsigned long long int i_28 = 1; i_28 < 9; i_28 += 2) 
            {
                var_50 = ((/* implicit */unsigned char) arr_9 [i_21] [i_28]);
                var_51 = ((/* implicit */signed char) min((max((((long long int) (_Bool)1)), (((/* implicit */long long int) ((unsigned char) arr_67 [i_21]))))), (arr_49 [i_17] [i_17] [i_28 + 3])));
            }
            arr_103 [i_17] [i_17 - 1] [i_17] &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_58 [i_21])), ((unsigned char)217)));
        }
        var_52 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (_Bool)1)), (((long long int) ((arr_49 [i_17] [i_17] [i_17 - 1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31930))))))));
        var_53 ^= ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) 6660976228266847LL)) / (var_1))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) (short)-13896)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33606))) : (18446744073709551615ULL)))));
    }
    var_54 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2145005823)) ? (((((_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_8))) : (((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    var_55 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_2)), (var_1)));
}
