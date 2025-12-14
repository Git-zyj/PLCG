/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51331
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
    var_16 |= var_13;
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((unsigned int) 3631692421U)), (((/* implicit */unsigned int) ((short) var_1)))))) ? (((min((((/* implicit */unsigned int) (signed char)127)), (3631692421U))) >> (((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) var_0)) - (164))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    var_18 = 3631692451U;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0] [i_0])), (var_11)))) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? ((~(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) 3631692421U)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned short) arr_4 [i_0] [i_1 + 1] [i_0])))));
            var_21 = (i_1 % 2 == zero) ? (((((/* implicit */int) ((unsigned short) arr_0 [i_1] [i_1]))) >> (((((/* implicit */int) arr_4 [(unsigned short)9] [i_1 + 1] [i_1])) - (117))))) : (((((/* implicit */int) ((unsigned short) arr_0 [i_1] [i_1]))) >> (((((((/* implicit */int) arr_4 [(unsigned short)9] [i_1 + 1] [i_1])) - (117))) + (188)))));
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) var_12))));
        }
        var_22 = ((/* implicit */unsigned short) ((((arr_2 [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((3631692430U) & (var_3))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_23 = ((/* implicit */long long int) (~(((unsigned int) var_15))));
        var_24 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_2] [i_2]))));
        var_25 ^= ((/* implicit */unsigned char) arr_0 [i_2] [i_2]);
    }
    var_26 -= ((/* implicit */unsigned long long int) var_13);
}
