/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37146
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [12LL]))) & (arr_3 [(short)7] [(short)7])))))) : ((~((~(arr_0 [i_0]))))))))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (3595539432U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) arr_1 [i_1]))))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_3] [8LL] [(short)8] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)2786)) < (((/* implicit */int) (unsigned short)65535)))))));
                            arr_12 [i_3] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (~(((arr_10 [i_1] [i_3]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_7))))));
                            var_22 = ((/* implicit */long long int) arr_10 [i_0] [i_0]);
                            var_23 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((var_7), (((/* implicit */signed char) arr_1 [(_Bool)1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))) : (max((((/* implicit */unsigned long long int) var_15)), (max((((/* implicit */unsigned long long int) var_15)), (arr_0 [i_2])))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((short) (unsigned short)14352))), ((-(max((((/* implicit */unsigned int) (unsigned short)65535)), (699427863U)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (long long int i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (long long int i_6 = 4; i_6 < 14; i_6 += 4) 
                            {
                                var_25 &= ((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) var_17)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
                                var_26 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) + (max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)51184))))), (max((((/* implicit */unsigned int) (unsigned char)54)), (3595539432U)))))));
                                var_27 = max((((/* implicit */unsigned long long int) ((_Bool) max(((unsigned short)51184), (((/* implicit */unsigned short) (short)19180)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) arr_24 [i_0] [i_1] [i_1] [14LL] [i_6]))))), (((unsigned long long int) arr_1 [i_0])))));
                            }
                            for (unsigned int i_7 = 1; i_7 < 15; i_7 += 2) 
                            {
                                var_28 -= ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_18)) - (((/* implicit */int) (unsigned char)204)))), (((((/* implicit */int) ((unsigned char) var_15))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                                var_29 = ((/* implicit */unsigned char) (_Bool)1);
                                var_30 = ((/* implicit */_Bool) var_7);
                                var_31 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)14352))))) ? (arr_5 [i_0] [i_1] [i_5 + 1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_16), (((/* implicit */unsigned short) var_4))))))))), (((unsigned long long int) arr_21 [i_5 + 1] [i_7 + 1] [i_7 + 1]))));
                                var_32 = ((/* implicit */unsigned int) arr_9 [i_4]);
                            }
                            for (unsigned int i_8 = 1; i_8 < 12; i_8 += 3) 
                            {
                                var_33 &= ((/* implicit */signed char) max((((unsigned short) max((0ULL), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_5 + 1]))))), (((/* implicit */unsigned short) ((unsigned char) ((3964120433U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                                var_34 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14352))) >= (var_3)))) + (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_21 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_2 [i_4])))))) & (((((arr_4 [i_0] [i_4]) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) var_2)))) & (((arr_21 [i_1] [i_4] [i_5]) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_5])) : (((/* implicit */int) (unsigned short)3))))))));
                            }
                            var_35 = ((((unsigned int) (short)4988)) - (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_7 [3ULL] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_28 [i_0] [(unsigned short)12] [i_4] [i_5])) : (((/* implicit */int) (unsigned short)14352)))), (((/* implicit */int) arr_19 [i_1] [i_4] [1ULL]))))));
                            var_36 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2527306861U)) ? (((/* implicit */int) (short)14646)) : (arr_25 [i_5 - 1] [i_5] [i_5 - 1] [i_5] [i_5 - 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        var_37 = ((/* implicit */signed char) ((var_12) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_31 [i_9] [i_9]))))) ? ((~(((/* implicit */int) (short)25306)))) : (((((/* implicit */int) var_18)) >> (((/* implicit */int) arr_31 [i_9] [i_9 - 1]))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((2527306861U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)201))))))) | (arr_30 [i_9])))));
        arr_32 [18LL] = arr_30 [i_9];
    }
    for (int i_10 = 0; i_10 < 10; i_10 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 2) 
        {
            arr_38 [i_11] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) max((arr_18 [i_10] [i_10] [i_10] [i_10] [i_10]), (((/* implicit */int) arr_1 [i_10]))))), (max((2254492189597863156ULL), (((/* implicit */unsigned long long int) arr_33 [i_10] [i_11])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)20)))) : (((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (signed char)56)))))))));
            var_38 = ((long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50))) >= (var_9)))) * (((/* implicit */int) var_4))));
        }
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned int i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                {
                    var_39 = ((/* implicit */long long int) var_19);
                    var_40 ^= ((/* implicit */unsigned short) var_9);
                }
            } 
        } 
    }
    for (unsigned char i_14 = 0; i_14 < 22; i_14 += 3) 
    {
        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) (-((~(((((/* implicit */_Bool) (unsigned short)51184)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))))))))));
        /* LoopNest 2 */
        for (short i_15 = 0; i_15 < 22; i_15 += 4) 
        {
            for (unsigned short i_16 = 0; i_16 < 22; i_16 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_17 = 0; i_17 < 22; i_17 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_18 = 0; i_18 < 22; i_18 += 2) 
                        {
                            var_42 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) arr_44 [i_18])) + (((/* implicit */int) ((short) (unsigned char)32))))));
                            var_43 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_53 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]), (arr_49 [i_17])))))))));
                            var_44 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((long long int) arr_50 [i_14] [i_14] [i_16] [i_17]))) || (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 3964120460U)))))) && (((/* implicit */_Bool) ((signed char) arr_53 [i_14] [i_14] [i_14] [i_17] [i_18] [(unsigned short)15])))));
                            arr_55 [i_17] [(unsigned short)13] [i_17] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_46 [9U] [(short)9]))));
                        }
                        var_45 += ((/* implicit */long long int) (((!((_Bool)1))) ? (((/* implicit */int) arr_52 [i_14] [i_15] [i_15] [i_16] [(_Bool)1] [i_17])) : (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60853))))) >> (((max((4394815733287998695ULL), (((/* implicit */unsigned long long int) (unsigned short)58485)))) - (4394815733287998669ULL)))))));
                        var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) ((((/* implicit */int) ((((unsigned int) arr_50 [i_14] [i_14] [(unsigned char)15] [i_17])) < (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_14])))))) & (((/* implicit */int) (unsigned short)3)))))));
                    }
                    for (unsigned short i_19 = 0; i_19 < 22; i_19 += 3) /* same iter space */
                    {
                        var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_57 [i_14] [i_14] [i_14] [i_14]))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((signed char) var_16))), ((-(1767660434U)))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (5122286876802865919ULL))))))));
                        var_48 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_18))))));
                    }
                    arr_58 [16LL] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)48)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_20 = 0; i_20 < 22; i_20 += 3) 
                    {
                        var_49 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_46 [i_15] [i_20])))))) == ((+(315366848427234780ULL)))));
                        var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) ((((/* implicit */_Bool) arr_57 [i_20] [i_14] [i_15] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_48 [i_14])))) : (((unsigned long long int) 1359949498U)))))));
                    }
                    for (short i_21 = 1; i_21 < 19; i_21 += 1) 
                    {
                        var_51 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_50 [i_21 + 1] [i_21 + 3] [i_21 - 1] [i_21 + 2])) ? (3314669590U) : (2570904304U)))));
                        var_52 = ((/* implicit */_Bool) max((var_52), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (3701056590498530639LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)95)))))))))) >= (((((/* implicit */_Bool) arr_30 [i_21 - 1])) ? (arr_30 [i_21 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    }
                }
            } 
        } 
        var_53 ^= ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) max((arr_47 [i_14] [i_14] [i_14]), (((/* implicit */long long int) (short)28163))))), (var_3)))));
    }
    var_54 = ((/* implicit */unsigned long long int) ((((unsigned long long int) var_6)) > (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)63804), (((/* implicit */unsigned short) var_2))))))));
    /* LoopNest 2 */
    for (unsigned int i_22 = 0; i_22 < 21; i_22 += 3) 
    {
        for (short i_23 = 1; i_23 < 20; i_23 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_24 = 2; i_24 < 20; i_24 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_25 = 0; i_25 < 21; i_25 += 3) 
                    {
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            {
                                var_55 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_62 [i_24] [i_24 - 2] [i_24] [i_24 - 2] [i_24] [i_24 + 1])) ? (((/* implicit */int) arr_76 [i_23] [i_23] [(unsigned char)18] [i_24] [i_23])) : (((/* implicit */int) (short)27686)))) * (((((/* implicit */_Bool) (short)27178)) ? (((/* implicit */int) (short)27686)) : (((/* implicit */int) (short)31194))))));
                                var_56 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_47 [i_22] [i_23 + 1] [i_26]))));
                            }
                        } 
                    } 
                    var_57 = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_4)))) + (((/* implicit */int) var_10))));
                    /* LoopSeq 1 */
                    for (unsigned short i_27 = 0; i_27 < 21; i_27 += 3) 
                    {
                        var_58 ^= ((/* implicit */unsigned short) -127167636813724617LL);
                        /* LoopSeq 1 */
                        for (short i_28 = 0; i_28 < 21; i_28 += 3) 
                        {
                            var_59 -= ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) (signed char)56)))), (((((/* implicit */int) arr_66 [i_22] [i_23] [i_22])) <= (((/* implicit */int) arr_67 [i_22] [(_Bool)1]))))));
                            var_60 = ((/* implicit */long long int) max((var_60), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [(unsigned short)1] [i_23 + 1] [i_24] [i_24] [i_28] [i_24])) ? (2527306861U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33730)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : ((+(2217952140101177426LL)))))))))));
                            arr_83 [i_23] [i_23] [i_24 + 1] [i_24 + 1] [i_28] [i_23] [(signed char)9] = ((/* implicit */unsigned int) (_Bool)1);
                            var_61 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-40)))))));
                            var_62 = ((/* implicit */_Bool) max((var_62), (((/* implicit */_Bool) ((((/* implicit */_Bool) 4120710275U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-6)))))));
                        }
                        var_63 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3841948972730053043LL)) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)-49)))))) : ((-(((/* implicit */int) arr_78 [i_22] [i_22] [i_24 - 2]))))));
                        var_64 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_68 [i_23 - 1] [i_24 + 1])) >= (((/* implicit */int) var_6)))))));
                    }
                    var_65 &= arr_81 [i_24] [i_24] [i_24] [i_23 + 1] [i_22] [(short)3] [i_22];
                }
                var_66 -= ((/* implicit */long long int) ((unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_50 [i_22] [i_22] [i_23] [i_23 + 1])) ? (((/* implicit */unsigned long long int) 330846872U)) : (arr_53 [13] [i_23 - 1] [i_22] [i_22] [13LL] [i_22])))));
                /* LoopNest 3 */
                for (unsigned short i_29 = 0; i_29 < 21; i_29 += 3) 
                {
                    for (unsigned char i_30 = 1; i_30 < 18; i_30 += 1) 
                    {
                        for (unsigned char i_31 = 0; i_31 < 21; i_31 += 1) 
                        {
                            {
                                var_67 = ((unsigned char) ((unsigned short) (unsigned short)6468));
                                var_68 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) >> (((((/* implicit */int) ((short) 14051928340421552916ULL))) - (11027)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
