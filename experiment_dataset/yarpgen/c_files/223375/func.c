/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223375
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1452172621U)))) ? (var_15) : (((/* implicit */unsigned long long int) 0))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))) : (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_6 [4ULL] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)0])) ? (var_15) : (((/* implicit */unsigned long long int) 2306815144U)))))))));
    }
    var_17 = ((/* implicit */unsigned char) (!(var_8)));
    var_18 = ((/* implicit */unsigned int) (+((-(var_10)))));
    var_19 = ((/* implicit */short) max(((+(((/* implicit */int) var_14)))), (((/* implicit */int) var_16))));
}
