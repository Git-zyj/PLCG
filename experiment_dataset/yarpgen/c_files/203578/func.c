/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203578
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) : (((/* implicit */int) ((short) arr_2 [i_0])))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) (short)32767))))) ? (((13227244645903778212ULL) - (((/* implicit */unsigned long long int) 6966702695873386856LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))) ? (((/* implicit */int) ((short) min((9095834527381253720ULL), (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((arr_4 [6U]), (((/* implicit */unsigned long long int) 6966702695873386842LL))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1776766608U)) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_1]))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 16; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (signed char i_6 = 1; i_6 < 16; i_6 += 1) 
                        {
                            {
                                arr_20 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */int) (signed char)27)), (((((/* implicit */_Bool) arr_0 [i_3 - 1])) ? (((/* implicit */int) (unsigned char)255)) : (arr_0 [i_3 + 1])))));
                                var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_6 + 1] [i_3 + 1] [i_3 - 2] [i_5]))));
                                arr_21 [i_6] [i_6 - 1] [(unsigned char)8] [i_6] = ((/* implicit */long long int) min((max((((/* implicit */int) (unsigned char)12)), (arr_0 [i_6 + 1]))), (min((arr_0 [i_6 - 1]), (arr_0 [i_6 + 1])))));
                                var_23 *= ((/* implicit */_Bool) (unsigned short)65535);
                                arr_22 [i_5] [i_3] [7LL] = ((((/* implicit */_Bool) (short)23032)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-10019)));
                            }
                        } 
                    } 
                    var_24 += ((/* implicit */int) arr_17 [i_2]);
                }
            } 
        } 
        var_25 = max((((/* implicit */unsigned char) (signed char)51)), ((unsigned char)22));
        arr_23 [7LL] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) (signed char)-70)) : (-1228037578)))) ? (((/* implicit */unsigned long long int) 2518200691U)) : (((((/* implicit */unsigned long long int) 1228037582)) & (0ULL))))), (((((/* implicit */unsigned long long int) 5083423783358433283LL)) & (arr_4 [i_2])))));
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-23033)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68))) : (var_6)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_7 = 4; i_7 < 16; i_7 += 1) 
        {
            var_27 = 2149945167U;
            arr_27 [i_2] = ((/* implicit */long long int) arr_26 [i_7]);
        }
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            arr_30 [i_8] [i_2] [i_2] = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */unsigned long long int) arr_17 [i_2])), (((((/* implicit */unsigned long long int) var_11)) / (18446744073709551615ULL))))));
            var_28 = ((/* implicit */unsigned int) arr_11 [i_2] [i_2] [i_2]);
        }
    }
    /* LoopNest 2 */
    for (short i_9 = 3; i_9 < 21; i_9 += 3) 
    {
        for (int i_10 = 0; i_10 < 22; i_10 += 4) 
        {
            {
                var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_31 [i_9 - 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_9 + 1]))) : (arr_4 [i_9 - 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_9 - 1]), (((/* implicit */short) arr_31 [i_9 - 3])))))) : (((unsigned long long int) arr_4 [i_9 - 3]))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        {
                            arr_40 [i_11] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_9 - 3])) ? (((/* implicit */int) arr_33 [i_9 - 2])) : (((/* implicit */int) arr_33 [i_9 - 3]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_9])) ? (((/* implicit */int) arr_31 [i_12])) : (((/* implicit */int) (unsigned short)16991))))) ? (0LL) : (((/* implicit */long long int) arr_32 [i_9 - 3]))))));
                            arr_41 [i_10] [i_9] [i_10] [i_12] [i_10] |= ((/* implicit */short) ((((/* implicit */_Bool) 16777215U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)35))));
                        }
                    } 
                } 
            }
        } 
    } 
}
