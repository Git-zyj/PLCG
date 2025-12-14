/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24561
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) (+(((/* implicit */int) var_3)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) < (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (short)-6496))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) var_10);
                    arr_10 [i_0] [i_0] = ((((/* implicit */_Bool) (+(-754557148)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)113))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)8610))))) : (((-8635314532326205682LL) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [(short)3]))))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)28121)) && (arr_7 [i_0] [(unsigned short)16] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))) : (((unsigned int) (signed char)-1))))));
                    arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_8 [(unsigned char)2] [i_1] [i_0] [18ULL]) ? (arr_0 [i_1]) : (arr_0 [i_0 - 1])))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0 - 3])), (0ULL))) : (((/* implicit */unsigned long long int) max(((+(arr_0 [i_2]))), (arr_0 [i_0 + 2]))))));
                }
            } 
        } 
        arr_12 [i_0] [(short)16] |= ((/* implicit */short) var_2);
        arr_13 [(short)8] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) -1LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [(signed char)14]), (((/* implicit */unsigned long long int) arr_7 [i_0] [(short)6] [16U]))))) ? (1952229091) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [2ULL] [i_0]))) > (arr_0 [i_0]))))))) : ((+(3465386956007388452ULL)))));
    }
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        arr_17 [8LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) ((unsigned char) ((_Bool) 2136151347)))) : ((+((+(((/* implicit */int) (unsigned char)0))))))));
        var_12 += ((/* implicit */signed char) (short)8165);
    }
    for (int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_1 [i_4]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -183311605)) ? (((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) (short)9787))))) ? ((+(1099511365632LL))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_4] [(unsigned char)16]))))))));
        arr_20 [i_4] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_4] [i_4] [i_4] [i_4]) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (var_3)))) : ((+(((/* implicit */int) (short)13810))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_4]))))) : (4260527736312210061ULL)));
    }
    for (short i_5 = 2; i_5 < 13; i_5 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            /* LoopSeq 3 */
            for (int i_7 = 4; i_7 < 11; i_7 += 1) 
            {
                arr_27 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */short) (-(((/* implicit */int) arr_18 [i_6] [i_6]))));
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */int) arr_5 [17LL] [i_6] [17LL])) / (((/* implicit */int) arr_18 [i_6] [i_6])))))));
            }
            for (signed char i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    arr_32 [i_9] [i_9] [i_9] [i_5] = ((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_30 [i_5])))))) : ((+(arr_19 [i_5])))));
                    var_15 -= ((((/* implicit */long long int) arr_0 [i_5 - 1])) > (arr_26 [i_5] [i_6] [i_5 - 2] [i_9]));
                    arr_33 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) arr_24 [(_Bool)1] [i_5]);
                }
                var_16 = ((/* implicit */unsigned short) (+(arr_15 [i_5 - 1])));
            }
            for (signed char i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) 722224260))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [i_5]))))) > (arr_1 [i_6])));
            }
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    {
                        arr_42 [i_5] [i_5] [i_5] [i_5] [i_5] [(short)7] = ((/* implicit */int) ((unsigned long long int) arr_7 [i_5] [i_5 - 1] [i_5]));
                        arr_43 [i_5] [13U] [i_5] [13U] = ((/* implicit */unsigned char) (!(arr_4 [i_5 - 1] [i_5 - 1])));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_22 [i_11])) : (((/* implicit */int) arr_21 [i_11]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_5] [i_5] [i_11] [i_12] [i_12] [i_12]))) : (arr_0 [i_5 - 1]))))));
                        arr_44 [(short)5] [i_6] [(_Bool)1] [12U] [i_5] = ((/* implicit */unsigned char) ((short) (unsigned short)58400));
                    }
                } 
            } 
            var_20 = ((/* implicit */int) (+(((unsigned int) arr_34 [10]))));
            arr_45 [i_5] [i_5] [(_Bool)1] = ((/* implicit */unsigned short) ((short) arr_1 [i_5]));
            arr_46 [i_6] |= ((/* implicit */short) ((arr_14 [i_5]) ? (arr_29 [(short)12] [(short)12] [i_6] [i_5 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5])))));
        }
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 14; i_13 += 1) 
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) arr_18 [i_5 - 2] [i_13])) : (((/* implicit */int) arr_8 [i_5] [(_Bool)1] [i_5] [i_5 - 1]))));
            arr_51 [i_13] [i_5] = ((((/* implicit */int) arr_35 [i_13] [i_5])) >= (((/* implicit */int) (short)0)));
        }
        var_22 &= ((/* implicit */long long int) arr_30 [i_5]);
        arr_52 [i_5] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_31 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5]))))), (max((var_4), (((/* implicit */unsigned short) arr_31 [i_5 - 2] [i_5 - 1] [i_5 + 1] [i_5]))))));
    }
    var_23 = ((/* implicit */int) var_9);
}
