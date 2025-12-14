/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218366
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
    var_11 *= ((/* implicit */short) (unsigned short)27311);
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1339314198U)))) ^ (((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */unsigned long long int) 1339314198U)) : (18446744073709551615ULL)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-16384)) >= (((/* implicit */int) (signed char)50)))))) : (((unsigned long long int) (unsigned char)43)))) ^ (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
        var_14 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((short) 4294967283U))) || (((/* implicit */_Bool) arr_2 [i_0])))) || (((/* implicit */_Bool) 1339314198U))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_3 [i_2] [i_1] [i_0]))) ? (((/* implicit */unsigned long long int) ((long long int) ((int) arr_3 [(short)7] [(short)7] [i_2])))) : (((arr_8 [i_1] [i_1] [i_2]) * (((/* implicit */unsigned long long int) (+(67108863U))))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) 18446744073709551615ULL))) ^ (((/* implicit */int) (signed char)33))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) (signed char)-38)) ^ (-1))))) : (((/* implicit */int) ((((7222972269105140855ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned int) arr_1 [i_0] [i_1]);
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((arr_1 [(short)7] [(short)7]) << (((((var_3) + (1791535791))) - (2)))))) ? (((/* implicit */int) ((unsigned short) (short)-14932))) : (((/* implicit */int) ((arr_4 [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
    }
    for (signed char i_3 = 1; i_3 < 14; i_3 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) var_5);
        arr_14 [(unsigned short)14] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))) - (2ULL)));
        var_18 = ((/* implicit */unsigned int) (_Bool)1);
    }
}
