/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30142
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
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((long long int) ((_Bool) (signed char)19)))), (min((((/* implicit */unsigned long long int) max((2147483634), (((/* implicit */int) var_2))))), (var_13)))));
    var_16 = ((/* implicit */unsigned char) var_0);
    var_17 = ((/* implicit */unsigned char) min((((((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) (signed char)-98))))) < (((/* implicit */int) (signed char)97)))), (((((/* implicit */_Bool) (unsigned char)21)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) (signed char)98)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_1 [i_0]))))))) & ((~((~(arr_2 [i_0] [i_1])))))));
                var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)161))));
            }
        } 
    } 
}
