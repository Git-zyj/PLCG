/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43239
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
    var_16 = ((/* implicit */long long int) var_12);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        var_17 *= ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) 1964436985117536213ULL))))), ((-(((/* implicit */int) var_11))))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */unsigned long long int) max((((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))) : (601363714U))), (((/* implicit */unsigned int) ((signed char) var_9)))))) : (var_10)));
        arr_2 [i_0] = ((/* implicit */_Bool) (~(arr_1 [i_0])));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+((~(arr_1 [(_Bool)1]))))))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_20 = ((/* implicit */signed char) min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_10)) ? (var_9) : ((~(((/* implicit */int) var_11))))))));
        var_21 = ((/* implicit */long long int) arr_3 [i_1] [(signed char)16]);
    }
    var_22 = ((/* implicit */_Bool) ((-78065431834432379LL) + (max((((/* implicit */long long int) ((unsigned int) var_0))), (max((((/* implicit */long long int) var_7)), (var_5)))))));
}
