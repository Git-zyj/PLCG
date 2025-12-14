/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52381
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
    var_15 = ((/* implicit */unsigned char) max((((/* implicit */int) var_9)), (min((((((/* implicit */int) var_10)) | (((/* implicit */int) var_3)))), (((((/* implicit */int) var_7)) << (((var_2) - (3188251373U)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)30139)) ? (var_11) : (((/* implicit */unsigned long long int) var_0)))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [1U])) ? (arr_0 [(signed char)8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
        var_17 = ((/* implicit */unsigned short) var_2);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((var_1) + (1486191193)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_2 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30139)))));
        arr_5 [8ULL] = ((/* implicit */unsigned short) (-(var_13)));
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            for (unsigned short i_3 = 1; i_3 < 16; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    {
                        var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (var_6) : (((/* implicit */unsigned int) var_14))))) ? (((/* implicit */int) ((short) var_4))) : (var_1)));
                        arr_16 [i_1] [i_2 - 1] [i_3 + 1] [i_3] = ((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_1]);
                        arr_17 [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_13))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_3 + 1] [i_3]))) : (var_6))))));
                    }
                } 
            } 
        } 
        arr_18 [3ULL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [(signed char)7] [i_1]))) == (((arr_12 [i_1] [i_1] [i_1]) + (((/* implicit */unsigned long long int) var_1))))));
        arr_19 [i_1] = ((/* implicit */long long int) ((arr_9 [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) ((var_5) == (((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))))))));
    }
}
