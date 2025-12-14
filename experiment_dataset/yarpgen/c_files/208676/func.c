/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208676
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
    var_11 = ((/* implicit */long long int) var_3);
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_7))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) (((+((-9223372036854775807LL - 1LL)))) & ((-((-(9223372036854775793LL)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 |= ((/* implicit */int) arr_0 [i_1]);
            var_15 = ((/* implicit */signed char) ((5185544341337589350LL) / (var_1)));
        }
        arr_5 [i_0] = ((/* implicit */short) min((min((((/* implicit */long long int) arr_1 [i_0 + 1])), (var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1771615140U)) ? (1995195457U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))))))));
        var_16 = ((/* implicit */int) (unsigned char)109);
    }
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_3))));
    var_18 = ((/* implicit */signed char) min((var_4), (((/* implicit */int) min((var_3), (((/* implicit */short) (!(((/* implicit */_Bool) 2299771821U))))))))));
}
