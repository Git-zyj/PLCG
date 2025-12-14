/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232036
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
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))))), ((signed char)-25)))), ((+((-(var_4)))))));
    var_14 = ((/* implicit */_Bool) min((var_14), ((!(((/* implicit */_Bool) 6203404211350994112LL))))));
    var_15 *= ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                var_16 += arr_5 [i_0] [(signed char)6] [i_1];
                var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_1]))))), (min((arr_6 [i_1] [21ULL] [(short)0]), (((/* implicit */short) (signed char)-25)))))))));
            }
        } 
    } 
}
