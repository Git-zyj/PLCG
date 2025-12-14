/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205863
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        arr_3 [(unsigned short)14] &= ((/* implicit */long long int) (-(max(((~(((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2])))), (((((((/* implicit */int) var_15)) + (2147483647))) << (((var_5) - (3699709143202215630LL)))))))));
        var_19 += ((/* implicit */unsigned int) (!(var_10)));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_20 = ((/* implicit */signed char) var_14);
        var_21 &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((arr_1 [i_1]), (((/* implicit */long long int) var_9))))), ((+(6785913069419328193ULL)))));
    }
    var_22 = ((/* implicit */unsigned int) min((max((6271087418245435260ULL), (((/* implicit */unsigned long long int) 2003954476)))), (((/* implicit */unsigned long long int) var_15))));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) 13722172594365876840ULL))) ? (((((/* implicit */_Bool) var_16)) ? (min((((/* implicit */long long int) var_3)), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) (+((-(((/* implicit */int) var_9)))))))));
    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
}
