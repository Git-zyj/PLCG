/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32028
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
    var_12 = ((/* implicit */unsigned int) (~(7549983523841080416ULL)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] = ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (var_7)))) ? (max((((/* implicit */int) (_Bool)1)), (var_11))) : (max((var_5), (((/* implicit */int) arr_3 [i_0])))))) < (max((((((/* implicit */_Bool) 7549983523841080411ULL)) ? (((/* implicit */int) (short)1023)) : (var_10))), (((/* implicit */int) arr_0 [i_0] [i_0])))));
        var_13 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) (~(arr_2 [i_0])))), ((~(10896760549868471177ULL))))), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
        var_14 = ((/* implicit */short) (unsigned char)182);
    }
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) 870275993)), (var_1)));
    var_16 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)17645)) >> (((((/* implicit */int) (unsigned short)47891)) - (47864))))))))), ((-(max((((/* implicit */unsigned long long int) var_4)), (10896760549868471200ULL)))))));
}
