/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5255
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
    for (long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_17 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 8451017192489088935LL)) ? (var_1) : (arr_1 [i_1] [i_1])))) ? (((((/* implicit */_Bool) var_16)) ? (arr_2 [i_0] [i_0] [i_1]) : (arr_1 [10LL] [i_1]))) : (var_15))), (((/* implicit */long long int) ((max((var_15), (var_15))) < (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (var_6) : (8451017192489088935LL)))))));
                var_18 = ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_12)) ? (3855066384814807149LL) : (8998098581274747020LL))) : (min((arr_1 [i_0] [i_0]), (-8451017192489088949LL))))) : (((/* implicit */long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) var_4)))), (((var_13) < (3872449479978481279LL))))))));
                arr_4 [i_1] = 8855191199655604770LL;
            }
        } 
    } 
    var_19 = (~(max((((((/* implicit */_Bool) 566059805829389296LL)) ? (var_2) : (var_13))), (var_13))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_12), (var_8)))) ? (var_9) : (var_10)))) || (((/* implicit */_Bool) var_1))));
}
