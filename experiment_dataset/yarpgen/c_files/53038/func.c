/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53038
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
    var_18 |= ((/* implicit */unsigned short) min((((/* implicit */long long int) (signed char)109)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)108))) : (-4606939927287120412LL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) 2189438220U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-110))))))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((long long int) (signed char)-109));
                var_20 = ((/* implicit */short) max((min((((/* implicit */long long int) ((unsigned char) var_0))), (((long long int) (signed char)103)))), (max((((/* implicit */long long int) arr_2 [i_1])), (var_6)))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (var_12)))) ? (((/* implicit */int) ((signed char) (signed char)-116))) : (((/* implicit */int) var_9)))))));
}
