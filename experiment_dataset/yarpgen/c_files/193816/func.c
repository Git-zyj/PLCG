/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193816
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
    var_19 = ((/* implicit */unsigned short) var_13);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)3)) ? (((((/* implicit */int) (short)25409)) + (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) arr_0 [i_0 + 4] [i_0])))))) ^ (((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_0 - 1] [i_0])))) << (((((/* implicit */int) arr_0 [i_0] [i_0 + 3])) - (12879)))))));
        var_20 = ((/* implicit */long long int) (-(((/* implicit */int) ((short) (unsigned char)120)))));
        var_21 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 4])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))), (max((((18446744073709551615ULL) << (((3406503226U) - (3406503172U))))), (((/* implicit */unsigned long long int) arr_0 [i_0 + 2] [i_0 + 2])))));
    }
    var_22 = ((/* implicit */long long int) var_3);
    var_23 &= ((/* implicit */short) var_17);
}
