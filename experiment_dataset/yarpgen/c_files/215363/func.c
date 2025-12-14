/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215363
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_17 = (-(((/* implicit */int) (unsigned char)189)));
                var_18 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775799LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((6130701644196339513LL) % (((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned short)4] [i_1] [(signed char)6])))))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) 3738087116U)) || (((/* implicit */_Bool) arr_1 [(signed char)9] [i_1])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(short)1] [9U])) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned short)0]))) / (arr_4 [1U] [4]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 14106608495597295879ULL))))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */int) var_16);
    var_21 = ((/* implicit */unsigned char) var_11);
    var_22 |= ((/* implicit */unsigned short) var_6);
}
