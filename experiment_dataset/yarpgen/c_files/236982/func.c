/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236982
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
    var_18 = ((/* implicit */unsigned char) min((max((((/* implicit */int) (!(((/* implicit */_Bool) 0U))))), (var_4))), (((/* implicit */int) var_6))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((long long int) var_4))));
    var_20 *= ((/* implicit */short) var_0);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [1LL] [13] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 501157248)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_1 [0] [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) ((arr_1 [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) : (((((/* implicit */int) var_8)) % (((/* implicit */int) var_10)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        var_21 = ((/* implicit */short) var_11);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((long long int) (unsigned char)201));
    }
    var_22 = ((/* implicit */unsigned short) var_2);
}
