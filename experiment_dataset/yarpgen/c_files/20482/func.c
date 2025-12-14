/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20482
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)-31401))))));
        var_18 ^= ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0] [i_0])) == (((/* implicit */int) arr_0 [i_0] [i_0])))) ? ((-(18446744073709551609ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_19 = min((max((-793292557456667613LL), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)11] [(unsigned char)11]))) < (-793292557456667613LL)))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_1 [i_0]))))));
        var_20 *= ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) - (793292557456667619LL))), (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
    }
    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */unsigned long long int) 793292557456667613LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    var_22 = ((/* implicit */unsigned int) 793292557456667609LL);
}
