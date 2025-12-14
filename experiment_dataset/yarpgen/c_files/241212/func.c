/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241212
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_1 + 1]))))) ? (((/* implicit */int) var_4)) : ((~((+(((/* implicit */int) (_Bool)1))))))));
                var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_3 [i_0] [(signed char)1]))) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1]))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) var_0);
    var_13 = ((max((((/* implicit */unsigned long long int) (+(var_7)))), (((((/* implicit */unsigned long long int) 1479104191U)) + (var_5))))) * (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (1524482546U)))));
}
