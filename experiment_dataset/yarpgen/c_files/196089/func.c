/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196089
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
    var_17 = ((/* implicit */_Bool) -10LL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((long long int) arr_2 [i_0]))));
                var_18 = ((/* implicit */long long int) ((signed char) max((arr_0 [i_1]), (arr_0 [i_1]))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_6 [i_1])), (-8700263716378962757LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2453153828753818851ULL)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) arr_1 [20U])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((+(4273651574U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))))))) : (min(((+(arr_0 [i_1]))), (((/* implicit */unsigned int) ((unsigned short) (signed char)-124)))))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) 3142243310U)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) 9223372036854775786LL);
}
