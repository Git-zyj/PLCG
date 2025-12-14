/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245139
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_4))));
    var_19 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_4)), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_16)) : (var_10)))), (var_5)))));
    var_20 = ((/* implicit */int) var_13);
    var_21 = ((/* implicit */unsigned char) ((int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_3)) : (var_1))), (var_5))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((arr_0 [i_0]) << (((((var_10) >> (((arr_0 [i_0]) - (776969440102888824ULL))))) - (330910852)))));
        arr_3 [1] = ((((var_0) + (2147483647))) >> (((arr_0 [i_0]) - (776969440102888799ULL))));
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                arr_8 [i_0] = ((/* implicit */unsigned int) ((((long long int) -927883956345540304LL)) != (((((/* implicit */_Bool) -240035389)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-7))) : (2147483647LL)))));
                var_22 = ((/* implicit */int) arr_0 [i_0]);
            }
            arr_9 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 3] [i_1] [i_1] [i_1 - 2]))) : (arr_0 [i_0])));
        }
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [1])) ? (arr_1 [i_3]) : (((arr_0 [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3])) ? (var_9) : (((/* implicit */int) arr_4 [9ULL]))))) ? (((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [7]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [8ULL] [8ULL] [i_3] [8ULL])) != (((/* implicit */int) var_17))))))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 4) 
        {
            for (signed char i_5 = 3; i_5 < 10; i_5 += 4) 
            {
                for (long long int i_6 = 3; i_6 < 12; i_6 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((short) arr_17 [i_5 + 1] [i_5 - 1]));
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((arr_1 [i_6 + 1]) <= (arr_1 [i_3]))))));
                        var_27 = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [i_3])) + (((/* implicit */int) arr_17 [i_5 + 1] [i_4 - 1]))));
                        var_28 = ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_17 [i_6 - 1] [i_5 + 1])) : (((/* implicit */int) arr_13 [i_3] [i_4 - 1] [(unsigned short)4])));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) min((arr_6 [i_7] [i_7] [i_7] [i_7]), (((/* implicit */unsigned short) arr_20 [i_7]))))) ? (((/* implicit */int) ((((/* implicit */long long int) var_3)) >= (arr_5 [11] [i_7] [i_7])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_7] [i_7] [i_7] [i_7])) && (((/* implicit */_Bool) var_10))))))));
        arr_22 [0LL] |= ((/* implicit */long long int) ((var_10) != (((/* implicit */int) arr_20 [i_7]))));
        arr_23 [i_7] = ((/* implicit */unsigned long long int) arr_10 [i_7]);
        arr_24 [i_7] = ((/* implicit */int) ((((((/* implicit */_Bool) 3409228475U)) ? (((/* implicit */int) (signed char)27)) : (566854385))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27669)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-98)))))) ? (arr_15 [i_7] [i_7]) : (((((/* implicit */_Bool) arr_13 [(unsigned short)3] [i_7] [i_7])) ? (((/* implicit */int) var_7)) : (var_4)))))));
    }
}
