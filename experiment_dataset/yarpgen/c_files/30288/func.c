/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30288
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
    var_15 = ((/* implicit */short) var_5);
    var_16 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-20490)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (short)13952)))) >> (((((/* implicit */int) arr_4 [i_1])) * (((/* implicit */int) (short)-512))))))) == (((unsigned long long int) arr_2 [10ULL] [i_1] [10ULL]))));
                arr_6 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((-(arr_0 [i_0 - 1] [i_1]))) : ((~(((/* implicit */int) arr_1 [i_0] [i_1]))))))) > ((((_Bool)0) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252)))))));
            }
        } 
    } 
}
