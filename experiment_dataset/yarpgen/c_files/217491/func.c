/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217491
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
    var_20 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_5)))) && (((/* implicit */_Bool) var_2)))) ? (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_19))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))));
    var_21 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned char)15)))))) : (((((/* implicit */_Bool) ((unsigned int) 8852340082346257200LL))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)12)) == (((/* implicit */int) (unsigned char)228))))) : (((/* implicit */int) var_4)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 5324257383930361283LL)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (signed char)-30))));
                        var_23 = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_8))), (((/* implicit */long long int) arr_4 [i_0] [i_2] [i_3])))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [5LL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))), (min((((/* implicit */long long int) var_14)), (arr_8 [i_1] [i_0])))))));
                        var_24 |= ((/* implicit */_Bool) (+(min((((/* implicit */long long int) arr_3 [i_1] [i_1] [i_3])), (var_8)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_13 [i_0] = ((/* implicit */unsigned int) ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)14), (((/* implicit */signed char) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (arr_8 [i_0] [i_0]) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)255)), (var_18))))))));
            arr_14 [i_0] [i_4] = ((/* implicit */signed char) min((((/* implicit */long long int) var_11)), (var_13)));
            var_25 = ((/* implicit */_Bool) (~(max(((~(645671260U))), (((/* implicit */unsigned int) var_3))))));
        }
        arr_15 [i_0] = min(((unsigned char)0), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2355750202317826184ULL)) || (((/* implicit */_Bool) (signed char)-12))))));
        var_26 -= ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_0] [(_Bool)1])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [16] [16]))))), (((long long int) var_3)))) / (((/* implicit */long long int) (-(((/* implicit */int) var_10)))))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */signed char) ((_Bool) var_17));
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    for (int i_9 = 2; i_9 < 21; i_9 += 4) 
                    {
                        {
                            arr_29 [i_9] [i_9 - 2] [(signed char)17] [i_6] [(signed char)21] [i_6] [(_Bool)1] = ((/* implicit */unsigned short) (unsigned char)243);
                            var_28 -= ((signed char) ((((/* implicit */_Bool) (unsigned char)64)) ? (arr_23 [i_5] [i_6] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_17)))));
                        }
                    } 
                } 
            }
            for (long long int i_10 = 0; i_10 < 23; i_10 += 1) /* same iter space */
            {
                arr_32 [i_10] [i_6] [i_10] = ((/* implicit */long long int) (+(((/* implicit */int) arr_27 [i_5] [i_5] [i_6] [i_10] [i_10]))));
                arr_33 [i_10] [i_10] [i_6] [18U] = ((/* implicit */_Bool) 4294967295U);
            }
            var_29 = ((/* implicit */unsigned int) ((arr_1 [i_5] [i_6]) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_18 [i_5])))))));
            arr_34 [i_5] = ((/* implicit */unsigned int) (~(arr_9 [i_5] [i_5] [i_6] [i_6] [i_6] [i_5])));
            /* LoopSeq 3 */
            for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
            {
                arr_37 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (((/* implicit */int) arr_28 [i_5] [i_5] [i_6] [i_5]))))) ? (((/* implicit */int) arr_2 [i_6] [i_6])) : (((/* implicit */int) ((_Bool) var_8)))));
                var_30 = ((/* implicit */long long int) ((var_8) > (arr_9 [i_11] [i_6] [i_6] [i_6] [i_5] [i_5])));
                /* LoopSeq 1 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_44 [(short)3] [i_12] [i_13] [i_13] [(_Bool)1] [i_5] = ((/* implicit */unsigned char) ((unsigned int) arr_5 [i_13] [i_13]));
                        arr_45 [i_5] [i_5] [i_13] [i_5] [i_13] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_1)) >= (arr_19 [i_5])));
                        arr_46 [i_5] [i_5] [i_11] [i_12] [i_13] = ((((/* implicit */int) var_7)) == (((/* implicit */int) var_10)));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_13] [i_11] [19U] [i_13])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_38 [i_5] [i_6] [i_11] [i_12]))));
                    }
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)24542))) / (arr_8 [i_6] [i_6]))))));
                    var_33 = ((/* implicit */short) arr_31 [i_12] [i_6] [i_6] [i_5]);
                    var_34 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_5] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 645671260U)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_8 [i_6] [i_6])))));
                    var_35 = ((/* implicit */int) (signed char)-7);
                }
            }
            for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 1) /* same iter space */
            {
                var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((int) arr_12 [i_5] [i_6] [i_6])))));
                var_37 = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_16)))) : (((((/* implicit */long long int) ((/* implicit */int) var_15))) % (arr_30 [i_6] [i_14])))));
            }
            for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 23; i_16 += 4) 
                {
                    for (short i_17 = 0; i_17 < 23; i_17 += 1) 
                    {
                        {
                            arr_58 [i_5] [i_17] [(_Bool)1] [i_17] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [(signed char)14] [i_6])) ? (((/* implicit */int) (signed char)116)) : (arr_56 [i_17] [i_16] [i_15] [i_15] [i_6] [i_6] [i_17])));
                            var_38 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) + (var_1)));
                        }
                    } 
                } 
                var_39 = ((/* implicit */long long int) ((((/* implicit */int) arr_36 [i_5] [i_6] [i_15])) >> (((((/* implicit */int) arr_17 [i_5])) - (158)))));
                var_40 = ((/* implicit */signed char) ((var_19) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6] [i_15])))));
                /* LoopSeq 2 */
                for (unsigned char i_18 = 0; i_18 < 23; i_18 += 1) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1U)) ? (((var_4) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((signed char) arr_55 [i_6]))))))));
                    var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) (!((_Bool)1))))));
                    var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 442277060)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) -2641925655017435432LL)) ? (((/* implicit */long long int) arr_47 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(unsigned char)8])) : (arr_30 [i_6] [i_6]))) : (((/* implicit */long long int) arr_11 [i_6]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_19 = 3; i_19 < 20; i_19 += 1) /* same iter space */
                    {
                        arr_64 [i_5] [i_5] [i_15] [2U] = ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) | (((/* implicit */int) arr_12 [i_19 - 2] [(unsigned short)8] [i_6]))));
                        arr_65 [i_5] [i_5] [i_15] [i_5] [i_19] = (!(((/* implicit */_Bool) arr_61 [i_19 - 3] [i_19 + 3] [i_19] [i_19 + 3] [i_19])));
                        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_18)) ? (arr_20 [i_5] [19U]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                        var_45 = ((/* implicit */short) arr_38 [i_5] [(signed char)5] [i_18] [i_5]);
                        arr_66 [i_19 - 3] [i_18] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_59 [i_15] [i_18] [i_19]))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_10))))) : ((-(arr_30 [i_6] [i_6])))));
                    }
                    for (unsigned char i_20 = 3; i_20 < 20; i_20 += 1) /* same iter space */
                    {
                        arr_70 [i_20] [i_18] [i_15] [i_6] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_5] [i_15] [i_15])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_52 [i_5] [i_5] [i_18] [i_20]))))) ? (((unsigned int) arr_60 [i_20 - 3] [i_18] [i_15] [i_6] [i_5])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_20 - 2] [i_18] [i_15] [i_6] [i_5])))));
                        var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) arr_69 [i_20 - 2] [i_20] [i_20 + 2] [i_20 + 2] [i_20 - 3]))));
                        var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_17))))))));
                        arr_71 [20LL] [i_6] [20LL] [i_18] [20LL] |= ((/* implicit */long long int) (+(((unsigned int) (signed char)70))));
                    }
                    var_48 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (signed char)-40))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_5] [i_15] [i_15] [i_5]))) : (arr_11 [i_6])));
                }
                for (unsigned char i_21 = 0; i_21 < 23; i_21 += 1) /* same iter space */
                {
                    arr_74 [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned long long int) ((arr_69 [i_5] [i_21] [i_15] [i_21] [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_62 [i_21] [i_6] [i_5])));
                    arr_75 [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) | (((/* implicit */int) arr_60 [i_21] [i_15] [i_6] [i_6] [i_5]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)117))) > (var_13)))) : (((/* implicit */int) ((var_5) > (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6] [i_15] [i_21]))))))));
                    arr_76 [i_5] [i_6] [i_6] [i_15] [i_6] &= ((/* implicit */_Bool) (-(arr_9 [i_15] [i_6] [i_6] [i_6] [i_6] [i_21])));
                }
            }
        }
        var_49 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_5] [(short)4] [(_Bool)1] [(_Bool)1] [i_5] [i_5]))));
        var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)90)) ? (arr_62 [i_5] [i_5] [i_5]) : (arr_62 [i_5] [i_5] [i_5])));
    }
    var_51 = ((/* implicit */signed char) var_5);
}
