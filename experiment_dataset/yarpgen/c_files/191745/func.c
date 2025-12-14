/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191745
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2972067770115758913ULL)) && ((_Bool)0)));
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_1)), (var_4)));
    var_19 = var_7;
    var_20 |= ((/* implicit */unsigned char) ((min((var_10), (((/* implicit */long long int) var_3)))) * (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_14)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)151))));
                }
            } 
        } 
    } 
}
