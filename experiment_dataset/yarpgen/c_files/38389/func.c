/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38389
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
    var_19 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_16))))))) * ((~(((-8162546858609191601LL) / (8162546858609191601LL))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) var_1);
                var_21 = ((((/* implicit */_Bool) 8162546858609191601LL)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [5LL])) * (((/* implicit */int) arr_6 [i_0] [i_1]))))) : (2154755121467770824LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-32469)) % (((/* implicit */int) (short)6099))))))))));
                var_22 = (~(min((((/* implicit */long long int) ((short) arr_4 [i_0] [i_0]))), (min((arr_1 [i_0] [i_1]), (((/* implicit */long long int) var_7)))))));
                arr_7 [i_1] = min((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-32758))))) >> (((9109850718861817393LL) - (9109850718861817366LL)))))), ((-(max((-391045222224671158LL), (var_10))))));
            }
        } 
    } 
}
