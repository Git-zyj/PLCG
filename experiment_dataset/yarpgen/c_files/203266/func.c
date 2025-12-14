/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203266
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
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) max(((-(4294967295U))), (0U))))));
    var_14 = ((/* implicit */signed char) max((var_1), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)124))))), ((-(7U)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [2U] [i_2] = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned int) (unsigned short)32767)), (((unsigned int) (unsigned char)108)))));
                    var_15 = ((/* implicit */unsigned char) ((unsigned short) (+(((4294967278U) + (((/* implicit */unsigned int) -2)))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) (unsigned short)65514)) : (1144767893)))) || (((/* implicit */_Bool) 0U))));
                    var_17 &= max((((/* implicit */unsigned short) ((unsigned char) (+(4294967295U))))), (((unsigned short) (signed char)-109)));
                }
            } 
        } 
    } 
}
