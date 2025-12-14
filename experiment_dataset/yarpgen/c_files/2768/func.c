/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2768
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
    var_13 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)65535)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (((((((/* implicit */_Bool) var_2)) ? (2305561534236983296ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0 + 4] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)65530)) : (arr_1 [1LL]))))) ? (((unsigned long long int) arr_5 [i_0 - 2] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1])))))))))));
                var_14 = ((/* implicit */signed char) max((((/* implicit */int) arr_2 [i_1] [(_Bool)1])), (((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) (unsigned char)255)))))));
                var_15 -= ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) (-(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
