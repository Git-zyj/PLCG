/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38736
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
    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)250), (((/* implicit */unsigned char) var_7))))) ? ((+(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_14)))) >= (((((/* implicit */int) var_2)) | (((/* implicit */int) (_Bool)1))))))) : ((~(((/* implicit */int) var_15))))));
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? ((~(((/* implicit */int) var_11)))) : (min((((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_4)))))))));
    var_21 = (signed char)-126;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        arr_10 [i_0] [(short)10] [i_1] |= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned char)208), (((/* implicit */unsigned char) (_Bool)1))))) || (((/* implicit */_Bool) ((int) (signed char)125))))))));
                        arr_11 [i_0] [i_0] [i_1] &= ((/* implicit */signed char) ((((/* implicit */int) (short)17852)) + (((/* implicit */int) (short)-17845))));
                        arr_12 [i_3] [i_1] [i_2] = arr_9 [i_3] [i_3] [i_0] [i_1] [i_1] [i_0];
                    }
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (short i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_22 -= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) (unsigned char)255)) << (((((((/* implicit */int) (unsigned char)13)) ^ (((/* implicit */int) (signed char)125)))) - (101))))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((int) (short)22927)))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (~((~(((/* implicit */int) max((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), ((unsigned char)13)))))))))));
                            var_25 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_4] [i_2] [i_1] [i_0]))))), (max(((+(((/* implicit */int) (unsigned char)21)))), (((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) arr_15 [i_6] [i_1] [i_2] [i_2] [i_1] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1))))))));
                            var_26 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_14 [i_6] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-32)))) : (var_3))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                        }
                        for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 4) /* same iter space */
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) var_11);
                            arr_26 [i_4] [i_4] [i_2] [i_1] [i_4] = ((/* implicit */unsigned long long int) arr_1 [i_4]);
                            arr_27 [i_0] [i_1] [i_4] [i_4] [i_4] [i_7 + 2] = ((/* implicit */short) (((((_Bool)1) ? (min((-2147483640), (((/* implicit */int) (unsigned char)242)))) : (((/* implicit */int) (unsigned char)132)))) + (max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_22 [i_0] [i_4] [i_0] [i_4] [i_0]))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 2; i_8 < 14; i_8 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? (((/* implicit */int) (unsigned char)234)) : ((-(((/* implicit */int) arr_5 [i_8 - 1] [i_0] [i_0])))))))));
                            arr_31 [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_14))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) max((((/* implicit */signed char) (_Bool)0)), (arr_9 [i_0] [i_0] [i_1] [i_9] [i_9] [i_9]))))));
                            var_29 = ((/* implicit */unsigned short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) max(((unsigned char)255), (arr_15 [i_0] [i_1] [i_1] [i_0] [i_4] [i_0] [i_4]))))))), (((signed char) max((((/* implicit */short) arr_13 [i_4] [i_0] [i_1] [i_4])), (arr_33 [(_Bool)1] [(_Bool)1] [i_2] [i_2] [i_9]))))));
                            var_30 += ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) arr_1 [i_4]))))))));
                            var_31 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_15 [i_9] [i_9] [i_4] [i_4] [i_2] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-18))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 4) 
                        {
                            var_32 -= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)255)))))))));
                            arr_36 [i_0] [i_0] [i_2] [i_4] [i_1] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((+(4513839973110321764ULL))) >> (((((/* implicit */int) var_0)) - (27352))))))));
                        }
                    }
                    arr_37 [i_2] [i_2] [i_0] [i_0] = ((unsigned char) (signed char)10);
                }
            } 
        } 
    } 
}
