/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195429
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
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_10 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((((/* implicit */_Bool) (unsigned char)132)) ? (8108901270106286551LL) : (arr_0 [i_0]))) : (((/* implicit */long long int) -814007453))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    var_11 |= ((/* implicit */int) arr_1 [i_0 + 2]);
                    arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((1048575LL) & (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)16299))))));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */long long int) arr_9 [i_3])) : (arr_8 [i_3] [i_3])))) ? (arr_8 [i_3] [i_3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) (unsigned char)40)) : (arr_9 [i_3])))))) - (((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (arr_8 [i_3] [i_3]) : (arr_8 [i_3] [i_3])))));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) arr_9 [i_3]))));
    }
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)34581)))) : (((/* implicit */int) ((unsigned short) -1048566LL)))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16)))));
    /* LoopSeq 3 */
    for (unsigned short i_4 = 3; i_4 < 20; i_4 += 4) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */int) (short)29670)), (-1)))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) ? (9223372036854775807LL) : (((/* implicit */long long int) 1))))) ? (arr_11 [i_4] [i_4 - 3]) : (((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4]))) : (arr_11 [i_4] [i_4])))))));
        var_16 -= ((/* implicit */signed char) ((((((((/* implicit */_Bool) (signed char)-7)) ? (1048575LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4]))))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_10 [i_4])))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4 - 1]))) & (9223372036586340352LL))) : (((/* implicit */long long int) ((int) (unsigned char)17)))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -268435456)))))));
    }
    /* vectorizable */
    for (long long int i_5 = 2; i_5 < 18; i_5 += 2) 
    {
        var_18 -= ((((/* implicit */_Bool) ((-13) & (((/* implicit */int) (signed char)0))))) ? (-1048576LL) : (((long long int) (short)-16384)));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_5 + 3])))))));
        var_20 = ((/* implicit */unsigned short) arr_13 [i_5]);
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_14 [i_5]))));
    }
    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_10 [i_6])), (arr_13 [i_6])))) ? ((-(1545790495))) : (((arr_16 [i_6]) / (arr_16 [i_6]))))), (((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */int) arr_14 [i_6])) : (((/* implicit */int) (unsigned short)18597))))));
        var_23 -= ((short) 9223372036854775807LL);
        var_24 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((int) (short)13096))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -2066905612)) ? (((/* implicit */int) arr_14 [i_6])) : (1670636922)))) : (((((/* implicit */_Bool) -9223372036854775803LL)) ? (((/* implicit */long long int) arr_15 [i_6] [i_6])) : (arr_13 [i_6]))))));
        arr_18 [i_6] = ((/* implicit */unsigned short) min(((+(9223372036854775807LL))), (((/* implicit */long long int) ((((int) (unsigned char)40)) / (((/* implicit */int) arr_12 [i_6] [i_6])))))));
        var_25 -= ((/* implicit */long long int) ((unsigned char) (+(arr_11 [i_6] [i_6]))));
    }
}
