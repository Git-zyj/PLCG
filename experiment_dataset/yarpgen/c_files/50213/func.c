/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50213
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) var_11);
                var_19 = ((/* implicit */signed char) 268435456U);
                var_20 = ((/* implicit */_Bool) 4026531843U);
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_0 [i_1]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */_Bool) (-(((unsigned int) arr_3 [6U] [i_2]))));
        var_22 = ((/* implicit */_Bool) arr_2 [(_Bool)1] [i_2]);
        var_23 -= ((/* implicit */short) (~(arr_2 [18LL] [18LL])));
        var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(var_12)))))) ? (((unsigned int) min((((/* implicit */long long int) (unsigned short)23439)), (arr_1 [i_2])))) : (max((arr_6 [i_2]), (((/* implicit */unsigned int) var_3))))));
        var_25 = ((/* implicit */signed char) arr_5 [i_2]);
    }
    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            arr_13 [i_3 + 1] [i_4] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((-7881366888059113329LL) <= (arr_11 [i_4] [i_4]))))));
            /* LoopSeq 1 */
            for (unsigned short i_5 = 1; i_5 < 13; i_5 += 1) 
            {
                arr_16 [i_5] = ((/* implicit */unsigned int) arr_9 [i_3]);
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    var_26 = ((/* implicit */unsigned long long int) 2LL);
                    /* LoopSeq 2 */
                    for (short i_7 = 2; i_7 < 13; i_7 += 4) 
                    {
                        var_27 = ((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_5]))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (unsigned short)29904))) ? (((/* implicit */long long int) var_0)) : (arr_1 [i_7 - 2])));
                        var_29 = (~((((_Bool)1) ? (arr_0 [i_6]) : (((/* implicit */unsigned long long int) var_10)))));
                        arr_23 [i_5] [(signed char)1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3 - 1])) ? (((((/* implicit */_Bool) 268435456U)) ? (arr_17 [2LL]) : (((/* implicit */long long int) 4026531849U)))) : (arr_17 [i_7])));
                    }
                    for (signed char i_8 = 1; i_8 < 12; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 881437429)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35614))) : (1725258061U)))) ? (arr_2 [i_3] [i_8]) : ((-(((/* implicit */int) var_5)))))))));
                        arr_26 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */short) 1023);
                    }
                    arr_27 [1LL] [i_3] [i_3] [i_5] [i_3] [i_5] = 5971448987193813542ULL;
                    arr_28 [i_5] [10ULL] [6U] [i_5] [10ULL] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                }
                var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 13; i_9 += 3) 
                {
                    for (int i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [i_3] [i_4] [i_4] [i_4] [i_9 - 1] [i_10]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35632))) : (((268435428U) >> (((var_12) - (14746659557565940912ULL)))))));
                            arr_34 [(unsigned short)11] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3 + 1])) ? (((/* implicit */int) arr_20 [i_3 + 1] [i_3] [i_9 - 1] [i_10] [i_10] [i_5])) : (((/* implicit */int) arr_33 [i_3 + 1] [i_4]))));
                            var_33 -= (-((+(((/* implicit */int) (unsigned short)29897)))));
                        }
                    } 
                } 
            }
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_3 + 3] [i_4] [i_4] [i_4] [i_3 - 1])) == (((/* implicit */int) arr_30 [i_4]))));
            var_35 ^= ((arr_8 [i_3 + 3]) % (arr_8 [i_3 + 1]));
            arr_35 [i_3] [i_3] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
        }
        arr_36 [(short)11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_3 + 2] [(unsigned char)11])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_3 + 2] [i_3]) >= (arr_10 [i_3 + 2] [7U]))))) : (arr_10 [i_3 + 2] [0U])));
        arr_37 [11U] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_17 [i_3 + 1]))))));
    }
    var_36 = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_18)))))) & (var_9)))));
    var_37 = 4026531854U;
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
    {
        for (signed char i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            {
                arr_46 [i_11] [i_12] = ((/* implicit */long long int) (+(((((/* implicit */int) ((((/* implicit */int) arr_38 [i_11])) < (var_15)))) << (((2139430986) - (2139430961)))))));
                var_38 = ((/* implicit */short) (+(var_15)));
                var_39 = ((/* implicit */unsigned char) 9582365410868833691ULL);
            }
        } 
    } 
}
