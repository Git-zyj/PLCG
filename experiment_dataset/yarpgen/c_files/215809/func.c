/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215809
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_10)));
    var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-7577)), (-67108864)))) == (min((1729382256910270464ULL), (((/* implicit */unsigned long long int) 4294967295U)))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [0LL] [(short)1] = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) 2235739768719818136ULL)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))), ((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))))), (((/* implicit */int) (!(var_14))))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (((((/* implicit */_Bool) (~(1729382256910270464ULL)))) ? (2235739768719818136ULL) : (((/* implicit */unsigned long long int) max((arr_4 [i_0]), (((/* implicit */int) var_14)))))))));
                    arr_8 [i_2] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))) > ((-9223372036854775807LL - 1LL))));
                    arr_9 [i_0] [i_1] [i_2 - 1] = ((/* implicit */short) arr_4 [i_0]);
                }
            } 
        } 
    } 
}
