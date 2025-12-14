/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37525
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_16 *= ((/* implicit */long long int) arr_1 [i_0 + 1]);
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_0 [i_0 + 1]))));
    }
    for (unsigned int i_1 = 1; i_1 < 12; i_1 += 2) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */short) (signed char)127);
        var_18 = ((/* implicit */short) ((((arr_0 [i_1 - 1]) || (arr_0 [i_1 + 1]))) ? (max((((/* implicit */unsigned int) var_9)), (var_2))) : (((/* implicit */unsigned int) ((arr_0 [i_1 - 1]) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) (_Bool)1)))))));
        var_19 = ((/* implicit */unsigned char) ((var_10) ? (((2877173032U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1])))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_2))));
    }
    var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_14)), (var_1)));
    var_22 = var_4;
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2877173016U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 3; i_3 < 15; i_3 += 2) 
        {
            arr_12 [8LL] = ((/* implicit */unsigned long long int) var_10);
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) 1417794253U))));
            arr_13 [i_2] = ((arr_9 [i_3 + 1] [i_3 - 1]) ^ (arr_9 [i_3 - 2] [i_3 - 2]));
            var_24 = arr_10 [i_2];
        }
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            for (short i_5 = 3; i_5 < 13; i_5 += 2) 
            {
                {
                    arr_19 [10] [i_2] [i_2] [(_Bool)1] = ((((((/* implicit */_Bool) 10408945245623176407ULL)) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) (short)32767)))) ^ (((/* implicit */int) var_13)));
                    arr_20 [i_5] [i_4] [i_4] [i_2] = ((/* implicit */short) 1814924237U);
                    arr_21 [14U] [i_4] [(short)13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_14 [12ULL]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [12U])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)52375))))) : (((1152921504606830592LL) - (arr_9 [i_2] [(signed char)5])))));
                }
            } 
        } 
    }
    var_25 = var_15;
}
