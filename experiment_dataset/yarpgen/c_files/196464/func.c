/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196464
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
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1 + 1] = ((/* implicit */short) ((((((/* implicit */int) ((short) (unsigned char)135))) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0])))))) >= (((((/* implicit */int) ((unsigned char) (_Bool)1))) + (((/* implicit */int) arr_4 [i_0]))))));
                    var_14 = ((/* implicit */short) min((((/* implicit */int) ((short) (signed char)(-127 - 1)))), (((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (short)12382)))) + (((/* implicit */int) arr_2 [i_2 + 3]))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) var_7);
}
