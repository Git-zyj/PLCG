/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231198
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_10 ^= ((/* implicit */short) var_1);
        var_11 = ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((arr_2 [i_0]) - (7467647441854402614ULL)))))) ? ((~(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_9)) : (var_0))));
        var_12 += ((/* implicit */signed char) (((~(((/* implicit */int) (_Bool)0)))) & (max(((~(((/* implicit */int) (_Bool)1)))), (var_0)))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (-((-(1023U))))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_9 [(short)1] [i_2] [i_2] [i_1 - 1] [(short)1] [i_0]))));
                        var_15 ^= ((/* implicit */unsigned short) ((unsigned int) arr_6 [(unsigned char)10] [i_1 + 3]));
                    }
                } 
            } 
            var_16 = max((((/* implicit */unsigned long long int) var_1)), (max((((unsigned long long int) var_7)), (arr_9 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1]))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 2; i_4 < 12; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    {
                        var_17 += ((/* implicit */short) ((((/* implicit */int) var_9)) / (((((/* implicit */int) var_1)) * (((/* implicit */int) arr_0 [(signed char)10] [i_5]))))));
                        arr_15 [12U] [12U] [(signed char)9] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) min((min((((/* implicit */int) var_7)), (arr_6 [i_0] [i_0]))), (((/* implicit */int) arr_12 [(unsigned short)5] [i_1] [i_1 + 1]))))), (((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)8191))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_2)))));
                        arr_16 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 4219271205U)), ((+(arr_10 [i_1 + 1] [i_4 - 2])))));
                        var_18 = ((/* implicit */unsigned int) var_3);
                    }
                } 
            } 
        }
    }
    for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (+(-1LL))))));
        var_20 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_4)) * (((/* implicit */int) var_4))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7719))) - (35184372088831ULL)))));
        arr_19 [i_6] = ((/* implicit */unsigned short) ((8032626804136169487ULL) >> (((((/* implicit */int) var_1)) - (20776)))));
    }
    /* LoopSeq 1 */
    for (int i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 3) /* same iter space */
        {
            var_21 ^= (~(((((/* implicit */int) max(((unsigned short)29918), (((/* implicit */unsigned short) var_5))))) ^ (((/* implicit */int) var_3)))));
            var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) var_9)), (min((((/* implicit */int) var_9)), (var_0)))));
            var_23 ^= min(((-(18446744073709551593ULL))), (((/* implicit */unsigned long long int) var_5)));
            /* LoopSeq 3 */
            for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 18; i_10 += 3) 
                {
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        {
                            var_24 ^= ((/* implicit */unsigned short) (+((-(arr_25 [i_8 - 1] [i_8 - 1] [i_8])))));
                            var_25 = ((/* implicit */short) max(((-(((var_4) ? (9761875771251248984ULL) : (((/* implicit */unsigned long long int) arr_17 [i_10])))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9)))))));
                            var_26 = ((/* implicit */unsigned long long int) var_3);
                            var_27 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_22 [i_8 + 3] [i_8 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_22 [i_8 + 3] [i_8 + 2]))) * (((arr_22 [i_8 + 2] [i_8 + 3]) / (arr_22 [i_8 + 1] [i_8 + 4])))));
                        }
                    } 
                } 
                arr_32 [i_7] [i_7] [14LL] |= ((/* implicit */short) ((((/* implicit */_Bool) 18197380576998843912ULL)) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_5)) >> (((var_6) - (14255505130750884975ULL)))))));
            }
            for (long long int i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                var_28 = ((/* implicit */unsigned short) (~(((((/* implicit */int) min((((/* implicit */unsigned short) arr_21 [(_Bool)1])), (var_1)))) | (var_0)))));
                /* LoopSeq 1 */
                for (short i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    var_29 = ((/* implicit */long long int) ((arr_33 [i_7] [i_7] [i_12] [(_Bool)1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [(unsigned short)5] [i_8] [i_12])))));
                    var_30 += ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_27 [i_7] [i_8 - 1] [i_7]), (((/* implicit */unsigned short) var_3))))) ^ (min((max((-1282825095), (((/* implicit */int) arr_38 [0U])))), (((/* implicit */int) arr_35 [i_8 + 4] [i_8 + 3] [i_8 + 1]))))));
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((~(arr_25 [i_7] [i_7] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */int) arr_29 [i_12] [i_12] [i_13] [i_13])) ^ (((/* implicit */int) (unsigned char)56)))) : (((/* implicit */int) arr_30 [i_8 + 1] [i_8 + 1] [(unsigned char)16] [i_8 + 4] [i_8 + 1] [i_8 + 4] [i_8]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_7] [i_8 + 3] [i_12]))) ^ (arr_24 [i_7] [i_8 + 3])))));
                    arr_40 [i_13] [i_8] [i_13] = ((/* implicit */int) (~(((((arr_24 [i_7] [i_8 + 3]) + (9223372036854775807LL))) >> (((1420903312) - (1420903305)))))));
                    var_32 ^= ((/* implicit */int) ((unsigned char) 18446708889337462764ULL));
                }
                var_33 = ((/* implicit */unsigned char) (-((-(((((/* implicit */int) (unsigned short)1415)) / (((/* implicit */int) (short)-22160))))))));
            }
            for (unsigned short i_14 = 0; i_14 < 18; i_14 += 2) 
            {
                var_34 = ((/* implicit */int) var_7);
                var_35 = (((~(var_6))) << (((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((((/* implicit */int) var_5)) - (103)))))) ? (var_6) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (var_6))))) - (14255505130750884940ULL))));
            }
        }
        for (unsigned long long int i_15 = 1; i_15 < 14; i_15 += 3) /* same iter space */
        {
            var_36 = var_2;
            var_37 = ((/* implicit */unsigned char) ((((arr_33 [2] [(short)10] [i_7] [i_15 + 1]) - (max((arr_37 [i_7] [0ULL] [i_7] [i_7] [i_15]), (((/* implicit */unsigned long long int) (unsigned short)14336)))))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))));
        }
        for (unsigned long long int i_16 = 1; i_16 < 14; i_16 += 3) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_20 [i_7] [i_16 + 1]), (arr_20 [i_7] [i_16 + 4]))))) : (((arr_39 [i_16] [i_16] [i_7] [i_7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_7] [i_7] [i_16 + 2] [i_16] [i_7] [i_16 + 4] [i_16]))))))))));
            var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min(((short)-7724), (((/* implicit */short) (_Bool)1))))), ((+(arr_46 [i_16 + 2] [i_16 + 2] [i_16 + 1]))))))));
            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) (~(max((((/* implicit */int) arr_35 [i_7] [(signed char)10] [i_16 + 1])), (((((/* implicit */_Bool) (short)-26054)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)47)))))))))));
            var_41 = ((/* implicit */int) (~(((18446744073709551615ULL) >> (((/* implicit */int) var_3))))));
        }
        arr_49 [i_7] = ((/* implicit */unsigned char) (-((+(arr_17 [i_7])))));
    }
    var_42 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((((/* implicit */int) var_3)), (var_0))) - (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-4656)))))))));
}
