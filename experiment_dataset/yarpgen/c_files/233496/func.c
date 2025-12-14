/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233496
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (!(var_3))))))), (((((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1768567459586692577LL))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (var_8))))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_0]))))))));
                var_12 = ((/* implicit */short) (!(((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))));
                var_13 = ((/* implicit */signed char) arr_3 [i_1]);
            }
        } 
    } 
    var_14 |= max((((/* implicit */unsigned long long int) (_Bool)1)), (7131065591881047041ULL));
    var_15 = ((/* implicit */unsigned int) (_Bool)1);
}
