/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204987
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((long long int) (signed char)-25))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)71))) : (33554431LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)42278)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) (signed char)96)))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((int) ((unsigned char) (_Bool)1)));
            /* LoopNest 2 */
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 9756517718155979857ULL)) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) (_Bool)1)))))))));
                            var_17 ^= ((/* implicit */_Bool) (signed char)-116);
                            var_18 = (!(((/* implicit */_Bool) ((signed char) (signed char)96))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            var_19 ^= ((/* implicit */_Bool) 0U);
                            var_20 = ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) (_Bool)1)))));
                        }
                        arr_18 [i_3 + 1] [i_3 + 1] [(signed char)7] [i_2 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) (((!((_Bool)1))) ? (2147467264ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                        var_21 ^= ((/* implicit */unsigned char) 4294967295U);
                        arr_19 [13ULL] [(unsigned short)11] [i_2] [(signed char)13] [i_3] = ((/* implicit */_Bool) (signed char)26);
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) 4294967288U))) ? (((((/* implicit */_Bool) (short)17384)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (short)-30622)))) : (((/* implicit */int) ((signed char) (unsigned char)255)))));
            arr_20 [i_1] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned short) 4294967295U)));
        }
        var_23 = ((/* implicit */unsigned long long int) ((long long int) (unsigned short)49799));
        /* LoopSeq 3 */
        for (signed char i_6 = 1; i_6 < 16; i_6 += 2) /* same iter space */
        {
            arr_24 [(short)3] [i_6] [i_0] = (_Bool)1;
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) 7599144377090694346LL))));
        }
        for (signed char i_7 = 1; i_7 < 16; i_7 += 2) /* same iter space */
        {
            var_25 *= ((/* implicit */unsigned char) -7599144377090694343LL);
            var_26 *= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 1513714260581087464LL)) ? (-2019002230270496097LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-108))))));
        }
        for (unsigned char i_8 = 4; i_8 < 17; i_8 += 1) 
        {
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9539)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9527))) : ((~(5U))))))));
            arr_31 [1LL] = ((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned short)23734))))));
            var_28 = (_Bool)1;
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 4294967285U))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-96))))) : (((long long int) -8934231166505956149LL)))))));
        }
    }
    var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (signed char)-78))) ? (((/* implicit */int) (unsigned short)55999)) : (((/* implicit */int) ((unsigned char) 7LL)))))) ? ((+(-8934231166505956129LL))) : (0LL)));
}
