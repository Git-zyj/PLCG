/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/384
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
    var_10 ^= ((-1818984600651440209LL) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_7)))));
    var_11 = ((/* implicit */int) max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) < (max((var_2), (1818984600651440208LL))))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)122))));
                    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) min((arr_1 [i_2]), (((((/* implicit */_Bool) (signed char)-90)) ? (9223372036854775807LL) : (-1818984600651440209LL))))))));
                }
            } 
        } 
        var_14 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0])) ? (((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_0])) ? (((/* implicit */long long int) arr_6 [i_0 - 1] [i_0])) : (((long long int) var_7)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0]))) | ((+(var_2)))))));
        var_15 = ((var_9) ? (-1818984600651440192LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) (signed char)93)) : (arr_0 [i_0 + 1])))));
        arr_7 [i_0] [i_0] = ((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1]);
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((arr_8 [7ULL]) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))))))));
        arr_11 [18ULL] = ((/* implicit */int) (((!((_Bool)1))) || (((/* implicit */_Bool) var_7))));
    }
    var_17 = ((/* implicit */_Bool) var_4);
    var_18 = ((/* implicit */_Bool) max((max((var_8), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) var_7))));
}
