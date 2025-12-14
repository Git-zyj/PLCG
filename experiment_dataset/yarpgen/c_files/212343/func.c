/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212343
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
    var_20 = ((/* implicit */int) ((3277008756U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) min(((unsigned short)106), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)2047)) <= (((/* implicit */int) (short)28578)))))));
                var_21 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (arr_3 [(unsigned char)4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1283272889U)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) : (min((((/* implicit */long long int) (_Bool)1)), (var_2))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned short) var_11)), (var_16)));
    var_23 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) min(((signed char)127), ((signed char)-125))))));
}
