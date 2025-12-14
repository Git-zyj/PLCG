/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197380
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (-(var_1)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))) : (((var_8) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_4);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                arr_9 [i_2] [(_Bool)1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_4)) < (((((int) (short)-24753)) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))))));
                arr_10 [i_0] [(unsigned short)10] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_6))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_7 [6ULL] [6ULL] [i_1] [i_2])))));
                var_11 = arr_6 [i_2];
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    var_12 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned short) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-29942))))))), (9223372036854775803LL)));
                    arr_13 [i_0] [i_2] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (-(arr_12 [13ULL] [(unsigned char)4] [i_2] [3LL] [i_1] [i_0])))) ? (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2))), (arr_8 [i_0] [i_2] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_6)))) - (arr_6 [i_0])))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_5))))) - (var_2)))));
                }
            }
            var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_8)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_7)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0])))))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    {
                        var_15 -= ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) var_6)))))) / (((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (1901670269422831575LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27150))))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1)))))));
                        arr_20 [i_4] [i_1] [i_4] [(short)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_4]))) : (((unsigned int) var_8))))) ? (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_19 [i_0] [i_4]))))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) var_7)))) : (((/* implicit */int) min((((unsigned short) arr_3 [(unsigned char)4] [(unsigned char)4] [(unsigned char)4])), (((/* implicit */unsigned short) (!(var_8)))))))));
                    }
                } 
            } 
            arr_21 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) <= (((/* implicit */int) var_7)))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */int) arr_19 [i_0] [4ULL])) - (arr_14 [i_0] [i_0] [i_0] [6ULL]))) : (min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) min((arr_19 [i_0] [16U]), (((/* implicit */short) var_8)))))))));
        }
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
                        {
                            var_16 -= ((((/* implicit */long long int) ((/* implicit */int) arr_3 [2LL] [2LL] [i_8]))) - ((~(((long long int) var_0)))));
                            var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)14])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_29 [i_9] [i_6] [i_7] [i_8] [i_7] [(_Bool)1]))))) ? (((((((/* implicit */int) var_3)) - (((/* implicit */int) var_0)))) - (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)3] [i_0])) || (((/* implicit */_Bool) ((int) var_6))))))));
                            arr_31 [i_0] [i_8] [i_0] [i_8] [(signed char)1] [i_6] [i_9] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_30 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) (-(-1047065503)))) : (arr_11 [i_0] [i_6] [i_7] [i_6] [i_6]))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_4 [i_0] [1U] [i_8]))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned long long int) var_9);
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_0])) ? (((/* implicit */int) arr_17 [i_0] [i_6] [i_10] [i_0])) : (arr_5 [i_10] [i_0] [i_0])))) ^ (((unsigned int) arr_3 [i_0] [i_6] [(unsigned short)3]))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) - (min((var_1), (((/* implicit */long long int) var_0))))))) ? (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)38385))))) - (((unsigned long long int) arr_3 [(unsigned short)22] [i_6] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
                            var_23 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((var_5) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_29 [(signed char)16] [16] [i_8] [i_7] [i_6] [(signed char)16])))) & (((/* implicit */int) arr_23 [i_0] [i_6] [i_7])))))));
                        }
                        arr_39 [i_8] [i_6] [i_0] [i_8] = ((/* implicit */short) (-((+(((/* implicit */int) (unsigned short)38386))))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-1047065503) | (((/* implicit */int) (unsigned char)183))))) ? ((~(((((/* implicit */int) arr_16 [(_Bool)1] [6ULL] [i_8] [i_8])) * (((/* implicit */int) var_7)))))) : (((((/* implicit */int) arr_25 [i_0] [i_0] [i_7] [i_8])) * (((/* implicit */int) arr_17 [i_6] [i_6] [(unsigned short)14] [i_8]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_12 = 0; i_12 < 17; i_12 += 2) 
    {
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_4))));
        /* LoopNest 3 */
        for (unsigned short i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (signed char i_15 = 0; i_15 < 17; i_15 += 2) 
                {
                    {
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) var_0))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_27 ^= ((/* implicit */unsigned short) ((((unsigned long long int) var_9)) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_49 [i_12] [i_12] [(signed char)11]))))))));
                            var_28 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
                            var_29 = ((/* implicit */int) ((var_2) & (arr_24 [i_15] [i_12] [i_13] [i_12])));
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_6 [i_12])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_4)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_17 = 0; i_17 < 17; i_17 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_7))))) <= (((int) var_5))));
                            arr_55 [i_12] [i_12] [i_17] [i_12] [i_12] = ((/* implicit */unsigned short) ((arr_12 [i_12] [i_12] [i_14] [i_15] [i_14] [i_13]) & (arr_12 [i_13] [i_13] [i_14] [i_15] [i_15] [i_13])));
                            arr_56 [(unsigned char)11] [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_54 [i_12] [i_14] [i_14] [i_15])) : (((/* implicit */int) arr_54 [i_14] [i_15] [(short)3] [i_14]))));
                        }
                        arr_57 [i_12] [i_12] [8LL] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? ((-(var_1))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_44 [i_12] [i_13] [i_14])))))));
                    }
                } 
            } 
        } 
        arr_58 [9] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((var_9) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))))) & (((((/* implicit */long long int) ((/* implicit */int) var_5))) - (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_6)), (arr_51 [(_Bool)1] [i_12] [i_12] [i_12]))))) - (((unsigned long long int) ((((/* implicit */int) arr_17 [i_12] [(unsigned char)17] [i_12] [i_12])) - (((/* implicit */int) var_3))))))))));
    }
    for (unsigned short i_18 = 0; i_18 < 19; i_18 += 3) 
    {
        var_33 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_18])) ? (((((/* implicit */_Bool) (unsigned short)19094)) ? (((/* implicit */int) (unsigned short)38392)) : (((/* implicit */int) (unsigned short)1)))) : ((((+(((/* implicit */int) var_8)))) & (((/* implicit */int) ((((/* implicit */_Bool) 1047065502)) || (((/* implicit */_Bool) (unsigned short)27150)))))))));
        arr_61 [(signed char)16] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_2))));
    }
}
