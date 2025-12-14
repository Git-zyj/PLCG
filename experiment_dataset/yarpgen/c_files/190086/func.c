/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190086
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_9))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_8))))))));
                arr_8 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)24248)) && (((/* implicit */_Bool) 2147483647)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))) : (max((2230796579U), (((/* implicit */unsigned int) arr_2 [i_0 - 1] [i_0 + 1]))))));
                arr_9 [2] [2] [i_1] = ((/* implicit */signed char) (+(-397577084035992401LL)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 1; i_2 < 8; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))) * (max((((/* implicit */unsigned int) (unsigned short)18953)), (10U))))));
        var_19 = ((/* implicit */unsigned int) ((short) ((var_9) || (((/* implicit */_Bool) arr_4 [i_2 + 2] [i_2 + 1])))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max((min((var_16), (arr_1 [i_2 - 1]))), (((/* implicit */unsigned int) ((var_13) && (((/* implicit */_Bool) arr_10 [i_2 + 2] [(unsigned char)2]))))))))));
    }
    var_21 = min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)65535)), (8589934591LL)))), (var_1));
    var_22 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)54888)) : (((/* implicit */int) (unsigned short)2790))))) ? (((((/* implicit */unsigned long long int) var_12)) & (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)19004)))))) ^ (((/* implicit */unsigned long long int) ((long long int) ((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
}
