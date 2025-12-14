/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240102
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_2] = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]);
                    var_14 = var_10;
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        {
                            arr_23 [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) (short)8);
                            var_15 |= ((/* implicit */unsigned int) (~(((/* implicit */int) min((max(((signed char)24), ((signed char)44))), (((/* implicit */signed char) (!(((/* implicit */_Bool) 2005729969))))))))));
                            var_16 -= ((/* implicit */unsigned int) (+((-(972226383)))));
                            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 6579443950532294298LL)) ? (arr_15 [i_0] [i_3] [i_6] [8ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-44)))))))));
                            var_18 = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) arr_6 [(unsigned char)3])) ? (((/* implicit */unsigned long long int) 2260831515U)) : (var_6))))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0])))))));
                        }
                    } 
                } 
            } 
            var_19 &= ((/* implicit */int) var_5);
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 3; i_7 < 17; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            var_20 |= ((/* implicit */unsigned int) arr_5 [i_7] [i_7 - 3] [i_9]);
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_7 + 4] [i_7] [i_7 - 1] [i_0]))))))))));
                        }
                        var_22 = arr_18 [i_0] [i_0] [i_0] [i_8];
                    }
                } 
            } 
            var_23 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_0])) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0])))))));
        }
        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            var_24 ^= ((/* implicit */long long int) var_4);
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-57))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))))) : ((-(((/* implicit */int) arr_0 [i_0]))))));
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                for (short i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    {
                        var_26 &= ((/* implicit */signed char) arr_0 [i_0]);
                        var_27 = ((/* implicit */short) ((int) ((unsigned int) arr_3 [i_11] [i_11])));
                    }
                } 
            } 
        }
        var_28 = ((/* implicit */unsigned int) var_6);
        /* LoopSeq 1 */
        for (unsigned short i_13 = 1; i_13 < 18; i_13 += 2) 
        {
            var_29 &= ((/* implicit */short) 1ULL);
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) var_7))));
                var_31 = ((/* implicit */_Bool) arr_14 [7] [7] [i_14] [i_14]);
            }
            /* LoopSeq 1 */
            for (unsigned char i_15 = 0; i_15 < 21; i_15 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_16 = 0; i_16 < 21; i_16 += 4) 
                {
                    var_32 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) ((unsigned short) 2034135781U)))))));
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-26)) + (2147483647))) << (((((/* implicit */int) (signed char)126)) - (126)))))) ? (((unsigned int) arr_34 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) (short)-16384))))) > (min((1023731691), (((/* implicit */int) (_Bool)1))))))))));
                }
                for (unsigned short i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    arr_50 [i_13] = ((/* implicit */long long int) var_12);
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)5)) | ((~(-1023731676)))))) & (((unsigned long long int) arr_47 [i_0] [i_13 + 3] [2LL] [i_17] [i_13 + 1] [i_13 - 1]))));
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_20 [i_13 + 2] [i_0] [i_13 + 2] [i_15] [i_17])))) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_26 [(signed char)5] [i_13] [i_13] [(signed char)5] [(signed char)5] [i_13 - 1])) ? (arr_3 [(signed char)16] [i_13]) : (((/* implicit */long long int) arr_32 [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_37 [i_15] [i_0] [i_15] [i_17])))) : (6706769565575272926LL)))));
                }
                var_36 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-2388350209311048212LL), (((/* implicit */long long int) -972226383))))) ? (var_12) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-2274133424524801496LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? ((+(((/* implicit */int) var_0)))) : ((-(((/* implicit */int) arr_11 [i_15]))))))) : (((((/* implicit */_Bool) 487054121619889995ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2167295848569369896LL)) ? (-972226384) : (arr_10 [14U] [i_13 + 3] [i_15])))) : (arr_30 [i_13 + 2] [i_13 + 1] [i_15] [i_13 + 2] [i_13 + 2])))));
            }
            var_37 &= ((/* implicit */unsigned long long int) (signed char)-113);
        }
    }
    for (long long int i_18 = 0; i_18 < 17; i_18 += 2) 
    {
        var_38 -= ((/* implicit */unsigned char) (!((((!(((/* implicit */_Bool) var_13)))) && (((/* implicit */_Bool) arr_10 [i_18] [i_18] [i_18]))))));
        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [(signed char)10] [(signed char)10] [i_18])))))));
    }
    for (long long int i_19 = 0; i_19 < 11; i_19 += 4) 
    {
        var_40 = ((/* implicit */unsigned int) ((-1023731698) / (1023731688)));
        arr_57 [i_19] = ((/* implicit */int) arr_1 [i_19]);
        arr_58 [i_19] [i_19] = ((/* implicit */long long int) var_12);
        arr_59 [i_19] &= ((/* implicit */signed char) (~((~(var_8)))));
    }
    var_41 = ((/* implicit */_Bool) (+(491941981U)));
    var_42 &= ((/* implicit */long long int) var_11);
}
