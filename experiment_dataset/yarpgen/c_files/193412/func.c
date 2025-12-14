/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193412
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 164612135)) == (arr_6 [i_0])))), (min((((/* implicit */unsigned long long int) arr_5 [i_0])), (4066091957134355708ULL))))))))));
                var_11 = ((/* implicit */short) -6426516264424488838LL);
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_9))));
                var_13 = ((/* implicit */unsigned int) 7284097845334506760ULL);
            }
        } 
    } 
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((var_7) << (((var_6) - (735570747240257428LL))))) : (((((/* implicit */int) var_8)) ^ (var_7)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_3)));
}
