/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231503
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
    var_20 = ((/* implicit */_Bool) (+(min(((~(((/* implicit */int) (signed char)66)))), (((/* implicit */int) min(((unsigned char)28), (((/* implicit */unsigned char) (_Bool)1)))))))));
    var_21 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (var_18)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_12))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_22 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_23 -= ((/* implicit */unsigned short) arr_0 [i_0]);
                                arr_12 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_18)) * (((/* implicit */int) var_19))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) ((((int) var_19)) / (((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) (unsigned char)214))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)42)))) | (((/* implicit */int) var_0))));
    }
    for (signed char i_5 = 3; i_5 < 10; i_5 += 2) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned short) min((arr_14 [i_5]), (((/* implicit */short) var_7))));
        /* LoopSeq 3 */
        for (short i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            arr_20 [i_6] [i_5] [i_5 + 4] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_6 [i_5 + 1] [i_5] [i_5])) ? (((/* implicit */int) ((signed char) var_17))) : (((((/* implicit */int) var_4)) * (((/* implicit */int) var_4)))))) + (2147483647))) >> ((((-(((/* implicit */int) (_Bool)1)))) + (7)))));
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_2))));
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_8 = 2; i_8 < 11; i_8 += 2) 
            {
                arr_27 [i_5] [i_7] [i_8 - 1] = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_19 [i_5] [i_5]))))));
                var_26 = ((/* implicit */int) max((var_26), ((((-(((/* implicit */int) (unsigned char)227)))) * (((/* implicit */int) (short)23184))))));
                var_27 = ((/* implicit */int) arr_1 [i_7]);
                arr_28 [(unsigned short)1] [i_7] [(unsigned short)1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -1057438481)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5]))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))));
            }
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) (~(var_2)))) : (var_16)));
            arr_29 [i_5] [i_7] [i_7] = ((/* implicit */unsigned short) (short)16718);
            arr_30 [i_5] [i_7] = ((/* implicit */int) var_11);
        }
        for (signed char i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_38 [i_10] [i_10] = ((/* implicit */_Bool) min((4418905042552208581ULL), (((/* implicit */unsigned long long int) (((((_Bool)1) || (((/* implicit */_Bool) var_2)))) && (((/* implicit */_Bool) arr_31 [i_5])))))));
                var_29 = ((/* implicit */int) arr_14 [i_5 + 4]);
                var_30 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)3))));
            }
            var_31 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)250))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))) : (14ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)8427)), ((unsigned short)60471))))))));
            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)125)) ? (min(((+(((/* implicit */int) (unsigned short)15)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)24660)) : (((/* implicit */int) var_17)))))) : (((min((arr_23 [i_5] [i_9]), (((/* implicit */int) (unsigned short)0)))) / (((((/* implicit */int) var_3)) - (((/* implicit */int) (_Bool)1))))))));
            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) arr_3 [i_5 + 3]))));
        }
        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) max((min((((((/* implicit */int) arr_9 [i_5] [i_5] [i_5])) * (((/* implicit */int) arr_31 [i_5])))), (((((/* implicit */_Bool) (short)24654)) ? (((/* implicit */int) (short)16722)) : (((/* implicit */int) (unsigned short)3)))))), ((-(var_10))))))));
    }
    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 3) 
    {
        arr_41 [i_11] = ((/* implicit */short) (-(min((((/* implicit */int) min((((/* implicit */short) var_11)), ((short)-1)))), ((+(((/* implicit */int) (unsigned short)3))))))));
        var_35 -= ((/* implicit */signed char) min((-6897171834260642516LL), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)16724))) : (6897171834260642536LL)))));
    }
    for (signed char i_12 = 2; i_12 < 16; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    var_36 = ((/* implicit */long long int) max((((/* implicit */int) arr_7 [i_14])), (var_10)));
                    arr_51 [i_12 - 2] [i_12 - 2] [i_13] = ((/* implicit */unsigned char) (~(max(((~(((/* implicit */int) var_1)))), ((~(((/* implicit */int) (unsigned short)2485))))))));
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 17; i_15 += 3) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 17; i_16 += 4) 
                        {
                            {
                                arr_57 [i_13] [i_14] = ((/* implicit */unsigned short) ((max((max((((/* implicit */int) arr_46 [i_12])), (var_6))), (((/* implicit */int) arr_4 [i_12 - 1] [i_12 + 1] [i_12 - 1])))) < ((+(((/* implicit */int) var_11))))));
                                var_37 ^= ((/* implicit */signed char) (((~(28ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) + (var_12))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-24667)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13703))))))))))));
                                arr_58 [i_13] [i_15] [i_12] [i_13] [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)53719)) : (((/* implicit */int) (signed char)-113))))), (((unsigned long long int) var_17)))))));
                                arr_59 [i_13] [i_14] [i_13] = ((/* implicit */unsigned short) (!(((_Bool) min((((/* implicit */long long int) var_18)), (var_13))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned short) (_Bool)1);
        var_39 = var_9;
    }
}
