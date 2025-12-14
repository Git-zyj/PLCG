/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36664
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_4))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 -= ((/* implicit */short) min((min((((/* implicit */unsigned char) var_3)), (min((var_0), (arr_1 [(unsigned short)14]))))), (((/* implicit */unsigned char) arr_4 [i_0 - 2] [i_1] [(unsigned short)19]))));
            var_16 *= ((/* implicit */unsigned char) (-(max((((/* implicit */int) max((arr_4 [i_0 - 1] [i_1] [i_0 - 1]), (var_3)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)102))))))));
        }
        arr_6 [i_0] = ((/* implicit */unsigned char) (~(9858005507479891553ULL)));
        var_17 += ((/* implicit */unsigned long long int) max((((unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)13] [i_0 - 1])) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) var_5))))), (((/* implicit */unsigned short) (_Bool)1))));
        var_18 = 3128613177384560355ULL;
    }
    var_19 = ((/* implicit */short) var_1);
}
