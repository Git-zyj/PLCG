/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205261
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
    var_16 = ((/* implicit */long long int) var_9);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) var_8);
        var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_0 [i_0] [(short)3])) ? (((/* implicit */unsigned long long int) var_11)) : (((var_15) ? (14708467836012948076ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-105)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */long long int) arr_3 [i_1] [i_1]);
        var_19 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
        var_20 = min((((/* implicit */short) (_Bool)0)), (arr_2 [i_1]));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned short)14061), (((/* implicit */unsigned short) var_15))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_15)))))))) : (((/* implicit */int) (!((_Bool)1))))));
        var_22 = ((/* implicit */long long int) (unsigned short)51474);
    }
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        var_23 = (-9223372036854775807LL - 1LL);
        var_24 = ((/* implicit */int) max((var_24), ((~((+(((((/* implicit */int) arr_2 [i_2])) - (((/* implicit */int) var_1))))))))));
    }
    var_25 = ((/* implicit */long long int) (unsigned short)14056);
}
