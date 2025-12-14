/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234518
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(_Bool)1] = ((/* implicit */long long int) (_Bool)0);
                var_16 *= (!((!(((/* implicit */_Bool) 10527505131155553413ULL)))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((_Bool) (-(((/* implicit */int) arr_0 [i_0]))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_2 = 3; i_2 < 12; i_2 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_4 [i_2] [(unsigned short)8]))));
            var_19 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)-10)))) ? (arr_2 [(short)0]) : (((/* implicit */int) (unsigned short)24576))));
            arr_11 [i_3] = ((/* implicit */short) ((var_3) | (((/* implicit */unsigned long long int) arr_3 [i_3 - 1] [i_3 + 1]))));
        }
        arr_12 [i_2] = ((/* implicit */short) (-((-(-6922153384940836912LL)))));
        /* LoopNest 3 */
        for (short i_4 = 2; i_4 < 11; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    {
                        var_20 |= var_13;
                        arr_22 [(unsigned short)2] [i_5] [i_4] [i_4] [i_2] = ((/* implicit */long long int) (~(var_0)));
                    }
                } 
            } 
        } 
        arr_23 [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1)))) < (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_15 [i_2] [i_2] [7ULL])))))))));
    }
    for (short i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7] [i_7])) ? (((/* implicit */int) var_11)) : ((+(((/* implicit */int) (unsigned short)20993))))))) ? (((arr_26 [i_7]) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7]))))) : (18446744073709551613ULL))))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (short)-3787))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_8 = 3; i_8 < 16; i_8 += 4) /* same iter space */
        {
            arr_29 [2] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_25 [i_7] [i_7])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133)))))));
            var_23 = ((/* implicit */short) (_Bool)1);
        }
        for (short i_9 = 3; i_9 < 16; i_9 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                for (short i_11 = 1; i_11 < 17; i_11 += 3) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) min((((((/* implicit */_Bool) 10527505131155553413ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (arr_33 [i_12] [i_12] [i_12] [i_12]))))));
                            var_25 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-16321))));
                        }
                    } 
                } 
            } 
            arr_42 [i_7] [i_9] [i_9] = ((/* implicit */short) (~(((/* implicit */int) var_4))));
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 1) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9]))))) / (((((/* implicit */_Bool) arr_36 [i_7])) ? (4553048037167575776ULL) : (((/* implicit */unsigned long long int) -583043987))))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_38 [i_9 + 2] [i_9])) : (((/* implicit */int) (short)-15997)))) : (((/* implicit */int) (unsigned char)0))));
                        var_27 = ((/* implicit */_Bool) max((var_27), ((_Bool)1)));
                        var_28 *= ((/* implicit */_Bool) 7919238942553998191ULL);
                    }
                } 
            } 
            var_29 += ((/* implicit */long long int) var_11);
        }
        /* vectorizable */
        for (short i_15 = 3; i_15 < 16; i_15 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-14690)) ? (arr_48 [i_7] [i_7] [i_7]) : (((/* implicit */long long int) (~(((/* implicit */int) var_11))))))))));
            arr_51 [i_7] [i_15] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_7] [i_7] [i_7] [i_15] [i_15])) ? (arr_44 [i_7] [i_7] [i_15 + 1]) : (arr_44 [(short)13] [(short)13] [i_15 + 1])));
        }
        for (short i_16 = 3; i_16 < 16; i_16 += 4) /* same iter space */
        {
            arr_54 [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)15996)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) 2050907769)) ? (arr_34 [i_16] [i_16] [i_16] [i_16] [i_16 + 4] [i_16 + 4]) : (((/* implicit */long long int) -583043983))))));
            var_31 &= ((/* implicit */long long int) (short)32767);
            var_32 = ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (max((((/* implicit */unsigned long long int) var_12)), (var_3))))));
            var_33 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)45153)) + (583043972))), ((-(((/* implicit */int) (short)12786)))))))));
        }
    }
    /* vectorizable */
    for (short i_17 = 0; i_17 < 20; i_17 += 3) /* same iter space */
    {
        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)16005))) | (arr_34 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])))) ? (((((/* implicit */_Bool) (short)-13170)) ? (((/* implicit */int) (unsigned short)24576)) : (656677728))) : ((~(((/* implicit */int) (_Bool)1))))));
        var_35 -= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (short)-30120))));
        var_36 = ((/* implicit */long long int) (short)32756);
        var_37 -= ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (-3521669585367062361LL) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_17])))));
    }
}
