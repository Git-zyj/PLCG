/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196493
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_4))) == (min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-17))) : (16777215LL))), (((/* implicit */long long int) max((var_15), (var_15))))))));
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_4 [(_Bool)1]) << (((((/* implicit */int) arr_3 [i_0] [i_0])) - (63596)))))) ? ((~(((/* implicit */int) arr_2 [i_0] [i_0])))) : (((((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_2 [i_0] [i_0])))) - (((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
                var_18 = ((/* implicit */signed char) (~((~(min((3764495283U), (((/* implicit */unsigned int) var_0))))))));
                var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_1 [i_0] [(short)4]), (((/* implicit */unsigned char) var_2))))), (((((/* implicit */_Bool) 942052291)) ? (12159559363348774780ULL) : (6287184710360776828ULL)))));
                var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)38)) >= (((/* implicit */int) arr_3 [i_0] [i_0]))));
            }
        } 
    } 
}
