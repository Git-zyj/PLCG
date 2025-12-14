/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24222
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (unsigned short)5))) >> (((var_8) - (3412070774U)))))) ? (((((/* implicit */_Bool) 0U)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_0))));
    var_17 = ((/* implicit */short) 6525306699640979693ULL);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((max((((arr_2 [12U] [i_0]) - (arr_1 [i_0]))), (max((arr_0 [i_0 - 2]), (arr_1 [i_0]))))) >> (((/* implicit */int) (!((_Bool)1)))))))));
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((arr_0 [(unsigned short)2]) << (((/* implicit */int) (unsigned short)0)))) >> (((arr_0 [14LL]) - (1383472095U))))))));
        var_20 = ((/* implicit */_Bool) arr_0 [i_0]);
    }
}
