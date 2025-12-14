/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193378
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) (short)-17269)) : (((/* implicit */int) (short)26773))));
        var_20 += ((/* implicit */signed char) (unsigned char)32);
        var_21 = ((/* implicit */short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111))) | (10318660003475024115ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))))) * (((/* implicit */unsigned long long int) -582899932))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (arr_6 [i_1] [i_1]) : (4019233138U)));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (signed char)-111))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 1) 
            {
                for (short i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    {
                        arr_16 [i_4] = ((/* implicit */unsigned char) arr_11 [i_4] [(signed char)15]);
                        arr_17 [i_1] [i_2] [i_4] [i_4] = ((((((/* implicit */int) (short)-31140)) + (2147483647))) << (((((((/* implicit */_Bool) (short)-31140)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (signed char)93)))) - (43))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3503732252776294271LL)) ? (582899932) : (((/* implicit */int) (unsigned char)45))))) : (((((/* implicit */_Bool) (unsigned char)248)) ? (3072U) : (((/* implicit */unsigned int) 1378778417)))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 1) 
        {
            {
                arr_24 [i_6] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_2 [i_5]);
                arr_25 [i_6] [i_5] [i_6] = ((/* implicit */short) arr_20 [i_5] [14LL]);
            }
        } 
    } 
}
