/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23517
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
    var_20 &= ((/* implicit */unsigned char) (signed char)23);
    var_21 *= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_6 [i_0 + 2] [7LL] [7LL]))));
                var_23 = ((/* implicit */unsigned char) var_0);
                arr_7 [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13ULL)) ? ((+(var_15))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_18)), ((short)-11903)))))))), (((((((/* implicit */_Bool) arr_6 [i_1] [i_0] [i_0 - 2])) || (((/* implicit */_Bool) (unsigned short)1487)))) ? (((/* implicit */unsigned long long int) var_10)) : ((+(var_16))))));
                arr_8 [i_0] = ((/* implicit */unsigned short) ((unsigned char) min((0), (((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) (unsigned short)11781)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) var_18);
    var_25 ^= ((/* implicit */long long int) ((unsigned long long int) (+(((/* implicit */int) var_4)))));
}
