/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41555
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_13))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) | (var_13)))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)30225)) : (var_0))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) arr_1 [i_0]);
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((((arr_1 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)8]))))) | (((arr_1 [i_0 - 1]) & (arr_1 [i_0]))))) | (((((unsigned long long int) arr_1 [i_0])) ^ (((/* implicit */unsigned long long int) (~(-681757640)))))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_4 [i_1] &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((2523095449246324703LL) == (((/* implicit */long long int) arr_3 [(unsigned char)6])))))) >= (arr_3 [i_1])));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (-(16306335753429814596ULL))))));
        var_24 = ((/* implicit */int) (~(arr_3 [i_1])));
        arr_5 [i_1] = ((/* implicit */int) arr_3 [i_1]);
    }
    var_25 = ((/* implicit */unsigned char) var_10);
}
