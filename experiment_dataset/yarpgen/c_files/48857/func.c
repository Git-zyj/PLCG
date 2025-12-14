/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48857
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
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_14 = (+(-364063785));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    arr_10 [i_1] [i_1] [(unsigned char)2] [i_0] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)59)) <= (((/* implicit */int) arr_2 [i_1] [15ULL]))));
                    arr_11 [i_0] = ((/* implicit */int) ((-525407590) > (((/* implicit */int) arr_5 [i_2]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_14 [i_3] [i_2] [i_1] = ((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */int) arr_0 [(unsigned char)2])) : (((/* implicit */int) arr_0 [i_3])));
                        var_15 = ((/* implicit */int) arr_8 [i_1] [(signed char)6] [(signed char)6]);
                        arr_15 [i_0] [i_0] [i_0] [8U] = ((/* implicit */unsigned int) (~(arr_4 [i_1] [i_1] [i_0])));
                        var_16 += ((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3]);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            arr_21 [2ULL] [i_1] [i_1] [(signed char)6] = (-(((/* implicit */int) arr_6 [i_5])));
                            arr_22 [9] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2]);
                            var_17 = ((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [(signed char)17] [i_1] [i_5] [i_5] [(short)10] [i_2]))) + (arr_7 [i_1] [(_Bool)1] [(unsigned char)13])))));
                            var_18 = 4194303U;
                        }
                        for (int i_6 = 3; i_6 < 14; i_6 += 3) 
                        {
                            arr_25 [i_6] [i_4] [i_2] [i_2] [i_1] [11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_6 + 3] [(unsigned short)7] [i_6 - 3] [i_6 - 3] [i_6] [i_1])) || (((/* implicit */_Bool) arr_23 [(unsigned char)10] [i_6 - 3] [i_6 - 3] [(unsigned char)10] [i_4]))));
                            arr_26 [(signed char)12] [i_4] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (+(arr_3 [i_6 - 2] [i_6 + 3])));
                            arr_27 [i_6 - 1] [i_6] [i_6 + 1] [i_4] [i_2] [15] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_12 [i_6 + 1] [i_6 + 3] [i_6 + 3] [i_6 + 4]))));
                            var_19 = ((/* implicit */int) arr_24 [i_6] [i_6] [i_6 - 3] [i_1]);
                        }
                        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            arr_30 [i_0] [i_1] [i_2] [i_4] [i_1] |= ((/* implicit */unsigned char) arr_19 [i_0] [(unsigned char)1] [i_2]);
                            var_20 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)15781))));
                        }
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((-1LL) == (((/* implicit */long long int) (+(((/* implicit */int) (signed char)74))))))))));
                    }
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        var_22 += ((/* implicit */int) ((long long int) (unsigned short)14));
                        arr_34 [i_8] [i_1] [i_2] [(unsigned char)0] = ((((/* implicit */int) arr_24 [i_8] [i_2] [i_1] [i_0])) & (((/* implicit */int) arr_24 [i_1] [i_8] [i_2] [i_8])));
                        /* LoopSeq 1 */
                        for (int i_9 = 4; i_9 < 17; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) (~((-(-1LL)))));
                            var_24 = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
                        }
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_0] [i_10] [i_0] [i_10] [i_1] [i_10] [(unsigned char)15])) ? (arr_36 [i_0] [i_0] [i_2] [i_2] [3] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74)))));
                        /* LoopSeq 4 */
                        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_11])) ? (var_6) : (((/* implicit */int) arr_18 [i_0] [3ULL] [i_0] [i_10] [i_10] [i_0]))));
                            var_27 = ((/* implicit */unsigned int) var_11);
                            arr_45 [i_0] [i_0] [1U] = ((/* implicit */short) 1713011705394113145ULL);
                            var_28 ^= ((/* implicit */long long int) ((arr_23 [i_1] [i_1] [i_1] [i_1] [i_1]) * (((/* implicit */unsigned long long int) arr_9 [i_2] [i_1] [i_1]))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
                        {
                            arr_50 [i_0] [i_0] [i_2] [i_10] [i_12] = 1912443529;
                            var_29 += ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_0] [i_10]))));
                            arr_51 [i_12] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [(unsigned short)11] [10ULL] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) arr_9 [i_12] [i_1] [i_1])) : (((((/* implicit */_Bool) arr_33 [(unsigned short)14] [i_10] [i_10] [(unsigned short)14])) ? (arr_43 [i_12] [6LL] [6LL] [i_1] [6LL]) : (((/* implicit */unsigned long long int) var_10))))));
                        }
                        for (signed char i_13 = 0; i_13 < 18; i_13 += 4) /* same iter space */
                        {
                            var_30 = ((((arr_46 [i_13] [i_10] [i_2] [i_2] [i_1] [i_1] [i_0]) + (2147483647))) >> (((arr_46 [i_0] [i_1] [(signed char)3] [i_10] [5ULL] [(signed char)3] [(_Bool)1]) + (994373321))));
                            arr_54 [i_13] [i_10] [i_2] [i_1] [14] = ((/* implicit */unsigned long long int) arr_13 [i_10] [i_0]);
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (-((+(arr_7 [i_0] [i_0] [i_0]))))))));
                        }
                        for (signed char i_14 = 0; i_14 < 18; i_14 += 4) /* same iter space */
                        {
                            arr_57 [i_14] [i_2] [i_2] [15U] [i_0] = ((/* implicit */int) (~(arr_8 [i_0] [i_0] [i_0])));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_2] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (4188101224655987870ULL)));
                            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) 13351592686901139989ULL)) || (((/* implicit */_Bool) arr_56 [i_14])))))));
                        }
                    }
                }
                for (unsigned char i_15 = 0; i_15 < 18; i_15 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 18; i_16 += 2) 
                    {
                        for (int i_17 = 0; i_17 < 18; i_17 += 1) 
                        {
                            {
                                var_34 = ((unsigned char) var_8);
                                var_35 = ((/* implicit */unsigned long long int) arr_38 [12] [i_16] [12] [i_16]);
                            }
                        } 
                    } 
                    var_36 = ((((/* implicit */_Bool) ((arr_43 [i_1] [i_1] [i_15] [i_15] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_0] [i_1] [i_0] [i_1] [i_1])))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_49 [i_0] [(unsigned char)11] [1ULL] [1ULL] [i_0] [i_0] [i_0]))))) : (((arr_37 [i_15]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))))));
                    var_37 = ((/* implicit */int) (signed char)111);
                }
                for (int i_18 = 1; i_18 < 16; i_18 += 2) /* same iter space */
                {
                    var_38 ^= (-(max((arr_9 [(unsigned char)7] [i_18 + 2] [i_1]), (arr_9 [i_0] [i_18 - 1] [i_18]))));
                    var_39 = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_6 [i_18 + 1])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_18 + 2])) : (((/* implicit */int) arr_6 [i_18 + 1]))))));
                }
                for (int i_19 = 1; i_19 < 16; i_19 += 2) /* same iter space */
                {
                    var_40 = ((unsigned int) arr_17 [i_0] [i_0] [i_19] [i_19] [i_1]);
                    /* LoopNest 2 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 18; i_21 += 4) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) arr_66 [(_Bool)1] [(_Bool)1] [i_19] [(unsigned char)16]))));
                                var_42 = (+((~((+(arr_29 [i_20]))))));
                            }
                        } 
                    } 
                    arr_77 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_12 [i_0] [i_1] [i_19 - 1] [i_1])) / (((/* implicit */int) arr_12 [(signed char)16] [(signed char)16] [i_19 + 1] [(signed char)16])))) != (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_19 + 2] [i_1])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_19 + 2] [i_1])) : (((/* implicit */int) (unsigned short)49843))))));
                    var_43 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_69 [i_0] [i_19 - 1] [i_1])) / (((/* implicit */int) arr_69 [i_1] [i_19 + 2] [i_1]))))));
                }
            }
        } 
    } 
    var_44 = ((/* implicit */unsigned char) min((max((var_6), (var_6))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83))) : (var_0)))))))));
    var_45 = ((var_6) / (min(((-(((/* implicit */int) (signed char)-43)))), (((/* implicit */int) var_5)))));
    var_46 += ((/* implicit */short) ((min((var_9), (((/* implicit */int) (unsigned char)197)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
}
