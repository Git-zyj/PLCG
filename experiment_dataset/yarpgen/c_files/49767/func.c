/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49767
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
    var_10 = ((/* implicit */unsigned short) (~(-188974366)));
    var_11 = ((/* implicit */unsigned char) ((((unsigned long long int) var_8)) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((var_2), (((/* implicit */short) var_0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? ((+(((((/* implicit */_Bool) 4323633808164307712ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_13 = ((((/* implicit */int) arr_1 [i_1])) / (((/* implicit */int) max((arr_3 [i_1]), (((/* implicit */unsigned short) (signed char)127))))));
                arr_4 [i_0] = ((/* implicit */_Bool) var_1);
            }
        } 
    } 
}
