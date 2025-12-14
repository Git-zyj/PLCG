/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41552
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
    var_12 = max((((/* implicit */int) ((signed char) max((var_10), (((/* implicit */unsigned long long int) var_5)))))), (max((((/* implicit */int) max((((/* implicit */short) (signed char)-67)), ((short)(-32767 - 1))))), ((-(((/* implicit */int) var_0)))))));
    var_13 = ((/* implicit */unsigned long long int) ((((max((var_10), (((/* implicit */unsigned long long int) var_0)))) ^ (((4525758835481596219ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-67))))))) <= (max((((/* implicit */unsigned long long int) ((unsigned int) var_6))), (max((var_10), (((/* implicit */unsigned long long int) var_7))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_14 = (-(-1671773475));
                var_15 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_0 + 2] [i_0 + 2] [6U])))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) >= (var_3)));
            }
        } 
    } 
}
