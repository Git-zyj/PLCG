/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3908
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) arr_3 [i_0] [i_1])))))) ? (max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 18446744073709551615ULL))))));
                var_17 *= ((/* implicit */unsigned long long int) arr_4 [i_1] [i_0]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((_Bool) ((var_10) / (((/* implicit */int) var_1))))) ? ((~(3560376027U))) : (((((/* implicit */_Bool) max((734591294U), (3560376022U)))) ? (((((/* implicit */_Bool) (unsigned short)52650)) ? (((/* implicit */unsigned int) 383300142)) : (734591268U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)27309)) ^ (((/* implicit */int) (unsigned char)113)))))))));
}
