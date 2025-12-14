/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218861
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_11 = (-(((arr_1 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1]))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned char) (signed char)119);
            arr_6 [(unsigned short)11] [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)172);
            arr_7 [i_0 + 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
            arr_8 [i_0 + 2] [(unsigned char)9] [(unsigned char)9] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_8))))));
        }
        for (short i_2 = 2; i_2 < 24; i_2 += 2) 
        {
            var_13 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_10 [i_0 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_10 [i_0 + 2])) + (27438))) - (28)))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                        arr_17 [i_0] [i_0] [i_3] [i_3] [i_4] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_2])) != (((/* implicit */int) var_8)))))) ^ (((-1LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-119))))));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_10 [i_0 - 1])))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_5 = 1; i_5 < 22; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) ^ (((((/* implicit */_Bool) arr_13 [(unsigned short)3] [i_2 + 1] [(unsigned short)3] [i_2 + 1])) ? (((/* implicit */int) (unsigned short)40778)) : (((/* implicit */int) arr_2 [(signed char)14] [i_0 - 1]))))));
                    arr_24 [i_0 + 2] [i_2] [i_5 + 1] [i_5] [i_6] = ((/* implicit */long long int) arr_10 [i_0]);
                }
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 24; i_7 += 1) 
                {
                    for (long long int i_8 = 1; i_8 < 24; i_8 += 4) 
                    {
                        {
                            arr_29 [i_2] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [11U] [16U] [i_5]))));
                            arr_30 [i_0 - 1] [i_2] [17U] [i_7 + 1] [i_8] = ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (262144U));
                            arr_31 [(unsigned short)3] [i_2 - 1] [i_2 - 1] [i_7 + 1] [i_8] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_13 [i_0 + 1] [(unsigned char)22] [i_2 - 2] [i_8 - 1])) == (7866801676032049931ULL)));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (-(((/* implicit */int) arr_15 [i_0 + 2] [i_7 + 1] [i_7 + 1] [i_7 - 1] [0U] [i_8 + 1])))))));
                        }
                    } 
                } 
                arr_32 [i_0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3312127455U)) ? (3022638588446181553LL) : (((/* implicit */long long int) 661692818U))));
                var_18 = ((/* implicit */unsigned char) (+(arr_20 [i_0] [i_0 + 2] [i_2 + 1] [i_5 + 2])));
            }
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                arr_37 [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned long long int) (((-(arr_19 [i_9] [i_9] [i_9]))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_16 [i_0 + 2] [(signed char)19] [i_2] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))))))));
                /* LoopSeq 2 */
                for (short i_10 = 1; i_10 < 23; i_10 += 1) /* same iter space */
                {
                    var_19 ^= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_3))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_1 [i_10 + 1]))));
                    arr_40 [i_10] [i_10] [i_10] [i_0 + 1] = ((/* implicit */signed char) (_Bool)0);
                }
                for (short i_11 = 1; i_11 < 23; i_11 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2]))));
                    arr_44 [i_11 - 1] [i_0] = ((/* implicit */unsigned char) (+(9223372036854775807LL)));
                }
            }
        }
        for (long long int i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            var_22 = ((/* implicit */short) (unsigned char)255);
            arr_48 [i_0] [i_12] [i_12] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_36 [i_12] [i_12] [i_0] [i_0]))))));
            /* LoopNest 3 */
            for (unsigned long long int i_13 = 1; i_13 < 24; i_13 += 1) 
            {
                for (long long int i_14 = 1; i_14 < 22; i_14 += 4) 
                {
                    for (long long int i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) ((arr_22 [i_12] [i_13] [i_13 - 1] [i_13 + 1] [7LL]) < (arr_22 [i_13] [i_13] [i_13 + 1] [i_13 - 1] [i_14 + 3])));
                            var_24 = (signed char)-24;
                        }
                    } 
                } 
            } 
            arr_57 [i_12] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_53 [i_0 - 1] [i_0 + 2]))));
        }
        for (unsigned int i_16 = 1; i_16 < 23; i_16 += 1) 
        {
            arr_61 [i_16] [i_16 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17739001897287532550ULL)) ? (((/* implicit */int) arr_60 [i_0 - 1] [i_16 + 1])) : (((/* implicit */int) arr_60 [i_0 + 1] [i_16 + 2]))));
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)3)))))));
            /* LoopNest 2 */
            for (short i_17 = 1; i_17 < 22; i_17 += 3) 
            {
                for (short i_18 = 4; i_18 < 23; i_18 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) arr_51 [i_0] [i_0] [i_18] [(short)18] [22ULL] [22ULL]);
                        var_27 = ((/* implicit */long long int) min((var_27), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 + 1] [i_16 - 1] [i_16 + 2] [i_16 - 1] [i_16 + 1] [i_17 + 3]))) : (arr_11 [i_16] [i_16 - 1] [i_16 + 1] [i_18 + 1])))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)10))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_19 = 0; i_19 < 25; i_19 += 3) 
            {
                for (signed char i_20 = 0; i_20 < 25; i_20 += 1) 
                {
                    for (unsigned short i_21 = 0; i_21 < 25; i_21 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) var_4);
                            var_30 = ((/* implicit */_Bool) (unsigned char)11);
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_22 = 0; i_22 < 11; i_22 += 1) 
    {
        for (unsigned int i_23 = 2; i_23 < 10; i_23 += 2) 
        {
            {
                arr_79 [i_22] [i_22] [i_23 + 1] = ((/* implicit */long long int) var_0);
                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) : (arr_67 [i_23 - 1] [(unsigned char)16] [i_23 - 1] [i_23]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_24 = 2; i_24 < 10; i_24 += 3) 
                {
                    arr_82 [i_22] = ((/* implicit */unsigned long long int) arr_68 [i_23] [i_22] [i_22] [i_24] [i_24 - 2] [(signed char)15]);
                    arr_83 [i_22] [i_22] [i_23] [i_24] = ((/* implicit */int) ((arr_75 [i_23 + 1]) + (((((/* implicit */_Bool) -1077502131)) ? (arr_80 [i_22] [i_23 + 1] [i_24]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [17LL] [i_23 - 2])) || (((/* implicit */_Bool) arr_38 [i_23 - 2] [i_24 - 2]))));
                }
                /* LoopSeq 1 */
                for (int i_25 = 1; i_25 < 8; i_25 += 2) 
                {
                    var_33 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_65 [i_22] [i_22] [i_23] [i_23] [(unsigned short)12]))));
                    var_34 = ((/* implicit */unsigned char) arr_25 [i_25] [i_25 - 1] [i_23] [i_23] [i_22] [i_22]);
                }
            }
        } 
    } 
    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) var_3))));
    var_36 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)241)) | (((/* implicit */int) (unsigned short)50587)))) >> (((/* implicit */int) ((((((/* implicit */int) (signed char)-120)) + (((/* implicit */int) var_2)))) < (((((/* implicit */int) var_7)) / (((/* implicit */int) var_1)))))))));
    var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (3589626457361676699LL)));
}
