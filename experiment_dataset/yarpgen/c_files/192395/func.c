/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192395
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
    var_18 &= ((/* implicit */unsigned short) var_0);
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551592ULL) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) 2147483647)) : (9223372036854775807LL))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) ((arr_3 [i_2] [i_0]) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max(((_Bool)0), ((_Bool)0)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_2])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_0]) ? (((/* implicit */int) arr_4 [i_1] [(unsigned char)0])) : (((/* implicit */int) arr_1 [i_0]))))) != (((unsigned long long int) var_2)))))));
                    var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_6)), (arr_6 [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_2 + 2])))) ? (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (var_4))) + (((/* implicit */int) arr_6 [i_2] [i_1] [12ULL] [i_0])))) : (max(((~(((/* implicit */int) var_13)))), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)60)), ((unsigned char)75))))))));
                }
            } 
        } 
    } 
}
