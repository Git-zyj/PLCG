/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5251
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned short i_3 = 2; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_11 [i_1] = arr_9 [i_0 - 1] [9LL] [i_1] [i_1];
                        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_9 [i_2] [i_2] [i_2] [6ULL]))) ? (arr_6 [i_0] [i_0] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [16] [i_1]))))))));
                        var_19 = ((/* implicit */int) arr_7 [i_1] [i_1]);
                        var_20 *= ((/* implicit */unsigned char) ((signed char) (unsigned char)255));
                        var_21 = ((/* implicit */signed char) arr_1 [i_0 + 3]);
                    }
                } 
            } 
            arr_12 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)105))) : (9223372036854775807LL)))) ? (((((/* implicit */_Bool) -9223372036854775797LL)) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1] [i_1])) - (((/* implicit */int) var_10)))))));
        }
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_22 = ((/* implicit */short) arr_19 [i_0] [i_0] [i_0] [(unsigned short)10]);
                        arr_21 [i_5] = ((/* implicit */unsigned int) arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                {
                    var_23 = ((/* implicit */signed char) arr_18 [i_0] [i_0] [i_0 + 3] [i_0 - 1]);
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_0] [i_0 + 3] [i_0] [i_9])) < (((/* implicit */int) var_12))));
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_27 [i_8] [i_0 + 2] [i_0 + 2]))));
                                var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 - 1]))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))));
                    /* LoopSeq 2 */
                    for (long long int i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        var_28 = ((/* implicit */signed char) arr_5 [i_0 + 2] [i_7] [i_7]);
                        arr_35 [i_7] [4LL] [i_7] [i_8] [4LL] [i_11] = ((/* implicit */unsigned short) arr_16 [i_0] [19ULL] [i_0] [i_11]);
                    }
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        var_29 = ((signed char) ((((/* implicit */_Bool) arr_13 [i_0] [i_8] [i_8])) ? (((/* implicit */int) arr_29 [i_7])) : (((/* implicit */int) var_16))));
                        var_30 = ((/* implicit */unsigned long long int) arr_27 [i_0] [i_8] [i_8]);
                        var_31 = ((/* implicit */signed char) ((unsigned int) var_9));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
                        {
                            var_32 = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_8] [i_12])))));
                            arr_43 [i_7] = ((/* implicit */unsigned int) arr_41 [i_0 + 2] [i_0 + 2] [i_8] [i_12]);
                        }
                    }
                }
            } 
        } 
    }
    for (unsigned short i_14 = 3; i_14 < 13; i_14 += 4) 
    {
        var_33 = ((((/* implicit */_Bool) arr_28 [(signed char)18])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_28 [(signed char)2]))))) : (((/* implicit */int) max((arr_28 [(signed char)0]), (arr_28 [(_Bool)1])))));
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 3; i_15 < 13; i_15 += 3) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    var_34 = ((/* implicit */unsigned char) arr_9 [i_14 - 3] [i_15] [i_16] [i_15]);
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) max((((/* implicit */int) arr_47 [i_14] [i_14])), (min((-1), (((/* implicit */int) arr_18 [i_16] [i_16] [i_15] [i_14])))))))));
                    var_36 = ((/* implicit */unsigned int) arr_25 [i_14 - 3] [i_14 - 3]);
                    var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) arr_3 [0]))));
                    var_38 += ((/* implicit */signed char) max((arr_44 [i_16]), (((/* implicit */int) arr_3 [18LL]))));
                }
            } 
        } 
    }
    var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */int) var_11)), (var_17))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_13)));
    var_40 = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) -9223372036854775797LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3039))) : (8356081398676814019ULL))), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_16)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_14))))))));
}
