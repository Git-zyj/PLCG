/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199502
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
    var_14 = ((/* implicit */unsigned char) var_8);
    var_15 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) (unsigned char)253)), (1605039611U))), ((~(((((/* implicit */_Bool) 1130688114U)) ? (var_5) : (var_10)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned short i_4 = 2; i_4 < 16; i_4 += 4) 
                            {
                                var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_9 [i_0] [16ULL] [i_2 + 2] [i_0] [16ULL]))))) : ((+(var_10)))));
                                var_17 = ((/* implicit */_Bool) max((var_17), (arr_5 [i_0] [i_0])));
                                arr_11 [2] [(unsigned char)8] [i_2] [13ULL] [i_2 - 1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1]))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_18 = ((/* implicit */_Bool) ((arr_13 [i_1 + 1] [i_5]) | (arr_4 [i_0] [i_0] [i_0 + 1] [i_0])));
                                var_19 = ((/* implicit */unsigned int) (-(((arr_5 [i_0] [i_0 - 1]) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)251)))) : (85702711)))));
                            }
                            for (unsigned int i_6 = 1; i_6 < 17; i_6 += 2) /* same iter space */
                            {
                                arr_18 [1ULL] [i_3 + 3] [i_6] [i_6] [(_Bool)1] [i_0] = (-(((((/* implicit */int) arr_14 [i_0] [(unsigned short)13] [(unsigned short)13] [(unsigned short)13] [i_0 - 3] [i_0])) * (((/* implicit */int) var_8)))));
                                var_20 += ((/* implicit */unsigned short) 1879048192U);
                                var_21 = ((/* implicit */unsigned char) (+(4226168190U)));
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_6 [6U] [i_1] [i_1 + 1]))));
                            }
                            /* vectorizable */
                            for (unsigned int i_7 = 1; i_7 < 17; i_7 += 2) /* same iter space */
                            {
                                var_23 += ((/* implicit */_Bool) (~(18446744073709551615ULL)));
                                arr_22 [i_0] [i_0] [i_1 + 1] [i_2] [i_3] [i_7 + 2] = (-(arr_8 [i_0] [i_1 + 1] [i_3 + 3] [i_0]));
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_0 + 1] [i_0 + 1] [i_2 + 2] [i_2 + 2] [i_0 + 1])) + (((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (arr_19 [i_0 - 2] [18U] [i_0] [i_0 - 4] [i_0] [i_0 - 4])));
                                var_25 -= ((((/* implicit */_Bool) (-(85702711)))) ? (var_13) : (487509919U));
                            }
                            var_26 ^= arr_8 [i_1 - 1] [i_2 + 1] [i_3] [i_3 - 1];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_8 = 2; i_8 < 18; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) arr_6 [i_1] [i_8 - 1] [i_9]);
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) 0ULL))));
                            /* LoopSeq 2 */
                            for (int i_10 = 0; i_10 < 19; i_10 += 3) 
                            {
                                var_29 = ((/* implicit */unsigned int) arr_24 [i_10] [(_Bool)1] [i_10]);
                                var_30 += ((/* implicit */_Bool) 63U);
                                arr_33 [i_9] [i_9] [i_8] [i_8] [i_8 + 1] = ((/* implicit */unsigned short) ((((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */unsigned int) (~(arr_28 [(unsigned char)0] [i_0 - 3] [i_9] [i_9]))))));
                            }
                            for (unsigned int i_11 = 2; i_11 < 16; i_11 += 2) 
                            {
                                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (-(max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))))))));
                                var_32 ^= ((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_10 [9ULL] [i_1] [9ULL] [i_9] [10])), ((+(((/* implicit */int) (unsigned char)253)))))) >> ((((-(((/* implicit */int) arr_27 [i_0] [i_11])))) + (76)))));
                                var_33 += ((/* implicit */unsigned short) arr_35 [(_Bool)1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                                var_34 ^= ((/* implicit */_Bool) arr_36 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]);
                                var_35 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_8] [i_9] [i_11]))))), (max((((/* implicit */unsigned long long int) arr_0 [i_0 - 2])), (var_11)))))) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */unsigned long long int) 609274926U)) ^ (var_0))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) 
    {
        for (unsigned char i_13 = 2; i_13 < 7; i_13 += 2) 
        {
            for (unsigned char i_14 = 0; i_14 < 10; i_14 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned int i_16 = 2; i_16 < 6; i_16 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
                                arr_50 [i_15] [i_14] = ((/* implicit */unsigned int) arr_44 [i_13 + 3] [i_15] [i_13 + 3] [i_12]);
                                arr_51 [i_15] [i_13] [i_13] [i_13 + 1] [i_13 + 3] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_6 [i_12] [i_15] [i_16])) ? (((/* implicit */unsigned long long int) -85702712)) : (arr_6 [i_12] [i_12] [i_12])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        for (unsigned char i_18 = 4; i_18 < 7; i_18 += 3) 
                        {
                            {
                                var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
                                var_38 = ((((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_47 [i_12] [i_13] [i_17])))) ? ((-(arr_1 [i_12]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)69)) && (((/* implicit */_Bool) var_2)))))))) == (((/* implicit */unsigned int) (-(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)166)) - (138)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
