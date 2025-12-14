/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242308
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) var_1);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    var_19 = ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned char) (signed char)64))))) && (((/* implicit */_Bool) 16777088U)));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        arr_14 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((_Bool) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)4332)))), (16777102U))));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((unsigned long long int) max(((-(4278190208U))), (((/* implicit */unsigned int) arr_11 [(unsigned short)8] [i_2 - 1] [i_2] [i_2])))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 13; i_4 += 1) /* same iter space */
                    {
                        var_21 -= ((/* implicit */_Bool) (~(arr_1 [i_0] [i_1 - 2])));
                        var_22 -= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_2 - 1]))));
                    }
                    for (int i_5 = 1; i_5 < 13; i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_2] [i_1] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(4278190207U)))) ? (arr_7 [i_0] [i_1] [i_2] [i_5]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_4 [i_0] [i_0])), ((unsigned short)4)))) ? (((/* implicit */int) ((unsigned char) var_9))) : (arr_1 [i_2 + 2] [i_1 - 1]))))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 715601878U)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(unsigned char)15] [(unsigned char)15] [(_Bool)1] [i_1 + 2] [i_2] [(unsigned short)6]))) ^ (min((((/* implicit */unsigned int) (unsigned short)35138)), (4278190208U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1] [(unsigned char)15])))))));
                        arr_20 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_1), (((/* implicit */short) arr_9 [i_5] [i_2] [i_1 + 1] [i_0])))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-24)) && (((/* implicit */_Bool) arr_8 [i_2] [i_2 + 1] [15U] [i_5])))) ? (arr_12 [i_2] [i_5] [i_2] [i_0] [i_2]) : (((/* implicit */int) arr_10 [i_0] [(unsigned short)4] [(unsigned short)4] [i_0] [i_0] [(_Bool)1]))))) : (arr_7 [i_5] [i_2] [i_2] [i_0])));
                        var_24 += ((/* implicit */unsigned char) 16777079U);
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) arr_8 [(short)10] [i_1] [(short)6] [i_0]))));
                    }
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_16 [i_0] [i_0] [i_2] [i_0] [2ULL] [i_2]))));
                }
                arr_21 [(unsigned char)8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((arr_9 [1U] [i_1] [i_1 - 1] [i_1 + 1]) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1 - 3] [i_1 - 2])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_1 - 2] [i_1 + 1]))))) % (min((((/* implicit */unsigned int) ((4278190232U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(short)3] [i_1] [i_1] [(signed char)13] [i_0] [i_1])))))), (min((16777089U), (((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_1 - 1] [i_0] [(unsigned char)16]))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned int) ((short) (-(((/* implicit */int) var_2)))))))))));
    /* LoopSeq 1 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_6] [i_6])) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)20911)), (4278190207U))))));
        var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)27953)), (arr_23 [i_6] [i_6])))) ? (((/* implicit */int) min((((arr_22 [i_6] [i_6]) <= (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) arr_22 [i_6] [i_6])) || (((/* implicit */_Bool) arr_23 [i_6] [(unsigned char)20]))))))) : (var_9)));
    }
    /* LoopSeq 1 */
    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        var_30 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_4 [i_7] [i_7])), ((unsigned char)187)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (short)3584)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27953))) : (10866463011070334439ULL)))))));
        /* LoopSeq 2 */
        for (unsigned char i_8 = 3; i_8 < 9; i_8 += 1) 
        {
            var_31 = ((/* implicit */long long int) arr_4 [i_7] [i_7]);
            arr_30 [i_7] [(signed char)11] = ((/* implicit */unsigned long long int) (unsigned short)15190);
        }
        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            arr_34 [i_9] = max(((!(((/* implicit */_Bool) (short)-27954)))), (arr_32 [i_7] [i_9]));
            var_32 = ((/* implicit */unsigned char) (-(max((arr_23 [i_7] [i_9]), (((/* implicit */unsigned int) (unsigned short)55394))))));
        }
        arr_35 [i_7] &= ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
    {
        arr_39 [i_10] [i_10] = ((/* implicit */_Bool) arr_16 [i_10] [i_10] [i_10] [(short)1] [i_10] [i_10]);
        arr_40 [i_10] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-31)) && (((/* implicit */_Bool) ((((((/* implicit */int) (short)-27953)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)10130)) - (10130))))))))), (((((/* implicit */int) arr_37 [i_10] [i_10])) / (var_6)))));
        /* LoopSeq 1 */
        for (unsigned char i_11 = 3; i_11 < 9; i_11 += 2) 
        {
            var_33 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_5))))))), (((((/* implicit */int) var_3)) + (((/* implicit */int) ((unsigned short) var_5)))))));
            arr_45 [(short)8] [i_10] = ((/* implicit */_Bool) arr_22 [i_10] [i_11 - 3]);
            var_34 = ((/* implicit */unsigned char) (_Bool)0);
            /* LoopSeq 2 */
            for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                var_35 -= ((/* implicit */unsigned short) var_7);
                var_36 |= ((/* implicit */_Bool) (+(min((max((11537984769147617750ULL), (((/* implicit */unsigned long long int) (unsigned char)112)))), (((/* implicit */unsigned long long int) min(((unsigned short)14661), (((/* implicit */unsigned short) var_10)))))))));
                /* LoopNest 2 */
                for (unsigned char i_13 = 3; i_13 < 9; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-17)) * (((/* implicit */int) (signed char)65))));
                            arr_54 [i_12] [i_12] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) max((arr_25 [i_12]), ((unsigned short)0))))) ^ (((/* implicit */int) (unsigned char)128))));
                            var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_10] [i_11] [i_10] [i_12]))) <= (var_7)))), ((unsigned short)9470)))))))));
                            arr_55 [i_10] [i_11] [i_11] [i_13 + 1] [i_11] = ((/* implicit */_Bool) arr_3 [i_11 - 2]);
                        }
                    } 
                } 
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_39 = ((((/* implicit */_Bool) (unsigned short)13673)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((unsigned short) ((short) (_Bool)1)))));
                var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_28 [i_10] [i_11])), (arr_13 [i_11 - 2] [i_10])))) ? ((+(0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                arr_59 [i_10] [i_11] [i_10] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_9 [i_15] [i_11 - 3] [i_10] [i_10]))) % (((/* implicit */int) max((((/* implicit */unsigned short) min((((/* implicit */signed char) arr_4 [i_11] [i_10])), ((signed char)119)))), (arr_27 [i_10] [i_10]))))));
            }
        }
    }
    for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) /* same iter space */
    {
        var_41 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_57 [i_16] [(signed char)2] [i_16])) / (((/* implicit */int) arr_43 [2] [i_16]))))) ? (((var_17) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_16] [i_16] [i_16]))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-120)), ((short)0)))) : (((/* implicit */int) (unsigned char)0)))))));
        var_42 = ((/* implicit */signed char) arr_31 [i_16] [i_16] [i_16]);
        arr_64 [i_16] = ((/* implicit */_Bool) arr_41 [i_16] [i_16]);
        var_43 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_12)), ((~(((/* implicit */int) (signed char)23))))));
        arr_65 [i_16] [i_16] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) * (((((/* implicit */_Bool) arr_38 [4])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_18)) * (((/* implicit */int) (signed char)-20))))) : (((var_13) / (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
    }
}
