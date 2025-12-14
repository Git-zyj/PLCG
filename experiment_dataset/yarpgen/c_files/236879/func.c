/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236879
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) var_17))))))));
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_14))));
    var_21 -= ((/* implicit */unsigned short) ((((((/* implicit */long long int) var_2)) > (max((4473522747268265610LL), (((/* implicit */long long int) 4294967295U)))))) ? (var_6) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)143)))), (((/* implicit */int) var_5)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)109))));
                    var_22 = ((/* implicit */signed char) var_9);
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)192)))) : (max((((((/* implicit */int) var_11)) / (((/* implicit */int) arr_0 [i_2] [i_0])))), (((/* implicit */int) var_7)))))))));
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0] [i_0 - 2])) > (((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_1 - 2])))) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 2] [i_1 - 1])) : (((((/* implicit */int) var_12)) + (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))))))));
                }
            } 
        } 
    } 
}
