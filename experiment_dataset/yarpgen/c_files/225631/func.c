/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225631
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                {
                    var_18 = ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (short)30489)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) var_17)))))) : (max((((/* implicit */unsigned long long int) arr_4 [i_0 + 1])), (arr_2 [i_0]))));
                    arr_9 [i_0] [16ULL] = ((/* implicit */long long int) var_12);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_2))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) (signed char)-4))))) : (var_7)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) (unsigned char)0)))) > (((/* implicit */int) (unsigned char)35))))) : (((int) (+(3521725992306917186LL))))));
}
