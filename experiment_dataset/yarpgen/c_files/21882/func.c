/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21882
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) arr_3 [i_0] [i_1 + 1]);
                arr_5 [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) -664980517)), (var_0)));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((((max((var_6), (((/* implicit */unsigned int) -664980517)))) ^ (((/* implicit */unsigned int) ((((-664980510) + (2147483647))) << (((var_0) - (4124333321U)))))))), (((/* implicit */unsigned int) var_3))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((short)750), (var_7)))), (((((/* implicit */_Bool) var_0)) ? (416797062U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) min((var_7), (((/* implicit */short) (signed char)-55))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (var_1)))))))));
}
