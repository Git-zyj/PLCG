/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217663
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
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5264010928957464341LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))) : (arr_3 [i_0] [i_0])))) ? ((+(2388297846U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((/* implicit */long long int) (~(883835501U)))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (-9223372036854775799LL) : (((/* implicit */long long int) arr_3 [i_0] [i_1]))))));
                var_20 = ((/* implicit */signed char) (-(-5077800049883742973LL)));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_11);
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) 5077800049883742988LL)) ? (1366641590U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29))))))));
}
