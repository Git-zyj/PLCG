/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229368
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) var_8)), (((int) arr_1 [i_1 - 1] [i_1 - 1]))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-76))) < (((long long int) var_10))))), (((((int) var_0)) * (((((/* implicit */int) arr_1 [(signed char)14] [i_1 - 1])) << (((((/* implicit */int) var_7)) - (159)))))))));
                arr_6 [i_1 - 1] = ((/* implicit */unsigned char) arr_0 [4LL]);
            }
        } 
    } 
    var_21 |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (579050396)))))) ? (((/* implicit */int) max((((((/* implicit */_Bool) 4503191320822709134LL)) && (((/* implicit */_Bool) (unsigned char)227)))), ((!(var_19)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)75)))))));
}
