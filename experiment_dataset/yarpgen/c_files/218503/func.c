/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218503
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((int) ((long long int) (signed char)-71)));
        arr_2 [i_0] = (((!(((/* implicit */_Bool) (signed char)50)))) ? (((/* implicit */int) var_14)) : ((-(((/* implicit */int) var_1)))));
        var_16 &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)48189)) << (((((((/* implicit */_Bool) (unsigned short)6)) ? (var_13) : (((/* implicit */unsigned long long int) var_6)))) - (2893732961516690673ULL)))));
        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)48189))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) var_10)) : (var_7)));
                        var_18 = ((/* implicit */int) (~(((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (var_5)))));
                    }
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_12) | (((/* implicit */int) var_9))))) ? (16786977381502124914ULL) : (arr_4 [i_0 + 1] [i_1 + 2])));
                        var_20 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
                        arr_14 [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_9 [i_0] [i_0] [i_0 - 1] [i_1 + 1])));
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_3))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */int) 1659766692207426702ULL);
                                arr_22 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */signed char) (+(arr_1 [i_1 - 2])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        var_23 = ((/* implicit */signed char) max((((int) ((long long int) var_2))), (((/* implicit */int) (!(((((/* implicit */_Bool) 1679999324462703612LL)) && (((/* implicit */_Bool) arr_24 [i_7])))))))));
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)103)) ? (-1438681912) : (((/* implicit */int) (unsigned char)56))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)97)) << (((((-337676693) + (337676718))) - (21)))))) ? (-915955844) : (((((/* implicit */_Bool) -20392153)) ? (((/* implicit */int) (unsigned char)255)) : (-337676693))))) : (((((/* implicit */_Bool) 1659766692207426702ULL)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) (signed char)83))))));
    }
    var_25 |= ((/* implicit */unsigned long long int) var_1);
    var_26 = ((/* implicit */unsigned long long int) min((var_26), ((~((~(((((/* implicit */unsigned long long int) var_12)) ^ (var_13)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_8 = 1; i_8 < 24; i_8 += 4) /* same iter space */
    {
        arr_29 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */int) (signed char)103))));
        var_27 = ((/* implicit */unsigned char) (signed char)88);
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) arr_27 [i_8]))));
    }
    for (long long int i_9 = 1; i_9 < 24; i_9 += 4) /* same iter space */
    {
        arr_34 [i_9] [i_9] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_28 [i_9 - 1])), (((((/* implicit */_Bool) -563819814)) ? (-337676693) : (337676675)))))), (((((/* implicit */_Bool) -20392153)) ? (((/* implicit */unsigned long long int) 997747048)) : (1659766692207426720ULL)))));
        arr_35 [(unsigned short)6] [i_9] |= ((/* implicit */int) max((1659766692207426725ULL), (((5744164350168574595ULL) - (((/* implicit */unsigned long long int) var_7))))));
        var_29 = ((/* implicit */int) ((unsigned char) min((var_13), (((/* implicit */unsigned long long int) arr_26 [i_9 + 1] [i_9 + 1])))));
    }
}
