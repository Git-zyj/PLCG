/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217230
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
    var_17 = ((/* implicit */signed char) ((((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_7)))) < (((/* implicit */int) var_4)))) ? (min((((((/* implicit */_Bool) 3440746603915693348LL)) ? (281474976706560ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167))))), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_6), (var_1)))) ? (var_16) : (((((/* implicit */_Bool) var_4)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))))));
    var_18 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0])) == (((/* implicit */int) min((var_15), (((/* implicit */short) var_5)))))));
                var_19 = ((/* implicit */int) (~(arr_1 [i_0])));
            }
        } 
    } 
    var_20 = ((/* implicit */short) min((var_20), (var_15)));
}
