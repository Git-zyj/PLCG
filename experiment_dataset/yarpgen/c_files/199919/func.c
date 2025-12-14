/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199919
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
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((int) max((arr_2 [i_0 - 1]), (((long long int) (unsigned short)23600)))));
        var_20 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((short) arr_3 [i_0 - 1]))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_11)) : (var_17)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 ^= ((/* implicit */long long int) ((-6491411202591454671LL) > (((/* implicit */long long int) ((/* implicit */int) (short)12552)))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [(signed char)10])) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))));
        var_23 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-20203))));
        arr_8 [i_1] = var_12;
    }
    for (unsigned short i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_10 [i_2 + 1])))) ? (((unsigned int) arr_10 [i_2 + 1])) : (((((/* implicit */_Bool) arr_10 [i_2 + 2])) ? (arr_9 [i_2 + 1]) : (arr_9 [i_2 - 1])))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
            arr_14 [i_2] [i_2] [(short)6] |= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 1]))));
        }
        for (long long int i_4 = 1; i_4 < 21; i_4 += 4) 
        {
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)12552)), (var_12)))) ? ((+((+(1942502101345327794LL))))) : (((/* implicit */long long int) var_3))));
            var_27 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_12 [i_4 + 1] [9U]), (((/* implicit */unsigned char) (_Bool)1)))))) : (var_11)))));
            arr_18 [i_2 + 1] [i_2 + 1] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
        }
        for (long long int i_5 = 2; i_5 < 19; i_5 += 4) /* same iter space */
        {
            var_28 -= ((/* implicit */unsigned int) ((short) min((((/* implicit */unsigned int) (short)-12553)), (var_1))));
            var_29 += ((/* implicit */short) (-(((/* implicit */int) (unsigned short)20098))));
            arr_22 [14U] = ((/* implicit */int) ((((var_16) != (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)45438)) / (((/* implicit */int) (unsigned char)8))))))) ? (((unsigned int) 4525624079731475072LL)) : (((var_13) | (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_7 = 2; i_7 < 20; i_7 += 4) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned long long int) arr_25 [(unsigned short)0] [i_6] [20] [20] [(unsigned short)0]);
                        var_31 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) 637711880)) : (var_8)));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2266749086U)) ? (var_9) : (-1215273664117273031LL)))) ? (18261544882031493715ULL) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)69)))))));
                    }
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
                    {
                        arr_33 [(unsigned char)8] [2LL] [8U] [(unsigned char)8] [8U] [i_6] = arr_26 [(unsigned short)6];
                        arr_34 [i_2 + 2] [i_5 + 1] [i_2 + 2] [i_7] [(_Bool)1] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned short i_10 = 4; i_10 < 20; i_10 += 1) 
                    {
                        var_33 = ((((/* implicit */_Bool) (~(arr_25 [i_2] [i_7] [i_6] [i_5] [i_2])))) ? (3085209578U) : (2028218213U));
                        var_34 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_5])) / (((/* implicit */int) arr_15 [i_6]))));
                        arr_37 [(unsigned char)18] [(unsigned char)18] [i_5 + 1] [12U] [i_7] [i_7] [(short)6] |= ((/* implicit */_Bool) (+((-(arr_10 [i_2 + 1])))));
                    }
                    var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)17904)))))));
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((-6491411202591454671LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) var_10)))))));
                    var_37 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
                }
                var_38 ^= ((((/* implicit */_Bool) var_2)) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 + 2]))));
                arr_38 [i_2] [i_2 - 1] [(short)19] [(short)19] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)65)) ? (2024571926261865565ULL) : (((/* implicit */unsigned long long int) 909760022U))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3764892860610236253LL)) ? (((/* implicit */long long int) var_10)) : (arr_32 [i_2] [21U] [i_2] [i_6] [(_Bool)1]))))));
            }
            /* LoopSeq 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_42 [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 2] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_15 [i_5])) ? (-6491411202591454671LL) : (((/* implicit */long long int) 1012468087)))));
                var_39 = ((/* implicit */unsigned long long int) ((long long int) arr_35 [i_2 + 2] [(unsigned short)9] [(short)1] [(short)1] [9LL]));
            }
            for (signed char i_12 = 3; i_12 < 21; i_12 += 2) 
            {
                arr_45 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) (unsigned char)180)) : (var_3))));
                var_40 = ((/* implicit */unsigned short) var_8);
            }
        }
        /* vectorizable */
        for (long long int i_13 = 2; i_13 < 19; i_13 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_14 = 2; i_14 < 20; i_14 += 1) 
            {
                for (unsigned long long int i_15 = 1; i_15 < 21; i_15 += 3) 
                {
                    for (unsigned short i_16 = 1; i_16 < 18; i_16 += 1) 
                    {
                        {
                            arr_58 [i_2] [i_2] [i_14 - 1] [i_15] [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_2] [i_13 + 2] [i_14] [i_15 + 1] [i_15]))));
                            var_41 = ((/* implicit */signed char) var_9);
                            var_42 = ((/* implicit */long long int) 131436716);
                            var_43 |= ((/* implicit */unsigned char) (~(arr_13 [i_16 + 3] [i_14] [i_13 - 2])));
                        }
                    } 
                } 
            } 
            var_44 *= ((/* implicit */signed char) ((((/* implicit */int) var_14)) | (((/* implicit */int) arr_52 [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 1) 
            {
                var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) var_8))));
                var_46 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))));
                var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))));
                var_48 = ((/* implicit */unsigned long long int) (+(-1060984340130398727LL)));
            }
        }
        var_49 = ((/* implicit */unsigned short) max((2501096494697413100LL), (((/* implicit */long long int) (_Bool)1))));
    }
    var_50 *= ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
}
