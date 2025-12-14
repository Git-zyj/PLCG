/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219178
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
    var_19 -= ((/* implicit */_Bool) max((((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (var_11)))) << (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))), (max((((/* implicit */int) ((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (((((/* implicit */int) var_18)) & (var_10)))))));
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((((/* implicit */unsigned short) (!((_Bool)1)))), (var_5))))));
    var_21 = ((min((((/* implicit */long long int) var_2)), (var_4))) >= (((/* implicit */long long int) ((/* implicit */int) var_12))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))) & ((-(arr_1 [i_0])))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [13ULL])) >> (((/* implicit */int) ((arr_1 [i_0]) > (((/* implicit */int) var_12)))))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) == (arr_1 [i_0]))))) * (((var_1) ^ (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
        var_23 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) arr_5 [i_1] [i_1]);
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (19ULL)));
        var_24 = ((((/* implicit */int) (!(max(((_Bool)1), (var_14)))))) & (((-691431867) / (arr_1 [i_1]))));
        var_25 = min((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)252)));
    }
}
