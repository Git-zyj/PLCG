/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219566
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
    var_10 = ((/* implicit */unsigned short) min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)1984)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */unsigned int) arr_5 [i_0]);
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            arr_16 [i_0] [(_Bool)1] [i_1] [i_2] [i_1] [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)0))));
                            var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (short)-32766)) <= (((/* implicit */int) arr_1 [i_2]))))))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [i_1] [i_1] = ((/* implicit */_Bool) (unsigned char)255);
                            arr_20 [i_0] [i_1 - 1] [i_0] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)1984)) != (((/* implicit */int) (unsigned char)26))));
                        }
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) min((((unsigned long long int) max((arr_18 [i_0] [i_0] [i_1] [i_0] [7LL] [(short)9] [i_6]), (((/* implicit */unsigned int) (unsigned char)39))))), (((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_1 + 2]), (arr_0 [i_6] [i_1 + 1])))))))));
                        var_14 = ((/* implicit */unsigned short) (short)638);
                    }
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        arr_27 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((5373007904059018306ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_7])))));
                        arr_28 [(_Bool)1] [(signed char)8] [i_1] [(_Bool)1] [i_1] [(unsigned char)7] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_18 [i_1] [i_1 + 3] [i_1] [i_1] [(unsigned char)11] [(unsigned short)11] [i_1 + 2])) ? (arr_18 [(signed char)10] [(signed char)10] [i_0] [i_1] [i_1] [i_1] [i_1 + 2]) : (arr_18 [i_0] [i_1] [i_1 + 4] [i_1] [7U] [i_1 + 4] [i_1 + 2]))), ((-(arr_18 [i_0] [i_0] [i_1] [i_1] [(unsigned short)0] [i_1] [i_1 + 2])))));
                        var_15 *= ((((/* implicit */int) ((_Bool) (unsigned char)135))) == (((/* implicit */int) var_1)));
                        var_16 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (short)3840)) ? (((/* implicit */int) (short)-24181)) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0]))))) / (arr_4 [i_0] [i_0] [i_2]))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)-3459)))) * (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) * (1331178559U))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_31 [(short)9] [i_2] [i_2] [(unsigned char)13] [i_2] [i_1] = ((/* implicit */short) arr_2 [i_1 + 2]);
                        arr_32 [i_1] [i_1] = ((/* implicit */short) ((arr_26 [i_2] [(short)2] [i_8 - 1] [i_1]) & (((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_2] [i_8]))) : (15692449670131474785ULL)))));
                    }
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 19; i_9 += 3) 
                    {
                        for (signed char i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned long long int) arr_35 [i_0] [i_1] [(short)15] [i_9]);
                                arr_40 [i_0] [i_1] [i_2] [i_9] [i_1] = ((/* implicit */unsigned short) var_8);
                            }
                        } 
                    } 
                    var_18 = ((short) var_5);
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) max((((/* implicit */short) (unsigned char)180)), ((short)13399)));
        arr_41 [(signed char)18] = ((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_20 *= ((/* implicit */_Bool) ((short) (signed char)-16));
    }
    /* vectorizable */
    for (short i_11 = 1; i_11 < 21; i_11 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (long long int i_13 = 4; i_13 < 19; i_13 += 2) 
            {
                for (unsigned char i_14 = 1; i_14 < 22; i_14 += 2) 
                {
                    {
                        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_42 [i_11]))));
                        arr_54 [i_11] [i_12] [i_13 + 1] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-4)) ? (-2102562966047087167LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-27177)))));
                        var_22 += ((/* implicit */unsigned short) arr_48 [i_11] [(unsigned short)4] [i_13]);
                        /* LoopSeq 3 */
                        for (signed char i_15 = 3; i_15 < 20; i_15 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((signed char) (signed char)-11));
                            var_24 ^= ((/* implicit */unsigned long long int) arr_50 [i_11] [i_12] [6LL] [i_13]);
                            arr_57 [i_13] [i_13] [i_13] [i_12] [i_13] |= ((/* implicit */_Bool) ((unsigned long long int) ((2754294403578076814ULL) != (arr_47 [i_11] [i_11] [i_13]))));
                            arr_58 [i_14] [i_11] [i_13] [i_14 - 1] [i_15 - 1] = ((/* implicit */long long int) (short)-16112);
                        }
                        for (short i_16 = 2; i_16 < 21; i_16 += 2) 
                        {
                            var_25 = ((/* implicit */long long int) arr_56 [21ULL] [21ULL] [21ULL] [i_14 - 1] [i_14 + 1] [i_14]);
                            var_26 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (short)-10))));
                            var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_60 [i_11 - 1] [i_16] [i_13] [i_14] [i_16])) - (((/* implicit */int) arr_60 [i_11] [i_16] [i_11] [i_14 - 1] [i_11]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)7963))));
                            var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_55 [i_11]))));
                            arr_62 [i_11] [i_12] [i_11] [i_13 + 4] [i_14] [i_16] = ((/* implicit */long long int) (-(((/* implicit */int) arr_59 [i_14 + 1] [i_14 + 1] [i_14 + 1] [(signed char)15] [i_14 + 1] [i_14 + 1] [i_14]))));
                        }
                        for (short i_17 = 1; i_17 < 22; i_17 += 2) 
                        {
                            arr_65 [i_13] [i_13] [i_13] |= ((/* implicit */signed char) arr_46 [i_12]);
                            arr_66 [i_11] [i_11] [i_11] [(short)8] [i_17] = ((/* implicit */signed char) arr_60 [19ULL] [i_11] [i_12] [i_13 - 2] [i_13 - 4]);
                        }
                    }
                } 
            } 
        } 
        arr_67 [i_11] = ((/* implicit */_Bool) arr_64 [(unsigned char)0] [i_11 - 1] [i_11] [i_11] [(unsigned char)20] [i_11] [i_11]);
        arr_68 [(short)18] &= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_43 [(short)10])) || (arr_45 [i_11]))))));
        arr_69 [(unsigned short)10] &= ((/* implicit */_Bool) arr_61 [i_11] [i_11 + 2] [i_11] [(signed char)22] [i_11 + 1] [(short)11] [i_11 + 1]);
        arr_70 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_11])) && (((/* implicit */_Bool) arr_43 [i_11]))));
    }
}
