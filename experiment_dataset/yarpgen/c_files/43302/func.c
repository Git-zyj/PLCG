/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43302
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            arr_7 [i_0] [(unsigned short)0] = ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) max((arr_0 [i_1 - 1] [i_1 - 1]), (arr_0 [i_1 + 1] [i_1 + 1])))) : ((-(min((((/* implicit */unsigned long long int) 25165824U)), (arr_2 [i_0] [i_0]))))));
            /* LoopSeq 3 */
            for (int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((4269801471U) << (((var_3) - (92071702665237642LL)))));
                arr_11 [(unsigned char)2] [i_1] [i_1] = ((/* implicit */signed char) ((4269801471U) - (((/* implicit */unsigned int) ((int) 1265681442)))));
                arr_12 [i_2] [i_1 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((min((var_9), (((/* implicit */long long int) arr_4 [i_0] [i_1] [(signed char)1])))) - (((/* implicit */long long int) ((arr_4 [i_0] [i_0] [i_2]) - (((/* implicit */int) arr_3 [i_2] [(signed char)0] [i_0])))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
                {
                    arr_15 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */int) (~(arr_2 [i_2 + 1] [i_2 - 1])));
                    arr_16 [i_3] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned char) var_14));
                }
                for (int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                {
                    arr_20 [i_0] [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) max((((long long int) var_13)), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_19 [(unsigned short)8] [i_1] [i_2] [i_2] [i_1])) : (arr_4 [(unsigned short)10] [i_1] [i_1])))))));
                    arr_21 [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 4269801472U))))))) & (arr_4 [i_0] [i_0] [i_0])));
                    arr_22 [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) 841940622);
                }
                for (int i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                {
                    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_13 [i_2 + 1] [i_2 + 1] [i_1 + 1] [i_0]), (((/* implicit */int) arr_6 [i_2 - 1] [i_1 - 2])))))));
                    arr_26 [(short)10] [12ULL] [i_2] [4] &= max((((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */unsigned long long int) 1659549552)) : (577129880456631045ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_5])) ? (((/* implicit */long long int) 285470704)) : (arr_5 [i_5] [i_1 - 2])))));
                    arr_27 [i_5] [6] [i_1 + 1] [i_1] [5ULL] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) 621572849032354724LL))));
                }
            }
            for (unsigned char i_6 = 2; i_6 < 11; i_6 += 3) /* same iter space */
            {
                var_17 = ((/* implicit */int) arr_18 [i_6 + 2] [i_1] [3ULL]);
                arr_30 [i_1] [i_6] [(unsigned char)7] = ((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (-(17869614193252920570ULL))))))));
            }
            for (unsigned char i_7 = 2; i_7 < 11; i_7 += 3) /* same iter space */
            {
                arr_33 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 524160)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_25 [8]))))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_23 [i_7])))), (((((/* implicit */_Bool) -7196666031855353104LL)) && (((/* implicit */_Bool) 17869614193252920570ULL))))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) 1939979270)))))))));
                var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_7 - 2] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (268434944) : (((/* implicit */int) (short)0))))) : (min((arr_28 [(unsigned short)2] [2] [0ULL]), (((/* implicit */unsigned long long int) (unsigned char)35)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 25165824U)) >= (arr_5 [i_1 - 1] [i_1 + 1])))))));
                arr_34 [i_0] [i_1] [i_0] [i_7] = ((arr_0 [i_0] [i_1]) - ((~(668676554))));
                arr_35 [i_0] [i_7] [i_7] = ((/* implicit */unsigned short) ((int) ((short) arr_25 [4U])));
            }
        }
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            var_19 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -285470705)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_9)))))) ? ((-(arr_14 [i_0] [i_0] [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) var_14))))) >= ((~(-7196666031855353104LL)))))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_17 [i_0] [2] [2] [i_0] [i_0] [i_0]))));
                var_21 = 1487934371830629786ULL;
            }
            /* vectorizable */
            for (unsigned int i_10 = 4; i_10 < 12; i_10 += 1) 
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_10] [0] [0] [i_10 - 3])) ? (arr_38 [(short)2] [i_8] [i_8]) : (arr_38 [i_10] [i_8] [(short)9])));
                /* LoopSeq 1 */
                for (short i_11 = 3; i_11 < 11; i_11 += 1) 
                {
                    arr_48 [i_8] [i_10] [i_8] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_11] [i_11 + 1] [i_11]))));
                    arr_49 [(unsigned short)1] [i_8] [i_10] [i_10] = ((/* implicit */unsigned int) 285470704);
                    arr_50 [i_0] [i_0] [i_0] [i_8] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_1 [i_0])) - (var_10)))));
                    arr_51 [i_8] [i_8] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-74))))));
                    var_23 *= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_6 [i_0] [i_11 + 2]))))));
                }
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1235445391)) ? (1318299301) : (((/* implicit */int) var_13))))) * (arr_43 [i_10 - 2] [i_10] [i_10 - 3]))))));
                arr_52 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((-270219879) + (2147483647))) >> (((((/* implicit */int) arr_40 [i_8] [i_8] [i_0])) - (10369)))))) ? (((((/* implicit */_Bool) 1474945366)) ? (285470704) : (((/* implicit */int) arr_23 [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned int) var_1)) == (4269801492U))))));
                arr_53 [i_8] [i_10] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_10 - 1] [6U] [i_0]))) <= (14111328836059387640ULL)));
            }
            for (short i_12 = 2; i_12 < 11; i_12 += 3) 
            {
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_17 [i_0] [i_8] [i_12] [i_0] [i_0] [7]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_13 = 0; i_13 < 13; i_13 += 1) 
                {
                    arr_61 [(unsigned short)4] |= ((/* implicit */int) ((arr_60 [8]) / (arr_60 [6ULL])));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)61732)) ? (((/* implicit */int) (unsigned short)11118)) : (1318299301)));
                    arr_62 [2] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 577129880456631045ULL)) ? (536854528U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_12 + 1] [i_12] [i_12 - 2] [i_12 - 2])))));
                    arr_63 [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0ULL))));
                }
                var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_28 [i_0] [i_8] [i_12])))) == (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_60 [i_8])) - (arr_32 [i_12 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (((((/* implicit */_Bool) arr_31 [i_0] [i_8])) ? (4269801492U) : (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_14 = 3; i_14 < 12; i_14 += 3) 
        {
            var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)51))));
            var_29 ^= ((/* implicit */short) (+(arr_37 [i_14 - 2] [i_14 - 1])));
            var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_46 [(unsigned short)10] [i_14 - 2])) ? (((/* implicit */int) arr_46 [8ULL] [i_14 - 1])) : (((/* implicit */int) arr_18 [i_14 + 1] [i_14 - 1] [i_14 + 1]))));
        }
        for (int i_15 = 1; i_15 < 12; i_15 += 1) 
        {
            arr_71 [i_0] [i_15 + 1] [i_15] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (var_13))))))), (max((max((((/* implicit */long long int) arr_24 [4U] [0] [10])), (var_9))), (((/* implicit */long long int) ((var_1) != (((/* implicit */int) arr_57 [i_0] [i_0] [8ULL] [i_0])))))))));
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((-1) - (-1318299301)))) : (max((10067736223208060758ULL), (((/* implicit */unsigned long long int) (unsigned short)15031))))));
            arr_72 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [(unsigned char)7] [i_0] [i_0] [i_0]))))) ? (max((((/* implicit */int) arr_8 [i_0] [i_15 + 1] [i_15 + 1] [(unsigned char)11])), (arr_39 [i_0] [i_15]))) : (max((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(unsigned char)3])), (arr_39 [i_0] [5ULL])))));
        }
        arr_73 [i_0] &= ((/* implicit */int) max((((((/* implicit */_Bool) (-(0ULL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_31 [i_0] [i_0])), (1318299301)))) : (((((/* implicit */_Bool) var_11)) ? (arr_28 [i_0] [(unsigned short)4] [i_0]) : (((/* implicit */unsigned long long int) 1012608454)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_0 [5ULL] [i_0]) > (arr_66 [i_0] [(signed char)2])))))))));
        arr_74 [i_0] = ((/* implicit */short) (unsigned short)29131);
    }
    var_32 = var_1;
    var_33 = ((/* implicit */long long int) var_11);
}
