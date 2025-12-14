/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24450
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_20 *= ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) var_11))))))));
        arr_3 [i_0] = ((/* implicit */short) ((unsigned long long int) (signed char)-19));
    }
    for (signed char i_1 = 2; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_21 *= ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) var_17)))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)18)) / (((/* implicit */int) ((short) arr_10 [i_1 + 1] [(unsigned char)2] [i_4] [2ULL])))))) ? (min((arr_9 [i_1]), (((/* implicit */unsigned long long int) (+(var_8)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_2] [i_2] [i_2])))));
                        var_24 = ((/* implicit */long long int) (~(var_2)));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_25 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_4]))));
                            var_26 &= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_12 [i_1 + 2] [i_2] [i_3])) <= (((/* implicit */int) arr_6 [i_1 - 1])))))));
                            arr_19 [i_1 + 1] [i_1 + 1] [i_3] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_2] [i_4] [i_5])) ? (((long long int) ((((/* implicit */_Bool) arr_17 [i_1 + 1] [i_2] [2ULL] [i_4] [i_4] [i_1 + 2])) ? (var_19) : (var_19)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [(_Bool)1] [i_2] [(_Bool)1] [(_Bool)1])) < (((/* implicit */int) ((unsigned short) (signed char)-19)))))))));
                            var_27 ^= ((/* implicit */unsigned short) arr_5 [(unsigned short)7]);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) 371305879)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_15))))))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (643633107689685828LL))))));
                            arr_22 [i_1 + 1] [i_1] [(unsigned short)6] |= ((/* implicit */short) ((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) -643633107689685829LL)) : (16627669819460404965ULL))) << ((((-(((/* implicit */int) (_Bool)1)))) + (15))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                            var_29 = ((/* implicit */unsigned char) max((var_29), ((unsigned char)2)));
                            arr_23 [i_1] [i_2] [i_3] [i_4] [i_1] |= ((/* implicit */long long int) max(((((!(((/* implicit */_Bool) -643633107689685831LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-3106080926599882376LL) : (((/* implicit */long long int) arr_17 [i_1] [i_1] [i_1] [i_3] [i_4] [i_6]))))))), (((_Bool) ((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_1 - 2] [i_1 - 2])) ? (-4242938873463497177LL) : (((/* implicit */long long int) arr_8 [i_6] [i_1] [i_1])))))));
                        }
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_2]))) | ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (arr_9 [i_1]))))))))));
                        arr_24 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1 - 2] [i_1 + 1]))) - (-1152921504606846976LL)))));
                    }
                    arr_25 [i_1] [i_2] [(unsigned short)11] [i_3] |= ((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_2] [i_1 + 1] [i_2]);
                }
            } 
        } 
    }
    for (signed char i_7 = 2; i_7 < 15; i_7 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            arr_31 [i_7] [i_8] [i_7] &= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_7])) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) ((unsigned char) arr_21 [i_8] [i_8] [i_7] [i_7 + 1] [i_7])))))), (((unsigned long long int) ((((/* implicit */int) arr_6 [i_8])) != (((/* implicit */int) arr_28 [i_7]))))));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 3; i_11 < 16; i_11 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */short) (((+(-643633107689685829LL))) / (((/* implicit */long long int) ((unsigned int) max((var_9), (((/* implicit */long long int) var_11))))))));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) (unsigned short)9156)) : (((/* implicit */int) (short)32763))))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (short i_12 = 0; i_12 < 18; i_12 += 1) 
            {
                arr_43 [i_7] [i_8] [i_7 + 2] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 643633107689685828LL)) ? ((-(((/* implicit */int) (unsigned char)37)))) : ((-(-1902694131)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [10ULL] [i_8] [i_12] [i_12]))))) && (((/* implicit */_Bool) ((var_8) % (((/* implicit */int) arr_11 [(_Bool)1]))))))))));
                var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_30 [i_7] [i_7 - 1] [i_7 - 1])))) : (((((/* implicit */_Bool) 4013691977U)) ? ((+(12292695510026383044ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))))));
                arr_44 [i_7] [i_7] [i_12] &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((/* implicit */long long int) var_19)) : (arr_39 [i_7] [i_7] [i_7] [i_7] [i_7])))));
            }
            arr_45 [i_8] [i_8] = ((/* implicit */unsigned short) 2550673302U);
        }
        for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 3) 
        {
            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (~(arr_38 [i_7] [2U] [i_13] [i_7]))))));
            arr_48 [i_7] = ((/* implicit */int) (unsigned char)255);
        }
        for (long long int i_14 = 0; i_14 < 18; i_14 += 2) 
        {
            var_35 += ((/* implicit */long long int) (~((-(((/* implicit */int) (short)-18707))))));
            arr_53 [i_7] [i_7] [i_7] &= ((/* implicit */unsigned int) arr_50 [13ULL] [i_14]);
            var_36 ^= ((/* implicit */signed char) (+(((/* implicit */int) ((short) (!(((/* implicit */_Bool) 643633107689685846LL))))))));
            var_37 = ((/* implicit */unsigned long long int) ((-643633107689685840LL) == (((/* implicit */long long int) ((/* implicit */int) max((arr_46 [i_7 + 3] [i_7 - 1]), (arr_46 [i_14] [i_14])))))));
        }
        var_38 -= ((/* implicit */unsigned char) arr_4 [i_7] [i_7]);
        var_39 ^= ((/* implicit */unsigned short) ((max((arr_38 [i_7 - 2] [i_7 - 2] [i_7 + 3] [i_7]), (2049532443))) & (((/* implicit */int) max((arr_12 [i_7 - 1] [i_7] [i_7]), (arr_12 [i_7 + 1] [i_7] [i_7 + 1]))))));
        var_40 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) % (9223372036854775807LL));
    }
    var_41 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) var_16)))))));
}
