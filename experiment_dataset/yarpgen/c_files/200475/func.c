/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200475
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (_Bool)0)), (13506299574309636786ULL)));
        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) 15164063311196414902ULL))));
        var_12 = ((/* implicit */unsigned long long int) max((var_8), (((unsigned char) arr_1 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (var_4)));
        var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_9)) < (min((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])), (var_1)))))), (3204575171U)));
    }
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((long long int) arr_8 [i_2] [i_2]));
        var_16 = ((/* implicit */_Bool) var_3);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 2) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-124)) * (((/* implicit */int) (_Bool)1))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (var_2)));
            arr_15 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (10993254734603668446ULL) : (((/* implicit */unsigned long long int) 1878194651U))));
            var_19 = max((((var_4) << ((((-(((/* implicit */int) var_10)))) - (86))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))));
        }
        var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) arr_13 [i_3]))))), (1878194627U)));
        arr_16 [i_3] [i_3] = ((/* implicit */int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (var_4))), (var_4))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3])))));
    }
}
