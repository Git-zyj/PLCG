/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224940
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_17))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_4))))) - (((/* implicit */int) ((_Bool) var_7))))))));
        var_22 = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_1 [i_0])) - (238)))))) ? (-4213393000275151996LL) : (max((min((((/* implicit */long long int) var_4)), (var_6))), (((/* implicit */long long int) arr_2 [i_0]))))));
        var_24 = ((/* implicit */int) min((var_8), (((/* implicit */long long int) var_16))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_25 -= ((/* implicit */long long int) var_17);
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)34)) | (((/* implicit */int) arr_3 [i_1] [i_1]))));
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1])))))));
        var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))));
        arr_7 [7LL] = ((/* implicit */unsigned int) ((var_14) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 2) 
    {
        var_29 = ((/* implicit */long long int) ((int) var_15));
        arr_10 [i_2] [7] = ((/* implicit */unsigned char) var_19);
        var_30 = ((/* implicit */unsigned char) ((67043328LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_11 [i_2] = ((/* implicit */unsigned char) ((unsigned int) arr_9 [i_2 + 1]));
    }
}
