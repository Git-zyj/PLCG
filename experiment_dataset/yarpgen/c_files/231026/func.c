/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231026
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
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((min((var_9), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) -1955710226)))))));
    var_19 ^= ((/* implicit */signed char) ((_Bool) min((((/* implicit */long long int) ((-1955710243) & (1955710225)))), (min((((/* implicit */long long int) (short)-26393)), (var_11))))));
    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1955710225)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)26))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) & ((-(var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)218))) : (((unsigned int) 1955710242))));
                var_22 = ((/* implicit */short) ((1955710242) << (((((min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_15)))), ((-(((/* implicit */int) var_14)))))) + (174))) - (4)))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(min((arr_5 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_5))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (((!(((/* implicit */_Bool) 8339558270743278431LL)))) ? (((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) var_15)), (var_7)))))) : (((max((((/* implicit */unsigned long long int) 8339558270743278431LL)), (var_17))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))))))))));
}
