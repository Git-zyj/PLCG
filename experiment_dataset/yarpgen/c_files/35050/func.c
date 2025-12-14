/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35050
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
    var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */int) (signed char)-127)) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))));
    var_15 = ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned long long int) max((511U), (((/* implicit */unsigned int) (signed char)1))))) : (18446744073709551615ULL)))) ? (var_4) : (min(((-(var_4))), (((/* implicit */unsigned int) -1941494160)))));
    var_16 = ((/* implicit */short) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (931001334380846486ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21331))) < (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_17 = ((/* implicit */long long int) arr_9 [i_1]);
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 17515742739328705129ULL)) ? ((+(576460717943685120ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62274)))));
            arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) arr_9 [i_1]);
        }
        arr_13 [i_1] = ((/* implicit */signed char) ((long long int) arr_11 [i_1] [i_1] [i_1]));
    }
}
