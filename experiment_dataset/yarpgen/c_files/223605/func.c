/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223605
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_14 *= ((/* implicit */unsigned char) min((max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32577))))), ((((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (-1572058747))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) <= (var_5))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-((((-(((/* implicit */int) (signed char)0)))) ^ (((((/* implicit */int) var_11)) >> (((((/* implicit */int) (signed char)-12)) + (38)))))))));
            }
        } 
    } 
    var_15 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) (unsigned short)54635)) * (((/* implicit */int) (signed char)-3)))))) ? (((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)169)) - (var_13)))) + (((var_3) + (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) -931840825)) ? (((/* implicit */int) (short)-12876)) : (((/* implicit */int) (unsigned char)5))))))));
}
