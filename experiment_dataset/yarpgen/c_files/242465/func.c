/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242465
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */unsigned int) max(((signed char)-1), ((signed char)-20)))), (((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) * (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)24))) : (var_7)))));
    var_15 = ((/* implicit */short) (!(((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -2286762112283079050LL)))) >= (((long long int) var_4))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) 1U))));
                var_17 = ((/* implicit */unsigned int) (((((+(arr_1 [(unsigned short)7]))) > (((/* implicit */unsigned long long int) -2286762112283079055LL)))) ? (-9223372036854775786LL) : (((/* implicit */long long int) max((((/* implicit */int) (signed char)-32)), ((+(((/* implicit */int) (unsigned short)65535)))))))));
            }
        } 
    } 
}
