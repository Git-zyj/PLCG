/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44160
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
    var_15 = ((/* implicit */long long int) var_4);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max((arr_0 [i_0]), (((((/* implicit */_Bool) ((((/* implicit */long long int) 974542476)) / (-6048622688795957461LL)))) && (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)40)) < (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)39452)) : (((/* implicit */int) var_5)))) == (((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), (var_1)))))))));
            arr_5 [i_0] [i_1 - 2] [i_0] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))) : (arr_4 [i_0]))) * (((/* implicit */unsigned long long int) max((5881770718005419832LL), (((/* implicit */long long int) -974542477))))))), (max((arr_4 [i_1 - 1]), (arr_4 [i_1 + 1])))));
            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_2 [i_1 - 2] [i_1 - 2]), ((unsigned char)14))))));
        }
        for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_2 [i_0] [i_0])))), (((((/* implicit */_Bool) (unsigned short)59167)) ? (((/* implicit */int) arr_1 [i_2])) : (-974542476)))))) ? (((unsigned long long int) max((arr_4 [i_2]), (arr_4 [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)17)) >> (((((/* implicit */int) var_8)) - (44301)))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-974542476) < (((/* implicit */int) (unsigned char)255))))))))));
            arr_9 [i_2] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) (unsigned short)52986))))) ^ (((((/* implicit */int) (signed char)17)) >> (((((/* implicit */int) (unsigned short)39452)) - (39436))))))));
            arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_4)), (arr_7 [i_0] [i_0] [i_2])));
            var_21 = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_2])))));
        }
        for (unsigned char i_3 = 2; i_3 < 19; i_3 += 3) 
        {
            var_22 = ((/* implicit */_Bool) var_6);
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (16957231889739496502ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_3 - 2] [i_3 - 2] [i_3 - 1])) != (((/* implicit */int) arr_12 [i_3 + 4] [i_3 + 4] [i_3 + 2]))))) : (((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 3])) ? (((/* implicit */int) arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 4])) : (((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 1] [i_3 + 4]))))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_7 [4U] [i_3 - 2] [4U]) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_11 [i_0])) != (arr_4 [i_0])))))))) ? (4194009903U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [i_3 - 1] [i_0])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                arr_16 [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_3 + 2] [18ULL])) ? ((~(var_2))) : (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) arr_0 [i_3]))))));
                var_24 ^= ((/* implicit */unsigned short) var_6);
            }
            for (unsigned char i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_6 = 1; i_6 < 20; i_6 += 2) 
                {
                    var_25 = ((/* implicit */unsigned short) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_3 + 3] [i_6 - 1] [i_6] [i_5])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_14 [i_3 + 2] [i_6 + 1] [i_6])))) : ((~(var_13)))));
                    arr_22 [(_Bool)1] &= ((/* implicit */unsigned int) ((unsigned char) (+(arr_7 [(short)2] [i_3 + 2] [(short)2]))));
                }
                var_27 |= ((/* implicit */unsigned short) ((unsigned int) max((max((((/* implicit */unsigned int) var_2)), (arr_11 [i_0]))), (((/* implicit */unsigned int) ((unsigned short) (signed char)72))))));
            }
        }
        for (signed char i_7 = 3; i_7 < 22; i_7 += 1) 
        {
            arr_25 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned short) arr_7 [i_0] [i_0] [16]))), (max((((/* implicit */unsigned int) arr_20 [i_7] [i_7] [i_7 - 3] [i_7] [i_7 - 3] [i_0])), (arr_7 [i_0] [i_7] [(signed char)20])))));
            /* LoopSeq 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                arr_30 [i_8] [i_8] = (unsigned char)178;
                arr_31 [i_0] [i_0] [i_0] [i_8] = ((/* implicit */unsigned char) arr_29 [i_8] [i_8] [i_8] [i_0]);
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_8])) ? (((/* implicit */unsigned long long int) arr_24 [i_0])) : (max((((/* implicit */unsigned long long int) arr_19 [i_8] [i_8])), (arr_4 [i_8])))))) ? (var_2) : (((/* implicit */int) ((_Bool) arr_24 [i_0])))));
                var_29 ^= min((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) || (((arr_4 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20)))))))), (((((/* implicit */_Bool) max((var_2), (arr_17 [i_0])))) ? (min((arr_17 [i_8]), (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_8])))) : (((/* implicit */int) arr_29 [i_7] [(unsigned short)2] [i_7] [i_7])))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                arr_35 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_0] [i_0] [i_9]))))) > (arr_32 [i_7 - 2] [i_7 - 1])))) ^ (((/* implicit */int) (signed char)-63))));
                arr_36 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_7 - 2]))) - (var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_7 - 2])) : (((/* implicit */int) arr_3 [i_7 - 1]))))) : (((((/* implicit */_Bool) arr_3 [i_7 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_7 - 1]))) : (var_12)))));
                var_30 *= ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                arr_37 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((-(6098813270047697707LL))))))));
            }
            var_31 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)214)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -974542472)) ? (arr_7 [i_0] [i_0] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7 - 2] [i_7 - 3]))) : ((+(arr_7 [i_0] [i_7] [(_Bool)1])))))));
            arr_38 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((int) (unsigned char)19))))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (arr_32 [i_7 - 3] [i_7 - 3])))));
            var_32 = ((/* implicit */unsigned short) var_1);
        }
    }
    for (long long int i_10 = 0; i_10 < 19; i_10 += 1) 
    {
        var_33 = ((/* implicit */signed char) ((unsigned long long int) arr_34 [i_10] [i_10] [i_10] [i_10]));
        /* LoopSeq 2 */
        for (signed char i_11 = 0; i_11 < 19; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                for (signed char i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    {
                        var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_10]))) != (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (arr_46 [i_10] [i_10] [i_10])))));
                        var_35 = ((/* implicit */unsigned short) arr_12 [i_11] [i_11] [i_11]);
                        var_36 += ((/* implicit */unsigned short) (_Bool)1);
                    }
                } 
            } 
            arr_51 [i_11] [i_10] = ((/* implicit */signed char) (~(((arr_27 [i_10] [i_11] [i_11]) | (arr_27 [i_11] [i_11] [i_10])))));
            arr_52 [i_10] = ((/* implicit */unsigned long long int) (signed char)-123);
            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) arr_12 [i_10] [i_11] [i_11]))));
        }
        for (unsigned int i_14 = 1; i_14 < 17; i_14 += 3) 
        {
            var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) ((((/* implicit */_Bool) 17530671382440387957ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) : (7347951964501684841ULL))))));
            /* LoopNest 2 */
            for (unsigned short i_15 = 2; i_15 < 18; i_15 += 1) 
            {
                for (unsigned long long int i_16 = 1; i_16 < 18; i_16 += 2) 
                {
                    {
                        arr_61 [i_10] [i_14] [i_15] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_10]))))) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (short)21972))));
                        arr_62 [i_10] = ((/* implicit */signed char) max((((2702007978U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_16 - 1] [i_14 + 2] [i_15 - 2]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_16 - 1] [i_14 + 2] [i_15 - 2])))))));
                        arr_63 [i_10] [i_16 + 1] = ((/* implicit */short) var_12);
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) min((((/* implicit */long long int) arr_14 [i_10] [i_10] [i_10])), (max((-6098813270047697708LL), (((/* implicit */long long int) arr_15 [i_14 - 1] [i_15 - 1] [i_16] [i_16 + 1])))))))));
                    }
                } 
            } 
            arr_64 [i_10] = ((/* implicit */unsigned short) arr_33 [i_10] [i_10] [i_10] [i_10]);
            arr_65 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((long long int) 3123443697U)) / ((-(arr_40 [i_14 + 1])))));
        }
        arr_66 [i_10] = var_10;
        var_40 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_32 [i_10] [i_10])) >= (((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_10]))))) ? ((+(18446744073709551604ULL))) : (((/* implicit */unsigned long long int) arr_46 [i_10] [i_10] [i_10]))))));
    }
    var_41 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (signed char)125)))) - (5054)))));
}
