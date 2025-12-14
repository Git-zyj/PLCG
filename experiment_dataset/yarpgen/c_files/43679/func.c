/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43679
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
    var_11 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (var_10)))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))) + (0ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 0)) - (67108863LL)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)35516)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)10849)) : (((/* implicit */int) var_3)))))))));
    var_12 = ((/* implicit */short) max((((/* implicit */long long int) (+((-(953303675)))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)43))) / (9214364837600034816LL)))));
    var_13 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_7 [i_1] [i_1 + 3] [8LL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)255))));
                arr_8 [i_0] = ((/* implicit */int) min((((unsigned short) (~(var_7)))), (((/* implicit */unsigned short) (signed char)43))));
            }
        } 
    } 
}
