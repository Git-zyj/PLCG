/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227125
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-122))));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) (signed char)121))))) : (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) max(((short)32767), (var_5)))))))))));
                var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) == (-2964877582924962353LL)))) << (((((((/* implicit */_Bool) (unsigned short)23108)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) - (16408394548955787307ULL)))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))) % (arr_4 [i_0]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(var_16)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (-556789356318326354LL) : (((/* implicit */long long int) var_2))))))))) : (var_2))))));
    var_22 = min((((/* implicit */unsigned long long int) 2964877582924962352LL)), (15678589204867299269ULL));
}
