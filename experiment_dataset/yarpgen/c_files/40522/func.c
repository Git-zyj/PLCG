/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40522
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
    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) (~(var_4)))))));
    var_20 = ((/* implicit */long long int) ((short) ((int) (~(4294967269U)))));
    var_21 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) ((int) var_2))))));
    var_22 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) ((unsigned short) var_15))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((unsigned int) ((unsigned long long int) ((unsigned int) (signed char)-22)))))));
                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_2 [17])))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((signed char) arr_4 [i_0] [i_0])))))));
            }
        } 
    } 
}
