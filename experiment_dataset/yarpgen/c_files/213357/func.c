/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213357
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_10 = ((/* implicit */long long int) 14471663674243985332ULL);
        arr_3 [i_0] = ((/* implicit */short) max((14471663674243985332ULL), (((/* implicit */unsigned long long int) -1700487058))));
    }
    for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 2) 
            {
                {
                    var_11 = ((-8) & (1700487057));
                    var_12 *= ((/* implicit */long long int) 18446744073709551615ULL);
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            {
                                arr_16 [i_1 - 1] [i_2] [i_3] [(unsigned char)4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((1700487078), (((/* implicit */int) (unsigned short)61405))))) ? ((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (_Bool)1))))) : (var_3)));
                                var_13 = ((/* implicit */int) 5603711420510053489LL);
                                arr_17 [i_1] [i_1] [i_2] [i_1] [(short)7] [i_4] [i_5] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((var_0), (((/* implicit */unsigned long long int) var_7)))) >> (((((unsigned long long int) var_6)) - (18446744073415570537ULL)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (var_3)))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)31)) : (-1700487079)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((var_1) <= (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_5)) ? (235467261U) : (((/* implicit */unsigned int) 1700487058)))))))));
                }
            } 
        } 
        var_15 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 235467261U)) / (max((((((/* implicit */_Bool) 1700487057)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61405))) : (5199524169554732659ULL))), (min((var_4), (((/* implicit */unsigned long long int) 1700487057))))))));
    }
    for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_5))));
        var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 67108863LL)), (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_3)))))) : (max((var_7), (((/* implicit */long long int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_9)) ? (max((3975080399465566283ULL), (((/* implicit */unsigned long long int) (unsigned char)0)))) : (((/* implicit */unsigned long long int) -1983495812))))));
        var_18 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((long long int) -1700487079))), (3975080399465566283ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) -1700487078)) | (-5603711420510053489LL))) == (((/* implicit */long long int) (-(((/* implicit */int) (short)-8470))))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 2) /* same iter space */
    {
        var_19 = (unsigned char)15;
        var_20 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-1)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)22715)))))));
    }
    for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 2) /* same iter space */
    {
        arr_24 [i_8] = ((/* implicit */signed char) 3850035638U);
        arr_25 [11U] = ((/* implicit */signed char) ((-1700487078) ^ (65535)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (5638477790308345556LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                var_22 += ((/* implicit */unsigned long long int) var_5);
            }
            arr_30 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 0ULL)) ? (var_3) : (((/* implicit */unsigned long long int) var_2)))));
        }
        arr_31 [2LL] = ((/* implicit */signed char) (_Bool)1);
    }
}
