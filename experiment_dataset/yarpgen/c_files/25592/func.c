/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25592
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) -5465624148955006008LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_1)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 += ((/* implicit */unsigned char) (unsigned short)65522);
                var_19 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) (unsigned short)38857)) << (((((/* implicit */int) var_3)) - (139))))));
                var_20 += ((/* implicit */short) (~(((((/* implicit */_Bool) (+(arr_2 [0] [i_1])))) ? (arr_0 [2LL] [i_1 + 1]) : (((/* implicit */int) min(((unsigned char)0), (var_2))))))));
                var_21 += ((/* implicit */unsigned int) (unsigned char)0);
                var_22 = ((/* implicit */_Bool) (+(min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (var_7))), (((/* implicit */long long int) 2676822910U))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_3);
    var_24 = ((/* implicit */long long int) var_15);
}
