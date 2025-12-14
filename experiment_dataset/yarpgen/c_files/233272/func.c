/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233272
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
    var_14 = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (var_10)))) ? ((+(((/* implicit */int) var_11)))) : ((-(((/* implicit */int) (unsigned short)25596)))))), (((((/* implicit */_Bool) -4846224576727461686LL)) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) (short)2325))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */long long int) max((((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), ((short)-1))))) : (arr_1 [(signed char)8]))), (max((arr_1 [i_0 - 1]), (((/* implicit */unsigned long long int) (_Bool)1))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                var_15 = ((/* implicit */long long int) ((unsigned short) var_2));
                arr_7 [1LL] [i_2] [(unsigned char)11] [1LL] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) var_7)))));
            }
            for (short i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
            {
                arr_10 [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                arr_11 [i_0] [(unsigned short)16] [(unsigned char)7] = ((/* implicit */_Bool) var_8);
                arr_12 [i_0 + 2] [i_1] [15LL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))));
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_5)))) ? (arr_9 [(unsigned char)1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) == (var_5)))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        arr_19 [i_0 + 1] [(short)4] [i_3] [(unsigned char)0] [i_5] [i_5] = ((/* implicit */int) (-(var_10)));
                        arr_20 [i_0] [i_1] [i_3] [i_4] [i_5 - 1] = ((/* implicit */unsigned char) var_7);
                    }
                    arr_21 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 2]));
                    var_17 = ((/* implicit */long long int) ((unsigned short) var_9));
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    var_18 = ((/* implicit */signed char) var_11);
                    arr_24 [i_0] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */long long int) var_1);
                }
                for (unsigned short i_7 = 1; i_7 < 18; i_7 += 2) 
                {
                    arr_27 [i_7] [2LL] [(unsigned char)0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) (unsigned short)835)) * (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) var_2))))));
                    var_19 = ((/* implicit */short) (~(7802667926746237257LL)));
                    arr_28 [(short)17] [i_1] [i_7] [(short)17] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_8)) : (18446744073709551612ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) 17412027651109575303ULL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                }
            }
            for (short i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_9 = 1; i_9 < 18; i_9 += 4) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 2) 
                    {
                        {
                            var_20 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((long long int) var_8)))));
                            var_22 = ((/* implicit */long long int) var_1);
                        }
                    } 
                } 
                var_23 *= ((/* implicit */_Bool) ((unsigned char) arr_25 [i_0 + 3] [i_1] [i_0 + 3] [i_1]));
            }
            for (short i_11 = 0; i_11 < 19; i_11 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned long long int) var_11);
                var_25 -= ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((15ULL) < (((/* implicit */unsigned long long int) var_8)))))) : (arr_32 [i_0]));
                var_26 ^= ((/* implicit */_Bool) var_4);
                arr_41 [i_0 - 1] [i_1] [i_1] [i_11] = ((/* implicit */short) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) var_2)))));
            }
            arr_42 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (unsigned char)40);
        }
        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 2) /* same iter space */
        {
            arr_45 [(unsigned short)9] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -5144641771519140684LL)) : (var_13))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
            /* LoopSeq 1 */
            for (long long int i_13 = 0; i_13 < 19; i_13 += 4) 
            {
                var_27 = min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_37 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)1)))))))), (((((/* implicit */long long int) ((/* implicit */int) max((var_7), ((short)-24909))))) | (((((/* implicit */long long int) ((/* implicit */int) (signed char)-92))) - (5102647995928768795LL))))));
                arr_50 [i_13] [6LL] [(signed char)5] [i_0] = ((/* implicit */long long int) var_6);
            }
            var_28 -= ((/* implicit */long long int) ((signed char) (short)-24885));
            arr_51 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)43)) > (((/* implicit */int) (_Bool)1))));
            var_29 ^= ((/* implicit */unsigned short) arr_6 [i_0 + 1] [(unsigned char)5] [i_12]);
        }
        for (unsigned int i_14 = 0; i_14 < 19; i_14 += 2) /* same iter space */
        {
            arr_55 [i_0] [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_3))))))) ? (((((/* implicit */unsigned long long int) arr_31 [i_14] [i_0 - 1] [i_14])) | (12280198123952195243ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_54 [(unsigned char)12])), (var_7)))))));
            arr_56 [i_0] = ((/* implicit */long long int) var_12);
            arr_57 [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((((arr_43 [i_0 + 1]) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) == (((long long int) var_13))));
            arr_58 [i_14] [i_0] = ((/* implicit */short) var_11);
        }
        /* vectorizable */
        for (unsigned short i_15 = 2; i_15 < 15; i_15 += 4) 
        {
            arr_61 [i_0] [i_15] = ((/* implicit */unsigned char) ((short) (short)24871));
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_1)))))));
        }
        var_31 = ((/* implicit */long long int) max((var_31), ((~(max((((/* implicit */long long int) (short)1)), (max((((/* implicit */long long int) arr_38 [13LL] [i_0 - 1] [i_0 - 1] [i_0 - 1] [(signed char)13] [i_0] [17LL])), (var_5)))))))));
    }
    for (long long int i_16 = 1; i_16 < 16; i_16 += 2) /* same iter space */
    {
        arr_64 [i_16] = ((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), ((short)-1)));
        arr_65 [(short)5] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */long long int) (+(((/* implicit */int) var_4))))) + (min((var_8), (((/* implicit */long long int) var_9)))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
        arr_66 [i_16] = min((((/* implicit */long long int) (unsigned char)205)), (5604244442240988315LL));
    }
}
