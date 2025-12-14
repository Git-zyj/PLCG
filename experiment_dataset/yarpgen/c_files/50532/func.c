/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50532
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
    var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(var_7)))), (((((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) << (((((/* implicit */int) var_10)) - (52897)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)145))) > (var_1)))), (max(((unsigned char)151), (((/* implicit */unsigned char) var_12))))))) & (arr_1 [i_0])));
        arr_3 [(short)16] = ((/* implicit */unsigned long long int) (signed char)-79);
        arr_4 [i_0] = ((/* implicit */short) (+(min((arr_1 [i_0]), (((arr_1 [i_0]) + (arr_1 [i_0])))))));
    }
    for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        arr_9 [(short)9] [(short)9] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_11))))), (arr_5 [i_1])));
        arr_10 [i_1] [i_1 + 1] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_0))))))));
        var_15 *= ((/* implicit */unsigned int) max((arr_6 [i_1] [i_1 + 2]), (((/* implicit */long long int) (unsigned short)7))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_16 = ((/* implicit */short) ((var_5) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) var_4))))));
        var_17 ^= (short)-1;
    }
    var_18 = ((/* implicit */_Bool) (signed char)54);
}
