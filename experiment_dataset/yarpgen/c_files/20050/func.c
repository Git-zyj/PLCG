/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20050
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
    var_14 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (4294967295U))) != (var_9)))) + (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_15 *= ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_4 [i_0] [i_0 - 1])))), (((/* implicit */int) arr_0 [i_0]))));
                var_16 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)78)), (1245223797U)));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_3 [i_0 - 1] [i_1])) - (((/* implicit */int) var_7))))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-22), ((signed char)-18))))))))));
            }
        } 
    } 
    var_18 *= ((/* implicit */unsigned char) max(((signed char)-124), ((signed char)85)));
}
