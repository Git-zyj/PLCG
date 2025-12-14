/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208597
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
    var_14 ^= ((/* implicit */unsigned short) (unsigned char)0);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_15 |= ((/* implicit */signed char) (short)32764);
        var_16 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (min((((/* implicit */int) (unsigned char)11)), (((((/* implicit */_Bool) (unsigned short)39678)) ? (((/* implicit */int) (short)3584)) : (((/* implicit */int) (unsigned short)35957)))))) : (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_17 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_0])))) <= (((/* implicit */int) ((unsigned char) arr_4 [(unsigned short)5] [i_1])))));
            var_18 += ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_1]))));
        }
        var_19 *= ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))), ((!(((/* implicit */_Bool) arr_1 [i_0]))))));
    }
    var_20 -= (unsigned short)35947;
}
