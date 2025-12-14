/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19583
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
    var_14 = ((min((((((/* implicit */_Bool) (unsigned short)16128)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)185))) : (1739937901506832466LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_11))))))) ^ (((((var_2) + (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (max((((/* implicit */long long int) var_6)), (var_2))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [i_1] = ((/* implicit */signed char) (((((+(((/* implicit */int) var_3)))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) ? (((/* implicit */long long int) (-((~(((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) ((signed char) var_10))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_11))))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_2)))))));
                    arr_7 [i_2] = ((/* implicit */signed char) ((var_0) ? (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_13)))) || ((!(((/* implicit */_Bool) var_6)))))))) : (((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (((long long int) var_3))))));
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) min(((!(((((/* implicit */int) var_6)) == (((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) var_9)) || (var_10))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) min(((~(var_13))), (var_13)));
}
