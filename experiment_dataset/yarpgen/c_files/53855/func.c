/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53855
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
            arr_6 [i_0] [i_0] = ((/* implicit */int) (+(((((long long int) arr_2 [i_0] [i_0])) ^ (max((arr_2 [i_1] [i_0]), (arr_2 [10U] [10U])))))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    for (unsigned char i_4 = 2; i_4 < 8; i_4 += 2) 
                    {
                        {
                            var_19 &= ((/* implicit */unsigned char) min((arr_13 [(unsigned char)5] [i_1] [i_2]), (((/* implicit */unsigned int) ((var_8) && (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_3])))))));
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)20183);
                            var_20 = (+(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) (!(arr_3 [i_3])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) arr_3 [i_2])))))));
                            arr_15 [i_0] [i_1] [i_0 - 1] [i_1] [i_0 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((+(var_2))) | (((/* implicit */unsigned int) (+(((/* implicit */int) var_17)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45361))))) : (((/* implicit */int) var_3))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (short i_5 = 2; i_5 < 9; i_5 += 1) 
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)45348)) : (((/* implicit */int) (unsigned char)247))));
                arr_18 [i_0] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) || (((/* implicit */_Bool) var_2)))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_6))));
            }
            var_23 = ((/* implicit */int) ((max(((-(15062279199034383965ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)45348)) - (((/* implicit */int) (unsigned char)4))))))) == (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)52536)) : (((/* implicit */int) var_7))))) * (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)21)))))))));
        }
        for (long long int i_6 = 1; i_6 < 11; i_6 += 2) 
        {
            arr_22 [0ULL] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_6 - 1])) == (((/* implicit */int) var_4))))))))));
            var_24 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)20183))));
            arr_23 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((((var_16) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 0ULL)))))));
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_3))));
        }
        var_26 -= ((/* implicit */_Bool) (short)-25218);
    }
    /* vectorizable */
    for (long long int i_7 = 4; i_7 < 10; i_7 += 3) 
    {
        arr_27 [i_7] = ((/* implicit */long long int) (+((~(((/* implicit */int) (short)20668))))));
        var_27 = ((/* implicit */unsigned long long int) (~(arr_12 [i_7 + 1])));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            for (unsigned int i_10 = 1; i_10 < 11; i_10 += 3) 
            {
                {
                    var_28 = ((/* implicit */int) ((arr_9 [i_8] [i_9] [i_10 + 1] [i_10] [i_9]) >> (((((((((/* implicit */_Bool) (signed char)-64)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_8] [i_9] [i_9]))))) - (-9223372036854775777LL))) + (86LL)))));
                    arr_36 [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) 3384464874675167673ULL)) ? (((/* implicit */int) ((4792901381858425765LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45353)))))) : (((((/* implicit */int) var_8)) / (((/* implicit */int) arr_17 [i_9] [i_9] [i_9] [i_9]))))));
                }
            } 
        } 
        arr_37 [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_21 [i_8] [(unsigned char)4] [i_8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)32759)))) / (((/* implicit */int) arr_21 [i_8] [i_8] [i_8]))));
        var_29 = ((/* implicit */long long int) ((var_8) ? (((/* implicit */int) arr_33 [i_8] [i_8] [i_8] [(signed char)0])) : (((/* implicit */int) arr_33 [i_8] [i_8] [i_8] [i_8]))));
        var_30 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 4215275995U)) ? (((/* implicit */int) (short)35)) : (((/* implicit */int) (unsigned char)237)))) << (((((/* implicit */int) arr_26 [(unsigned char)1])) - (31366)))));
    }
    var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) min((var_11), (((/* implicit */unsigned short) ((short) var_11)))))) - (((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
    {
        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                {
                    var_32 = ((unsigned short) ((unsigned long long int) min((((/* implicit */long long int) arr_43 [(short)2] [i_12] [i_13] [i_12])), (562949953404928LL))));
                    var_33 -= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)0))));
                    arr_45 [i_13] [i_12] [i_11] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 3594279482839213831LL)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)34334)) >> (((((/* implicit */int) (unsigned char)225)) - (217)))))) : (((((/* implicit */_Bool) (short)-18109)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                }
            } 
        } 
    } 
}
