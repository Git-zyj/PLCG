/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205240
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
    var_20 *= ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) > (var_9))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))))), (max((((/* implicit */unsigned short) (short)26755)), ((unsigned short)508)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)26759)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            var_21 = ((/* implicit */short) ((unsigned int) var_14));
            arr_7 [0ULL] [i_1 + 1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 1]))) : (((((/* implicit */_Bool) var_18)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) var_13))))))) ? (arr_1 [i_0] [8LL]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_0 [i_1]) : (var_0))))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            arr_15 [i_4] [i_3] [i_0] [(unsigned char)4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (short)26755);
                            var_22 = (short)26748;
                            var_23 = ((/* implicit */_Bool) var_1);
                            var_24 ^= ((/* implicit */unsigned short) min(((-(((var_9) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 - 2])))))));
                        }
                        var_25 ^= ((/* implicit */unsigned int) var_11);
                    }
                } 
            } 
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)26745)) ? (((/* implicit */int) (unsigned short)65039)) : (((/* implicit */int) (short)26767)))) >= (((/* implicit */int) ((short) arr_18 [i_0] [i_0] [i_5])))));
            var_27 = ((((/* implicit */int) var_7)) < (((/* implicit */int) var_2)));
        }
        for (short i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            var_28 ^= ((/* implicit */_Bool) (+(((/* implicit */int) max((var_3), ((unsigned short)501))))));
            var_29 -= ((/* implicit */_Bool) (((_Bool)1) ? (1435573546U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2828)))));
        }
        var_30 = ((/* implicit */unsigned char) (-(max((var_0), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)486)) << (((((/* implicit */int) (short)-26745)) + (26758))))))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        var_31 = ((/* implicit */long long int) 191627870U);
        arr_26 [(_Bool)1] [i_7] = min(((-(-6684541581595493899LL))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) - (((/* implicit */int) (short)-26764))))));
        var_32 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(271473990601676153LL)))), (min((((/* implicit */unsigned long long int) var_8)), (1454385233045067313ULL)))));
    }
    for (short i_8 = 2; i_8 < 22; i_8 += 3) 
    {
        var_33 ^= ((/* implicit */unsigned long long int) var_11);
        arr_29 [i_8] [i_8 + 2] |= ((/* implicit */short) min((((((((/* implicit */int) var_1)) < (((/* implicit */int) var_6)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)0))))) : (arr_28 [i_8] [i_8 + 1]))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)2827)) ? (((/* implicit */int) var_3)) : (var_4))) == (((/* implicit */int) var_11)))))));
    }
    var_34 -= ((/* implicit */int) var_16);
    var_35 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_15)) ? (((5232027913666872718LL) | (var_13))) : (4912144642772999868LL)))));
    var_36 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)2836))))) : (((((/* implicit */_Bool) var_8)) ? (var_9) : (var_13))))) << ((((~(((((/* implicit */int) var_19)) | (((/* implicit */int) var_8)))))) + (32657)))));
}
