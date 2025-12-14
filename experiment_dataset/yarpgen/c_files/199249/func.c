/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199249
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */short) 4649238023096450073ULL);
                arr_6 [i_1] [(short)10] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72))) < (4U))) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0]))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16384)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))))))));
}
