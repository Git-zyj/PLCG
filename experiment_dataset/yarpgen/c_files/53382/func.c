/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53382
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
    var_19 = ((/* implicit */unsigned short) (short)-3118);
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10905425843440036490ULL)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) var_3))))) ? (max((((/* implicit */unsigned long long int) var_6)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 10905425843440036490ULL))))))) ? (min(((-(-268970356870453165LL))), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) (~((+(((/* implicit */int) var_9))))))))))));
    var_21 *= ((/* implicit */unsigned char) var_16);
    var_22 = ((/* implicit */long long int) ((((((10905425843440036490ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)50))))) ? (var_7) : (((/* implicit */int) var_18)))) / ((+(((var_2) ? (var_7) : (((/* implicit */int) (unsigned short)61252))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [(_Bool)0])) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0])))))));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (4044162764048767801LL) : (4975084396161689630LL)));
            }
        } 
    } 
}
