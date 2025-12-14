/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19582
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
    var_18 = ((/* implicit */signed char) var_15);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 *= ((((/* implicit */_Bool) ((unsigned int) ((signed char) var_13)))) ? (((unsigned int) ((((/* implicit */_Bool) 3557155598U)) ? (((/* implicit */long long int) var_6)) : (arr_1 [i_1])))) : (((((/* implicit */_Bool) max(((unsigned short)19720), (((/* implicit */unsigned short) var_3))))) ? (arr_0 [i_1] [i_1]) : (((((/* implicit */_Bool) (unsigned short)18051)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (3557155591U))))));
                var_20 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_6)), (var_8))))))));
            }
        } 
    } 
}
