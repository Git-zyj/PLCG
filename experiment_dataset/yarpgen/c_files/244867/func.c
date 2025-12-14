/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244867
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned int) (+(((int) var_13))))))))));
    var_21 = ((/* implicit */int) max((var_21), (565196478)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((-346098717), ((+(var_12)))))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)-11))))) : (((/* implicit */int) ((short) var_12)))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_23 = ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-1)))) ? (((/* implicit */int) var_18)) : (((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_1] [(_Bool)1] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [10LL] [10LL])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))), (((((/* implicit */int) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) var_8)))))) >> (((/* implicit */int) (_Bool)1))))));
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_9))));
                        var_25 = ((/* implicit */short) min((max((127), ((+(((/* implicit */int) (unsigned short)50725)))))), (((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) <= (var_19))))));
                        arr_11 [(signed char)2] [i_0] [4U] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_1] [i_1] [i_0]))))))) ? (((/* implicit */int) arr_7 [i_2])) : (((((/* implicit */int) min(((short)23935), (arr_0 [i_2])))) ^ ((+(arr_2 [i_0])))))));
                    }
                    for (long long int i_4 = 4; i_4 < 9; i_4 += 3) 
                    {
                        var_26 = ((/* implicit */int) max((min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)9)))), (((((/* implicit */_Bool) var_3)) ? (2052261629U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) var_18))));
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0]))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 10; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [1ULL] = ((arr_2 [i_5 + 1]) < (arr_2 [i_5 - 1]));
                            arr_22 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_11));
                            var_28 = ((/* implicit */unsigned int) ((_Bool) (short)19759));
                            var_29 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_5 [4] [4] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (var_5)))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((signed char) var_13);
                            var_30 = ((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_5] [i_1] [(_Bool)1]);
                        }
                        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned int) var_8);
                            arr_28 [i_1] [i_1] [i_1] [i_1] [i_8] [i_0] [9LL] = ((/* implicit */int) arr_7 [i_5 - 1]);
                            var_32 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_5 + 1] [i_5] [i_5 + 1] [i_5 - 1])) ? (((/* implicit */long long int) arr_4 [i_5 + 1])) : (arr_20 [i_5] [i_5 + 1] [(_Bool)1] [i_5 - 1] [i_5] [i_5] [4LL])));
                        }
                        /* LoopSeq 2 */
                        for (int i_9 = 2; i_9 < 10; i_9 += 3) /* same iter space */
                        {
                            var_33 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_1] [i_1] [i_5 + 1] [i_5 - 1] [i_1] [i_9 - 2]))));
                            var_34 = ((/* implicit */int) (_Bool)0);
                            var_35 += ((/* implicit */unsigned int) ((arr_30 [i_5] [i_5 + 1] [i_5 + 1] [i_9 - 1] [i_9]) > (arr_30 [i_2] [i_5 - 1] [i_5 + 1] [i_9 - 1] [i_9])));
                        }
                        for (int i_10 = 2; i_10 < 10; i_10 += 3) /* same iter space */
                        {
                            var_36 *= ((/* implicit */unsigned int) (+(arr_34 [i_0] [i_1] [i_0] [i_2] [i_5 - 1] [i_5] [i_10])));
                            var_37 = ((/* implicit */short) (unsigned short)14253);
                        }
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) arr_10 [i_1] [i_2] [i_1] [i_0] [i_1] [i_0]))));
                        /* LoopSeq 2 */
                        for (short i_12 = 2; i_12 < 10; i_12 += 3) 
                        {
                            arr_39 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_12] [i_12] [i_12 - 2] [i_11] [i_12] [i_12 - 2] [i_12 - 2])) ? (arr_34 [i_12] [i_12] [i_12 - 2] [i_1] [i_12] [i_12] [i_12 - 2]) : (arr_34 [i_12] [i_12] [i_12 - 2] [i_11] [i_12] [i_12] [i_12 - 2])));
                            arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_27 [i_12] [i_11])) % (arr_30 [i_0] [(_Bool)0] [i_0] [i_0] [i_12 - 1])));
                            arr_41 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_12] [i_11] [10LL] [10LL])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_19 [i_12] [i_2])));
                        }
                        for (short i_13 = 1; i_13 < 9; i_13 += 2) 
                        {
                            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_11])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-3))))) ? (arr_6 [i_13 + 1]) : (((/* implicit */long long int) ((int) var_7)))));
                            arr_44 [i_13] [i_13] [i_13] [i_13] [i_0] = ((/* implicit */_Bool) arr_4 [i_13 - 1]);
                            arr_45 [8U] [i_1] [i_1] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (arr_4 [i_0]) : (var_12)))) : (((arr_24 [i_0] [i_0] [i_2] [i_0] [i_13]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2459666770U)))));
                        }
                    }
                }
                for (unsigned int i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    arr_50 [i_1] [i_0] = ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */int) var_16)) <= (((/* implicit */int) arr_24 [i_14] [(short)8] [(short)8] [i_0] [(short)8])))) ? (((((/* implicit */_Bool) arr_46 [i_1] [(short)6] [i_14])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_35 [i_14] [i_0] [i_0] [(_Bool)1])))) : (((/* implicit */int) arr_10 [i_14] [i_14] [i_14] [i_0] [i_14] [i_0])))));
                    /* LoopSeq 3 */
                    for (int i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)29925)) ? (4611615649683210240ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_41 |= ((/* implicit */short) (+(((arr_31 [i_15] [i_15] [i_0] [i_14] [i_0] [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1])))))));
                        arr_54 [5LL] = ((/* implicit */short) ((_Bool) ((((/* implicit */int) (short)-13)) >= (((/* implicit */int) (short)128)))));
                    }
                    for (unsigned int i_16 = 2; i_16 < 8; i_16 += 1) 
                    {
                        var_42 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)2)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14612)))));
                        /* LoopSeq 1 */
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            var_43 = ((/* implicit */unsigned short) (+(min((max((arr_20 [i_0] [i_16] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-21641)) : (((/* implicit */int) arr_36 [i_17 - 1] [i_0] [i_1] [i_0])))))))));
                            arr_60 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
                            var_44 = ((/* implicit */_Bool) var_19);
                            arr_61 [i_17] [6] [6] = ((/* implicit */short) (((+(((/* implicit */int) (unsigned short)65521)))) < (((/* implicit */int) max(((unsigned short)20198), (((/* implicit */unsigned short) (_Bool)1)))))));
                            var_45 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_34 [i_17] [i_17] [i_17] [i_1] [i_17] [i_17] [i_17 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50226))) : (((((((/* implicit */_Bool) arr_12 [i_0] [i_16] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_11))) & (max((((/* implicit */long long int) arr_42 [i_0] [i_0] [i_0] [i_16] [i_1])), (var_7)))))));
                        }
                        arr_62 [i_0] [i_1] [i_0] [i_16] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_35 [(signed char)1] [i_1] [i_16 + 2] [i_14])) ? (((/* implicit */int) arr_17 [i_16 + 3])) : (((/* implicit */int) arr_35 [i_0] [i_1] [i_16 - 2] [i_16 - 2])))), (((/* implicit */int) ((short) -533742772)))));
                        arr_63 [i_14] [i_14] [i_14] [i_1] [i_0] = ((/* implicit */int) arr_26 [i_0] [i_1] [i_14] [i_14] [i_0] [i_16 - 1] [i_16 + 3]);
                    }
                    for (int i_18 = 0; i_18 < 11; i_18 += 4) 
                    {
                        var_46 = ((/* implicit */unsigned int) (short)-1);
                        arr_66 [i_0] = ((/* implicit */short) arr_49 [i_0]);
                        var_47 = ((/* implicit */unsigned int) max((((((/* implicit */int) var_2)) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_0] [i_1] [i_0]))) <= (arr_52 [i_0] [i_1] [i_0] [2] [i_1])))))), (((/* implicit */int) max((((/* implicit */signed char) var_4)), (arr_47 [i_0] [i_1] [i_14] [i_18]))))));
                    }
                    arr_67 [i_14] [(short)9] [i_0] = ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */long long int) arr_27 [i_0] [i_0])), (max((((/* implicit */long long int) var_5)), (var_0))))));
                }
                for (long long int i_19 = 0; i_19 < 11; i_19 += 3) 
                {
                    var_48 = ((/* implicit */long long int) (~(max((1493295255U), (((/* implicit */unsigned int) (_Bool)1))))));
                    arr_70 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((((/* implicit */int) var_16)), (arr_69 [i_0] [i_19] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((arr_16 [i_19] [i_1] [i_0]) - (((/* implicit */int) var_16))))) : (var_3))), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (signed char)45)), (var_19))), (((/* implicit */unsigned int) arr_7 [i_1])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 3) 
                    {
                        arr_73 [i_0] [i_0] [i_19] [i_20] [i_20] = ((/* implicit */signed char) max((max((13365691670186974987ULL), (((/* implicit */unsigned long long int) (short)-14667)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12948)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (signed char)-37)))))));
                        arr_74 [i_1] [i_20] |= ((/* implicit */unsigned long long int) var_6);
                    }
                }
                var_49 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                var_50 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_1 [i_1])))) ? (max((((/* implicit */long long int) ((-430748635404144603LL) != (((/* implicit */long long int) var_19))))), ((+(-4174705631745856510LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_19 [i_0] [i_1]) <= (arr_19 [i_0] [i_0])))))));
            }
        } 
    } 
}
