/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51484
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
    var_15 = ((/* implicit */unsigned char) ((_Bool) max(((-(((/* implicit */int) var_8)))), (((/* implicit */int) ((signed char) (signed char)-60))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) max(((signed char)-60), (((/* implicit */signed char) arr_2 [i_0]))))))), (((((/* implicit */int) (unsigned short)44281)) > (((/* implicit */int) (_Bool)0))))));
                var_17 += ((/* implicit */unsigned short) (((_Bool)1) ? (max((min((((/* implicit */long long int) var_13)), (arr_1 [i_0] [i_1 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)59)) && (((/* implicit */_Bool) (signed char)59))))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)16)) && (((/* implicit */_Bool) (short)26313))))))))));
            }
        } 
    } 
}
