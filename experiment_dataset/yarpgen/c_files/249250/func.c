/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249250
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)36387)) * (((/* implicit */int) arr_0 [i_0 + 2] [i_2 + 1]))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -891571344542904886LL)) ? (-126979622996157447LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39165)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_12))))) : (arr_5 [4LL] [i_1] [(unsigned short)13])));
                }
                arr_7 [(unsigned short)18] [(unsigned short)18] &= ((/* implicit */unsigned short) min((((/* implicit */int) arr_0 [i_0] [i_0 + 4])), ((+(((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_3 = 1; i_3 < 10; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 2; i_4 < 9; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                for (long long int i_6 = 1; i_6 < 9; i_6 += 3) 
                {
                    {
                        arr_17 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) arr_8 [i_3]);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            arr_22 [i_3] [i_5] [i_5] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_12))) ? (((arr_9 [i_6] [i_4 - 1]) / (arr_10 [i_5] [i_5]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-4258916552703859995LL)))));
                            var_18 = ((/* implicit */unsigned short) ((arr_4 [i_6 + 2] [i_4] [i_4 - 2]) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)36169))))))));
                            arr_23 [i_3] [i_3] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) ((((long long int) arr_2 [i_7] [i_3] [i_3])) | (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))));
                            var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_6] [i_5] [i_4] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36387))) : (4258916552703859966LL)));
                            var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (4258916552703859966LL)))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 10; i_8 += 1) /* same iter space */
                        {
                            arr_28 [i_3] [i_4] [i_5] [i_3] [10LL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_4 [i_8] [i_6 + 1] [i_4 - 2])))) ? ((+(var_9))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_3 + 1] [(unsigned short)8] [i_3])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [(unsigned short)9])) - (59629)))))) ? (((/* implicit */int) ((var_5) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39164)))))) : (((/* implicit */int) (unsigned short)12555))))) : (((long long int) (unsigned short)24385)));
                            var_21 = ((/* implicit */long long int) max((((/* implicit */int) arr_14 [i_3] [i_3 + 1] [i_3] [i_3])), ((+(((/* implicit */int) arr_14 [(unsigned short)2] [i_6 + 1] [i_6 + 1] [i_4 + 1]))))));
                        }
                        for (unsigned short i_9 = 2; i_9 < 10; i_9 += 1) /* same iter space */
                        {
                            var_22 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)39165)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26451))) : (3261467671544107676LL))), (((/* implicit */long long int) var_14))));
                            var_23 = var_4;
                            arr_32 [i_9 - 2] [i_3] [i_4] [i_4] [i_3] [(unsigned short)1] = ((/* implicit */unsigned short) ((max((arr_1 [i_3 + 1]), (((/* implicit */long long int) arr_27 [i_3 - 1] [i_4 - 1] [0LL] [i_6] [i_3])))) / (min((arr_1 [i_3 - 1]), (arr_1 [i_3 - 1])))));
                        }
                        for (unsigned short i_10 = 2; i_10 < 10; i_10 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((unsigned short) (~(((/* implicit */int) (unsigned short)21378)))))));
                            var_25 |= ((unsigned short) (unsigned short)41139);
                            arr_35 [i_3] [i_6 + 2] [i_3] [i_5] [i_3] [2LL] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_29 [i_3] [i_4 - 2] [(unsigned short)4] [i_4 - 2] [i_4 + 2] [i_6]))))), (max((arr_24 [i_3] [i_3]), (((/* implicit */long long int) arr_29 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_4] [i_4 + 1] [i_5])))));
                        }
                        var_26 = (~(var_9));
                    }
                } 
            } 
            arr_36 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned short)1))) << (((9223372036854775807LL) - (9223372036854775788LL)))));
            var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_15 [i_3 + 1] [i_4 + 1] [i_4 + 1] [i_3]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 7624423967218158547LL))))))))));
        }
        var_28 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_2 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_29 [i_3] [i_3] [i_3] [(unsigned short)7] [i_3] [i_3])) : (((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((/* implicit */int) arr_11 [i_3] [6LL] [i_3])) : (((/* implicit */int) var_0)))))), (((/* implicit */int) var_12))));
    }
    for (long long int i_11 = 0; i_11 < 15; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 15; i_12 += 3) 
        {
            for (unsigned short i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                {
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)511)))) & (((long long int) arr_40 [i_11] [i_12] [i_13]))));
                    arr_45 [i_11] = ((/* implicit */long long int) var_14);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            for (unsigned short i_15 = 0; i_15 < 15; i_15 += 1) 
            {
                {
                    arr_51 [i_11] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_41 [i_11] [i_14] [i_15])) ? (((/* implicit */int) arr_41 [i_11] [i_14] [i_15])) : (((/* implicit */int) arr_41 [i_11] [i_14] [3LL]))))));
                    var_30 = ((long long int) -1LL);
                    arr_52 [i_11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_11] [i_14] [i_14] [i_15])) ? (arr_40 [i_11] [i_14] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_15] [i_11])))))) ? (((((/* implicit */_Bool) arr_49 [(unsigned short)2] [i_14] [i_15] [i_14])) ? (arr_49 [i_14] [i_14] [i_14] [i_14]) : (arr_49 [i_15] [i_15] [i_15] [i_15]))) : ((-9223372036854775807LL - 1LL)));
                    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 5891918305800531891LL)) ? ((~(var_10))) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [0LL] [i_15]))))))));
                }
            } 
        } 
        arr_53 [i_11] = ((((/* implicit */_Bool) min((arr_48 [i_11] [i_11]), (arr_48 [i_11] [i_11])))) ? (((((/* implicit */_Bool) var_14)) ? (arr_3 [i_11] [i_11]) : (arr_3 [i_11] [i_11]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_11] [i_11])) ? (((/* implicit */int) arr_48 [i_11] [i_11])) : (((/* implicit */int) arr_48 [i_11] [i_11]))))));
    }
    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((long long int) 1804779720249603783LL)))));
    /* LoopSeq 2 */
    for (long long int i_16 = 0; i_16 < 15; i_16 += 3) 
    {
        arr_57 [i_16] [i_16] = arr_56 [(unsigned short)14] [i_16];
        arr_58 [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [i_16] [2LL] [2LL] [i_16])) ? (((((/* implicit */int) arr_0 [i_16] [i_16])) >> (((((((/* implicit */_Bool) (unsigned short)55332)) ? (2612304953068258979LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5132))))) - (2612304953068258973LL))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_16] [(unsigned short)5] [11LL] [i_16]))))) <= (((/* implicit */int) arr_56 [i_16] [i_16])))))));
        arr_59 [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_56 [i_16] [i_16]), (arr_56 [i_16] [i_16])))) ? (((/* implicit */int) max((arr_56 [i_16] [i_16]), (arr_56 [i_16] [i_16])))) : ((-(((/* implicit */int) arr_56 [i_16] [i_16]))))));
    }
    for (unsigned short i_17 = 3; i_17 < 22; i_17 += 1) 
    {
        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (-(((long long int) ((((/* implicit */_Bool) -2612304953068258979LL)) ? (var_4) : (-326506830332542209LL)))))))));
        arr_62 [i_17] [i_17] = ((max((max((-4625703742088810154LL), (((/* implicit */long long int) arr_60 [i_17])))), (arr_61 [i_17] [i_17 - 3]))) >> (((min((((long long int) arr_60 [i_17])), (max((((/* implicit */long long int) var_14)), (-5LL))))) - (1013LL))));
        /* LoopSeq 1 */
        for (long long int i_18 = 0; i_18 < 23; i_18 += 3) 
        {
            var_34 = ((/* implicit */long long int) min((var_34), (max((((((/* implicit */_Bool) arr_60 [i_17 - 1])) ? (arr_61 [(unsigned short)22] [i_17 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_17 - 1]))))), ((((-(-2612304953068258979LL))) << (((max((-2612304953068259008LL), (4744133141275650808LL))) - (4744133141275650808LL)))))))));
            var_35 = (~(((((/* implicit */_Bool) ((unsigned short) arr_61 [i_17] [i_18]))) ? (((((/* implicit */_Bool) arr_64 [i_17] [i_17])) ? (arr_61 [i_17] [i_17]) : (-1LL))) : (arr_64 [(unsigned short)16] [(unsigned short)14]))));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_19 = 0; i_19 < 13; i_19 += 3) 
    {
        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -2612304953068258979LL)) ? (2196903313743457127LL) : (3217186779686545611LL))))));
        /* LoopSeq 1 */
        for (unsigned short i_20 = 0; i_20 < 13; i_20 += 3) 
        {
            var_37 |= ((/* implicit */long long int) ((arr_5 [i_20] [i_20] [i_19]) == (-1779684940559179843LL)));
            arr_72 [i_19] = ((((/* implicit */_Bool) arr_66 [i_19] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_61 [i_19] [i_20]));
            var_38 = ((/* implicit */long long int) max((var_38), (((((/* implicit */_Bool) arr_54 [i_20])) ? (((((/* implicit */long long int) ((/* implicit */int) var_15))) - (arr_39 [i_19]))) : (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_19] [i_19] [i_19])))))));
        }
    }
}
