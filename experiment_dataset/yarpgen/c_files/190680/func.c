/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190680
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
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) - (var_3)));
    var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */_Bool) 240518168576ULL)) ? ((-(9223372036854775807LL))) : (var_17)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) var_17);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (-((-(5ULL)))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)212)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 8; i_2 += 2) 
        {
            arr_10 [i_1] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)65))) & (7042582576754532565LL)));
            /* LoopSeq 2 */
            for (long long int i_3 = 1; i_3 < 8; i_3 += 4) 
            {
                arr_14 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_2 + 1]))));
                arr_15 [i_2] [i_2] [i_1] [i_3] = ((unsigned long long int) ((var_4) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) arr_9 [i_1] [i_2] [i_1]))));
            }
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                var_23 = ((/* implicit */long long int) max((var_23), ((+((-(arr_13 [i_1])))))));
                /* LoopSeq 4 */
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    var_24 = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
                    arr_20 [i_1] [0U] [i_2] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2 + 2])) && (((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 1]))));
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [(unsigned char)19])) ? (arr_17 [0LL] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))))) & (((/* implicit */unsigned long long int) arr_11 [(signed char)8] [i_2 - 1])))))));
                }
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    arr_23 [i_6] [i_2] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (~(((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) arr_22 [i_1] [i_2 - 1] [i_2]))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_7] [i_1] &= ((/* implicit */unsigned int) var_15);
                        var_26 = arr_18 [i_2 + 2] [i_2];
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5)))) * (((((/* implicit */_Bool) (unsigned short)41539)) ? (335133784U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79)))))));
                        var_28 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41549))))) : (((/* implicit */int) ((unsigned char) (signed char)0)))));
                        var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32767))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) var_0);
                        var_31 += ((/* implicit */unsigned long long int) (unsigned short)0);
                        var_32 = arr_4 [i_2];
                        arr_32 [i_1] [i_1] [i_4] [i_6] [i_2] = ((/* implicit */long long int) (~(arr_17 [i_2] [i_2 + 2])));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) -1202339583334507282LL)))))));
                        arr_36 [i_2] = arr_4 [i_1];
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_1] [i_2] [i_4] [i_6] [i_2 + 1])) ? (arr_17 [i_2] [i_2 - 1]) : (((((/* implicit */_Bool) 825555067U)) ? (((/* implicit */unsigned long long int) 2098343009)) : (var_14)))));
                    }
                    var_35 = arr_12 [i_1] [i_1] [i_4] [i_1];
                }
                for (unsigned long long int i_10 = 1; i_10 < 8; i_10 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_10 - 1] [i_10] [i_10] [i_10 + 2] [i_10 + 2] [i_10])) && ((!((_Bool)1)))));
                    var_37 = (i_2 % 2 == zero) ? (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_10 + 2])) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (unsigned char)43)))) >> (((arr_21 [i_2] [i_10 + 2] [i_10 + 2] [i_10 - 1] [i_2]) - (666857306)))))) : (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_10 + 2])) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (unsigned char)43)))) >> (((((arr_21 [i_2] [i_10 + 2] [i_10 + 2] [i_10 - 1] [i_2]) + (666857306))) + (866927884))))));
                }
                for (unsigned long long int i_11 = 1; i_11 < 8; i_11 += 1) /* same iter space */
                {
                    arr_41 [i_1] [i_2 + 2] [i_1] [i_11] [1ULL] [i_2] = ((((/* implicit */_Bool) -1)) ? (2013784074U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))));
                    arr_42 [i_2] [i_2] [i_4] [(short)1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) 2576001070U))) - (((((/* implicit */_Bool) arr_35 [i_1] [i_2] [i_4] [i_4] [i_11 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_2]))) : (var_14)))));
                    var_38 = ((/* implicit */signed char) (-(((/* implicit */int) arr_29 [i_1] [i_11] [2] [i_11] [i_1] [i_11 + 1] [i_2 + 1]))));
                    var_39 = ((/* implicit */unsigned short) max((var_39), (arr_35 [i_1] [(signed char)8] [i_4] [i_11] [(unsigned char)2])));
                }
            }
            var_40 += (!(((/* implicit */_Bool) -583639609)));
        }
        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 3) 
        {
            arr_45 [i_1] [i_12] [i_12] = ((/* implicit */unsigned short) ((_Bool) (~(7042582576754532576LL))));
            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_13))) ? (((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) (signed char)-114)))) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27056))) % (18446743833191383017ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_12])) ? (arr_16 [i_1] [i_1] [i_12]) : (((((/* implicit */_Bool) 3502610871U)) ? (((/* implicit */long long int) 2281183221U)) : (9223372036854775807LL))))))));
        }
        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 4) 
        {
            var_42 += ((/* implicit */signed char) ((arr_12 [i_1] [i_13] [(short)3] [i_13]) < (((/* implicit */long long int) (+(arr_11 [i_13] [i_13]))))));
            var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) arr_44 [i_1]))));
            /* LoopNest 2 */
            for (unsigned int i_14 = 1; i_14 < 9; i_14 += 2) 
            {
                for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    {
                        var_44 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9223372028264841216LL))))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (18446743833191383020ULL)))));
                        arr_55 [i_1] [i_13] [i_14] [i_14] [6LL] = ((/* implicit */unsigned long long int) arr_53 [i_1] [8ULL] [i_1] [i_1] [i_1]);
                    }
                } 
            } 
        }
        for (long long int i_16 = 0; i_16 < 10; i_16 += 2) 
        {
            var_45 = ((/* implicit */unsigned long long int) (-(arr_53 [i_1] [i_16] [i_16] [i_1] [i_1])));
            var_46 = ((/* implicit */unsigned short) max((((unsigned int) ((((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_1] [i_16] [i_16] [i_16])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)58))))), (arr_4 [i_1])));
            var_47 = ((/* implicit */_Bool) arr_5 [i_16]);
        }
        /* LoopNest 2 */
        for (unsigned short i_17 = 0; i_17 < 10; i_17 += 2) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 4) 
            {
                {
                    var_48 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_61 [i_18] [i_17]) >> (((arr_61 [i_17] [i_1]) - (4122603273U)))))), (((16072007452626281560ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_18] [i_18] [i_18] [i_18] [(_Bool)1] [i_1])) ? (1451668189) : (arr_21 [i_18] [i_18] [i_18] [i_17] [i_18]))))))));
                    var_49 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)198))) | (arr_50 [i_18])));
                    var_50 = ((/* implicit */int) ((unsigned int) ((((-7266092578539021144LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_1] [4U] [i_17] [i_1] [i_1]))))) ? (max((8066607915060498098ULL), (((/* implicit */unsigned long long int) 1435909708U)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)57))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_19 = 3; i_19 < 9; i_19 += 3) 
        {
            /* LoopSeq 3 */
            for (int i_20 = 0; i_20 < 10; i_20 += 3) 
            {
                arr_68 [i_1] [i_19 + 1] [i_20] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 8066607915060498098ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)12))))) ? (((/* implicit */int) ((signed char) 2013784074U))) : (((/* implicit */int) arr_52 [i_1])))) + (((((/* implicit */int) arr_54 [i_19 - 2] [i_19 - 3] [(unsigned short)6] [i_20] [i_20])) - (((/* implicit */int) (short)20027))))));
                var_51 = ((/* implicit */unsigned short) ((max((((unsigned long long int) arr_40 [1] [i_19 + 1] [i_20] [1] [i_19] [i_20])), (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) (unsigned char)12))))))) <= (((/* implicit */unsigned long long int) arr_44 [i_1]))));
            }
            /* vectorizable */
            for (unsigned long long int i_21 = 1; i_21 < 6; i_21 += 3) 
            {
                var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_1] [i_21] [i_19 + 1] [i_21 + 4])) ? (7340032LL) : (576456354256912384LL)));
                var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_21] [i_21] [i_21 + 1] [i_19 - 1])) ? (((/* implicit */int) arr_26 [i_19 - 2] [i_21] [i_21 + 1] [i_19 - 2])) : (((/* implicit */int) arr_26 [i_21] [i_21] [i_21 + 3] [i_19 - 2]))));
                arr_71 [i_21] [1U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_19 - 1] [i_21] [i_21] [i_21 + 3])) ? ((+(((/* implicit */int) (unsigned char)16)))) : (((((/* implicit */_Bool) arr_35 [i_1] [i_21] [i_1] [i_19 - 3] [i_21])) ? (((/* implicit */int) arr_7 [i_21])) : (((/* implicit */int) arr_22 [i_21] [6] [i_21]))))));
                /* LoopNest 2 */
                for (short i_22 = 3; i_22 < 8; i_22 += 3) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        {
                            var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2013784063U)) ? (((/* implicit */int) arr_65 [2LL] [i_19 - 2])) : (((/* implicit */int) arr_65 [i_1] [i_19 + 1]))));
                            var_55 = ((((/* implicit */_Bool) arr_73 [i_21 + 3] [i_19 + 1])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_73 [i_21 + 3] [i_19 - 3])));
                        }
                    } 
                } 
                arr_76 [i_1] [i_21] [i_21] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210))) : (1097364144128LL)));
            }
            for (unsigned int i_24 = 3; i_24 < 6; i_24 += 4) 
            {
                var_56 -= ((/* implicit */unsigned short) arr_56 [i_1] [i_1]);
                /* LoopNest 2 */
                for (unsigned char i_25 = 2; i_25 < 6; i_25 += 1) 
                {
                    for (int i_26 = 0; i_26 < 10; i_26 += 3) 
                    {
                        {
                            arr_85 [i_26] [8] [i_19] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_19 - 2] [i_19 - 3])) ? (((/* implicit */int) arr_65 [i_19 - 1] [i_19])) : (((/* implicit */int) arr_65 [i_19 + 1] [i_19])))))));
                            arr_86 [i_1] [i_1] [8ULL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_22 [i_19 - 1] [i_25 - 2] [2U])) ? (((/* implicit */int) arr_22 [i_19 - 3] [i_25 + 1] [2])) : (((/* implicit */int) arr_22 [i_19 - 2] [i_25 + 3] [(unsigned char)8])))) <= (((/* implicit */int) max(((unsigned char)34), (((/* implicit */unsigned char) arr_22 [i_19 - 1] [i_25 - 2] [(unsigned char)8])))))));
                            arr_87 [i_1] [2ULL] [i_24] [i_25 - 2] [i_26] = ((/* implicit */unsigned short) (+(12U)));
                            arr_88 [(unsigned char)1] |= ((/* implicit */signed char) max((((/* implicit */long long int) (-((~(((/* implicit */int) arr_78 [i_19] [i_25] [i_19] [i_1]))))))), (576460752303407104LL)));
                            arr_89 [i_1] [i_19] [i_24 + 4] [i_25] [4LL] [i_26] = ((/* implicit */unsigned int) 1488360123186446478LL);
                        }
                    } 
                } 
            }
            var_57 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_3)))))) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_78 [i_1] [i_1] [i_1] [i_19]))) : (-9223372028264841220LL))))))));
        }
        /* LoopNest 3 */
        for (unsigned int i_27 = 0; i_27 < 10; i_27 += 2) 
        {
            for (unsigned long long int i_28 = 0; i_28 < 10; i_28 += 2) 
            {
                for (unsigned long long int i_29 = 0; i_29 < 10; i_29 += 2) 
                {
                    {
                        var_58 = ((/* implicit */unsigned long long int) (unsigned char)219);
                        var_59 = ((/* implicit */unsigned char) var_17);
                    }
                } 
            } 
        } 
    }
    var_60 = ((/* implicit */short) var_0);
    var_61 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
}
