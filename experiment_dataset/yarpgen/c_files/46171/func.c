/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46171
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
    var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (458752U))) | (var_9))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_10 [14U] [14ULL] [i_1] [14U] &= ((/* implicit */unsigned int) (+(((min((var_7), (((/* implicit */unsigned long long int) arr_2 [5U])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */long long int) -991073433)) / (var_4))), (((/* implicit */long long int) (-(((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) 2663165582U)) && (((/* implicit */_Bool) max(((+(1780489143))), (((/* implicit */int) var_2)))))));
    var_12 = ((/* implicit */unsigned short) var_9);
}
