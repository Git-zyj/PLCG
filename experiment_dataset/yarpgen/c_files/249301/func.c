/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249301
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
    var_11 = ((/* implicit */unsigned int) var_0);
    var_12 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned char)167))))));
    var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((-1LL) - (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? ((-(var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) (short)1023))))))) - (min((((var_3) ^ (var_4))), (((/* implicit */unsigned long long int) var_2))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 6; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((max((((/* implicit */int) (unsigned short)24476)), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_1 - 3] [i_1 + 2] [i_0])))))) >> ((((~(max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_1 + 4])), (6568254021621433052ULL))))) - (11878490052088118548ULL)))));
                var_14 = ((/* implicit */short) (unsigned short)24476);
                var_15 = ((/* implicit */unsigned long long int) (~((~(((((/* implicit */int) arr_5 [i_0] [i_0] [i_1 + 3])) ^ (((/* implicit */int) arr_0 [i_1 + 1]))))))));
            }
        } 
    } 
}
