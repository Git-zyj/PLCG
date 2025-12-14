/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19239
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
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_11)) : (var_5)))) ? (15221630589115204653ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 = min((min((((((/* implicit */_Bool) 288230376151711743LL)) ? (12357914026734027567ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_1 + 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_11)) | (max((((/* implicit */long long int) var_1)), (arr_2 [i_1] [i_0])))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 + 1] [i_1])) ^ (((/* implicit */int) arr_1 [i_1 + 2] [i_0]))))) ? (min((15221630589115204653ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) min((-8690581837969336041LL), (((/* implicit */long long int) var_1)))))));
                var_22 = ((/* implicit */short) max((((/* implicit */long long int) var_7)), ((+(((var_16) >> (((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))))));
                var_23 = ((/* implicit */_Bool) max((-1931457990), (((((/* implicit */int) ((signed char) var_16))) << (((max((((/* implicit */unsigned int) var_13)), (960U))) - (2226457120U)))))));
            }
        } 
    } 
    var_24 = (~(((/* implicit */int) min((var_1), (var_8)))));
    var_25 = ((((/* implicit */_Bool) ((15486327995441185139ULL) ^ (((/* implicit */unsigned long long int) (~(1947295558U))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25518))) : (((unsigned int) var_8)));
    var_26 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
}
