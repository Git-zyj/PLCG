/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238428
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
    var_19 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_13))))));
    var_20 *= ((/* implicit */unsigned short) -1LL);
    var_21 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5)))) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) & (0LL)))));
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (-1LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(4227705512U)))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_1 [i_0])), (((((/* implicit */_Bool) 6U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((long long int) arr_4 [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
}
