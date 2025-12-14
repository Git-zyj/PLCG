/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225381
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)35511)) || (((/* implicit */_Bool) (unsigned short)65506)))))) < (arr_1 [i_1])));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_8);
        }
        var_10 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [8U]);
        arr_8 [i_0] [(unsigned char)13] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 2147483646))) ? (max((var_2), (((/* implicit */long long int) arr_3 [i_0] [4])))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_0]), (var_4)))))))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0] [i_0])) <= (arr_3 [11LL] [11LL]))) ? ((+(((/* implicit */int) (unsigned short)30)))) : ((~(((/* implicit */int) var_5)))))))));
        var_11 *= ((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_2 [i_0] [i_0])))) + (2147483647))) >> (((var_2) + (5439183836398045707LL)))));
    }
    var_12 = ((/* implicit */unsigned char) max((3026562992U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_6))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 4; i_2 < 18; i_2 += 4) 
    {
        var_13 = (~(((/* implicit */int) (unsigned char)60)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                {
                    arr_17 [i_3] = ((/* implicit */unsigned int) arr_14 [i_3] [i_3] [i_3]);
                    var_14 = ((unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_15 [i_2] [i_3] [i_2] [i_3])));
                    var_15 -= (unsigned char)255;
                }
            } 
        } 
        arr_18 [i_2 - 2] = ((/* implicit */unsigned int) ((unsigned long long int) arr_15 [i_2] [i_2 - 1] [i_2] [i_2 - 2]));
        /* LoopSeq 3 */
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            arr_21 [i_2] [i_2] [i_2] = ((/* implicit */int) (~(16397850448629910439ULL)));
            arr_22 [i_5] = ((/* implicit */long long int) arr_16 [i_5] [i_5] [i_5]);
        }
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_15 [i_2] [i_2 - 1] [i_2 - 3] [14])) ? (((/* implicit */int) var_6)) : (arr_23 [i_6] [18U] [i_6]))) & ((~(((/* implicit */int) var_7))))));
                arr_28 [(unsigned char)8] [i_6] [i_7] [i_2 + 1] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [(unsigned char)1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [(short)12] [i_6] [i_7])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)1))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1413358434U)))));
            }
            for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) arr_19 [i_2] [i_2] [i_2]))));
                var_18 = ((/* implicit */unsigned long long int) -5057161117243138260LL);
                var_19 -= ((/* implicit */int) ((3308035613U) > (((/* implicit */unsigned int) arr_23 [i_8] [i_8] [i_6]))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((8418862896721954287ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_32 [i_2] [i_2])) > (((/* implicit */int) var_7)))))))))));
            }
            for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_19 [i_2] [i_2 - 1] [i_9])) : (var_1))))));
                arr_36 [i_2 + 1] [i_6] [i_2 + 1] [8LL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) << (((arr_14 [(_Bool)1] [(_Bool)1] [11U]) - (2646294172505589445LL)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((short) var_8)))));
                arr_37 [i_2] = ((/* implicit */unsigned char) ((arr_24 [i_2 - 3] [i_6]) << (((arr_24 [i_2 - 2] [i_6]) - (7853989475938560749ULL)))));
                arr_38 [i_2] [(short)11] [13] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_2 - 1] [i_2 - 4] [i_2] [1U])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)126)))))));
            }
            arr_39 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29))) > (3601920355U)))) : (((((/* implicit */_Bool) arr_15 [i_2 - 3] [i_2 - 3] [i_6] [i_2])) ? (arr_11 [i_6]) : (arr_29 [i_2] [(unsigned char)0])))));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_24 [i_2 - 3] [i_2 - 3]))));
            var_23 = var_9;
        }
        for (signed char i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)99)) : (2147483643))) <= (((/* implicit */int) (signed char)99))));
            arr_43 [i_10] = ((/* implicit */unsigned long long int) ((arr_35 [i_2] [i_2 - 3] [(unsigned char)9] [i_2 - 2]) != (((/* implicit */unsigned long long int) arr_14 [i_2] [i_2 - 2] [(unsigned short)2]))));
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 22; i_11 += 3) 
    {
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) * (arr_44 [i_11])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65507))))) : (((((/* implicit */_Bool) arr_45 [i_11])) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (arr_44 [i_11])))));
        /* LoopNest 3 */
        for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) 
        {
            for (int i_13 = 0; i_13 < 22; i_13 += 2) 
            {
                for (long long int i_14 = 1; i_14 < 18; i_14 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_46 [(unsigned short)12] [i_12])) || (((/* implicit */_Bool) arr_50 [i_12] [(unsigned short)21] [i_13] [i_14])))))) % (arr_46 [i_11] [(unsigned char)11])));
                        var_27 = ((((/* implicit */_Bool) ((arr_49 [i_11] [i_12] [i_12] [i_14]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_11])))))) ? (((((/* implicit */int) (unsigned short)32)) << (((/* implicit */int) (unsigned char)24)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) 4294967271U))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (arr_48 [i_11] [i_13] [(unsigned short)3])))) : (arr_49 [i_14 + 2] [i_14 + 2] [i_11] [i_14 - 1])));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17179860992LL)) ? (arr_48 [i_11] [6LL] [i_11]) : (((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) arr_47 [i_11] [i_12])))) : (((/* implicit */int) var_7))));
                    }
                } 
            } 
        } 
        arr_52 [19LL] [i_11] = arr_46 [i_11] [i_11];
        arr_53 [i_11] = ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) (unsigned char)11)));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 18; i_15 += 2) 
    {
        var_30 ^= ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) (~(arr_34 [i_15] [i_15] [i_15])))) : (((((/* implicit */_Bool) arr_33 [(short)10] [i_15] [i_15] [i_15])) ? (17179860992LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) arr_26 [i_15] [i_15] [11ULL]))));
    }
}
