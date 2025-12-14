/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213051
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
    var_12 = 1019251872;
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((long long int) var_8)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_14 ^= ((/* implicit */long long int) var_10);
        arr_4 [i_0] = ((/* implicit */int) var_1);
        arr_5 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) var_3);
    }
    for (short i_1 = 3; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((unsigned int) arr_9 [i_1 + 1] [i_1]))) : (max((-3380209128433635658LL), (var_4)))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_16 |= ((/* implicit */int) ((max((((arr_10 [i_1]) & (arr_9 [i_1] [i_2]))), (((/* implicit */long long int) 1130181906U)))) > (max((var_4), (((/* implicit */long long int) ((int) var_6)))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) (+((-(arr_7 [i_3])))));
                        var_18 = var_8;
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((-(var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1019251873))))))))) ? (((max((var_0), (var_0))) ^ (((/* implicit */unsigned int) max((arr_2 [13U]), (-1019251873)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_11)) > (var_2))))) < (((((/* implicit */unsigned int) var_11)) / (var_0))))))))))));
                    }
                } 
            } 
        }
        arr_16 [i_1 - 1] = ((/* implicit */int) var_0);
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    {
                        arr_27 [i_6] [i_6] [i_6] [i_5] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned int) ((long long int) (-(((int) arr_10 [i_7])))));
                        var_20 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_7] [i_7])) ? (arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1]) : (((/* implicit */unsigned int) var_5))))) ? (var_3) : (((/* implicit */long long int) var_1)))), ((-(var_4)))));
                        var_21 |= ((/* implicit */short) ((long long int) 1019251847));
                    }
                } 
            } 
        } 
    }
    for (short i_8 = 3; i_8 < 19; i_8 += 2) /* same iter space */
    {
        arr_30 [i_8] [i_8] &= ((/* implicit */int) arr_6 [(short)14] [17]);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            for (short i_10 = 2; i_10 < 19; i_10 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_11 = 3; i_11 < 18; i_11 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */int) ((((/* implicit */int) var_10)) > (-1826331990)))))));
                        arr_39 [5] [i_9] [i_9] [i_11 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_5)))) ? (arr_19 [i_8 - 2] [i_11 + 2]) : (arr_18 [i_10 + 1] [i_11])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) -1019251875)) : (5186760364379154227LL)))) ? (((/* implicit */unsigned int) arr_0 [i_8 + 1])) : (max((var_2), (arr_17 [i_8])))))) : (max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (var_2)))), ((~(arr_31 [i_9])))))));
                        var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((arr_1 [i_8 - 1] [i_8 - 1]) - (3013657505U)))))))))));
                        var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_8 - 2] [i_8 - 3])) ? (var_8) : (((/* implicit */unsigned int) var_6)))) - (max((var_0), (((/* implicit */unsigned int) var_6))))));
                    }
                    /* vectorizable */
                    for (short i_12 = 3; i_12 < 18; i_12 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)-25103)))))));
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((6U) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) 2903563917U)))))))));
                        /* LoopSeq 1 */
                        for (short i_13 = 0; i_13 < 20; i_13 += 1) 
                        {
                            var_27 = ((/* implicit */int) arr_8 [i_10]);
                            var_28 = var_7;
                            var_29 ^= ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_8)) ? (arr_18 [i_8 - 2] [i_8]) : (var_8))) : (arr_36 [i_8 - 2] [12]));
                        }
                    }
                    var_30 = ((/* implicit */short) arr_1 [i_8] [i_9]);
                    var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_7) : (var_1)))) ? ((-(var_0))) : (((4294967284U) / (25165824U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3305))) : (max((((/* implicit */unsigned int) ((var_11) + (var_11)))), (((((/* implicit */_Bool) var_11)) ? (var_7) : (var_1))))));
                }
            } 
        } 
    }
}
