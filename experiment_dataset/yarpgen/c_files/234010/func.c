/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234010
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
    var_12 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (short)21408)) | (((/* implicit */int) var_9))))) * (((((/* implicit */long long int) 2077213483U)) / (arr_1 [i_0] [(short)5])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((18446744073709551615ULL) - (18446744073709551593ULL)))))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 4] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_1 [i_0 - 3] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (short)-21422))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((941628026), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) > (var_7))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)0] [i_0])) ? (-649112986) : (1424552904)))) ? (arr_1 [i_0 - 4] [i_0 - 2]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0 - 3])))))))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) -4082620849886013361LL)) : (var_4)))))));
        var_15 -= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (short)20373)) != (((/* implicit */int) arr_0 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_2);
        var_16 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(var_4))))));
    }
}
