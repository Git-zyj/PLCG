/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27154
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
    var_16 |= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_8)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
    var_17 = ((/* implicit */unsigned long long int) (unsigned char)188);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 2])))) ? (((((/* implicit */_Bool) var_10)) ? (arr_6 [i_1 - 1] [i_1 - 2] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) arr_4 [i_1 - 2])))))));
                var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 10ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 9223372036854775806LL))))) ? ((~(((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (arr_6 [i_1 - 2] [i_0] [i_0]))))))));
                var_20 = -2276572631162209111LL;
            }
        } 
    } 
}
