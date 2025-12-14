/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248786
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) (+(-71372511)));
                var_12 = ((unsigned short) -7971187319606722169LL);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) ((var_5) / (((/* implicit */int) arr_2 [i_1 + 1] [i_0])))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) ((signed char) (((-(6994856599625295754LL))) / (((/* implicit */long long int) ((/* implicit */int) min(((signed char)(-127 - 1)), ((signed char)-117))))))));
    var_14 += ((/* implicit */unsigned short) min(((-(((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) (signed char)13)))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 5591975746905376751LL)) ? (1207958909) : (((/* implicit */int) (unsigned short)40237))))))));
    var_15 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_10)))))) : (((/* implicit */int) (signed char)-83)));
}
