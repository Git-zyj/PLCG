/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48993
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) > (max((3ULL), (((/* implicit */unsigned long long int) 806904645)))))))));
    var_15 |= ((/* implicit */unsigned char) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_1 [i_0])))))))));
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_0 [i_0] [i_0]))) ? (var_2) : (arr_0 [7ULL] [7ULL]))))));
        var_18 *= ((/* implicit */signed char) ((806904652) & (((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_19 += arr_3 [i_1];
        var_20 -= ((/* implicit */signed char) min((806904629), (830495313)));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_7 [i_1] = ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_4 [i_1]))))) / (min((arr_4 [i_2]), (arr_4 [i_1]))));
            var_21 -= ((/* implicit */_Bool) 1968097240);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                var_22 = (~(((/* implicit */int) (signed char)-9)));
                var_23 = (+(arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2]));
            }
            arr_10 [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((-(18446744073709551614ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_5)))))));
        }
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) -806904672))));
    }
    var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) != (((/* implicit */int) var_7)))))) : (min((((/* implicit */unsigned int) -806904637)), (var_5)))))) && (((/* implicit */_Bool) var_12))));
}
