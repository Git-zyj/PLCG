/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20304
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((int) arr_2 [i_0]));
        var_14 = ((/* implicit */unsigned char) max((18446744073709551601ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 16ULL))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */int) var_12)) * (((/* implicit */int) (_Bool)0)))))))));
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                arr_7 [i_1] = ((18446744073709551598ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
                var_15 = ((/* implicit */unsigned char) arr_0 [i_1]);
            }
            arr_8 [i_1] = ((/* implicit */_Bool) ((int) min(((_Bool)1), ((_Bool)0))));
        }
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    {
                        arr_18 [i_3] [i_3] [i_5] [i_3] [i_5] [i_5] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [(unsigned char)22] [i_5] [i_5] [(_Bool)1])) / (((/* implicit */int) arr_17 [i_3] [i_4] [i_4] [i_6]))));
                        arr_19 [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_6]))));
                        arr_20 [i_3] [i_4] [i_3] [i_3] [i_5] [i_6] = (_Bool)1;
                        arr_21 [i_3] [i_3] [i_5] [i_6] [i_6] [i_5] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_14 [i_6] [i_3] [i_5] [i_6])))));
                    }
                } 
            } 
            arr_22 [(short)23] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
        }
        for (long long int i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_3] [i_7] [i_8] [i_8])) << (((((/* implicit */int) ((signed char) arr_13 [i_3]))) - (57)))));
                var_17 = ((/* implicit */unsigned char) (((_Bool)1) || (((/* implicit */_Bool) 28ULL))));
                var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((int) var_3))) - (arr_14 [i_3] [i_3] [i_3] [i_3])));
            }
            for (int i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned short) (short)22569);
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    for (int i_11 = 3; i_11 < 24; i_11 += 1) 
                    {
                        {
                            var_20 ^= ((/* implicit */signed char) arr_24 [i_7] [i_9] [i_9]);
                            var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_12)))))));
                        }
                    } 
                } 
                arr_37 [i_3] [i_7] [i_9] [i_9] = ((/* implicit */short) ((int) var_2));
            }
            arr_38 [i_7] [i_7] = ((/* implicit */_Bool) ((long long int) arr_23 [i_3]));
        }
        for (long long int i_12 = 0; i_12 < 25; i_12 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                for (unsigned short i_14 = 0; i_14 < 25; i_14 += 4) 
                {
                    {
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_29 [i_3]))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 2147483621)))) == (2316631816256691696ULL)))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((18446744073709551601ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_3] [i_3]))))) : (((((/* implicit */_Bool) arr_45 [i_3] [i_12] [i_13] [i_14] [i_14] [i_14])) ? (18446744073709551587ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                        arr_46 [8LL] [8LL] [8LL] [8LL] = ((/* implicit */short) ((((/* implicit */int) arr_28 [i_12] [i_14])) * (((/* implicit */int) var_6))));
                    }
                } 
            } 
            var_25 ^= ((/* implicit */_Bool) ((signed char) arr_36 [i_3] [i_3] [(signed char)9] [i_3] [(signed char)9] [i_3] [i_3]));
            var_26 = ((/* implicit */_Bool) ((var_1) + (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        }
        arr_47 [i_3] = ((/* implicit */unsigned short) ((int) var_1));
        /* LoopNest 3 */
        for (unsigned char i_15 = 0; i_15 < 25; i_15 += 2) 
        {
            for (unsigned char i_16 = 0; i_16 < 25; i_16 += 1) 
            {
                for (short i_17 = 0; i_17 < 25; i_17 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_18 = 0; i_18 < 25; i_18 += 1) 
                        {
                            arr_58 [i_16] [i_3] = ((/* implicit */unsigned short) (_Bool)1);
                            var_27 += ((/* implicit */long long int) ((((/* implicit */int) arr_52 [i_16] [i_15])) | (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_10))))));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_3])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (18446744073709551598ULL)))) : (((/* implicit */int) arr_44 [i_3] [i_3] [i_3] [i_3] [i_3]))));
                            var_29 = ((/* implicit */_Bool) ((int) arr_12 [i_18]));
                        }
                        arr_59 [i_17] [2ULL] [23ULL] [i_16] = ((((/* implicit */_Bool) arr_30 [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_49 [i_3])) : (var_5));
                        arr_60 [i_15] [i_16] = ((/* implicit */signed char) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_6))));
                        arr_61 [i_3] [i_16] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_54 [i_3] [(unsigned char)18] [i_16])) + (arr_36 [i_17] [i_17] [13] [i_17] [i_17] [i_16] [i_17]))) + ((-(((/* implicit */int) var_6))))));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_16] [i_16] [i_16] [i_16])) | (((/* implicit */int) arr_16 [i_3] [i_15] [i_16] [i_17]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_19 = 0; i_19 < 25; i_19 += 3) 
        {
            var_31 = ((/* implicit */unsigned short) var_2);
            var_32 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-6048)) + (2147483647))) >> (((arr_35 [i_3] [i_19] [i_3] [i_3] [i_3] [i_3]) - (5827889407621835233ULL)))));
            var_33 = ((/* implicit */_Bool) ((long long int) arr_12 [i_3]));
            var_34 = ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_3] [i_3] [i_3])) % (((/* implicit */int) arr_24 [i_3] [i_19] [i_19]))));
        }
        for (unsigned short i_20 = 0; i_20 < 25; i_20 += 3) 
        {
            arr_68 [i_20] [i_20] = ((/* implicit */unsigned char) (((((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) var_5)))) - (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))));
            /* LoopSeq 1 */
            for (unsigned int i_21 = 2; i_21 < 22; i_21 += 3) 
            {
                var_35 = ((/* implicit */short) ((((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned short)6316)))) | (((/* implicit */int) arr_29 [i_21 + 1]))));
                var_36 = ((/* implicit */short) (_Bool)1);
            }
        }
        arr_71 [i_3] [i_3] = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) arr_45 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))));
    }
    var_37 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) (_Bool)1))));
    var_38 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_7)))));
    /* LoopSeq 1 */
    for (int i_22 = 0; i_22 < 14; i_22 += 2) 
    {
        var_39 |= ((/* implicit */_Bool) (((((~(((/* implicit */int) (short)-6048)))) >> (((((/* implicit */int) var_6)) >> (15ULL))))) << (((((/* implicit */int) min((((/* implicit */unsigned short) arr_24 [i_22] [i_22] [i_22])), (var_7)))) - (108)))));
        /* LoopNest 3 */
        for (unsigned char i_23 = 0; i_23 < 14; i_23 += 2) 
        {
            for (unsigned char i_24 = 0; i_24 < 14; i_24 += 2) 
            {
                for (short i_25 = 0; i_25 < 14; i_25 += 4) 
                {
                    {
                        var_40 ^= ((/* implicit */int) ((short) min((arr_24 [(_Bool)1] [i_23] [i_25]), (arr_24 [i_22] [i_23] [i_24]))));
                        var_41 = ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_9)));
                    }
                } 
            } 
        } 
    }
    var_42 = ((/* implicit */unsigned int) var_10);
}
