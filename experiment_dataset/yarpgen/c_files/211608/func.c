/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211608
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
    var_16 = ((/* implicit */unsigned char) (+(max((var_2), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)59)))))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+((-2147483647 - 1)))), (max((((/* implicit */int) (signed char)-60)), (var_9)))))) ? (min((max((var_7), (((/* implicit */int) (unsigned short)50176)))), (((/* implicit */int) ((unsigned char) var_3))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (signed char)66))))) && (((/* implicit */_Bool) var_2)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_18 = max((((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50176))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -4))))));
                arr_7 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (17809194240870975935ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_0])))) : (((-2506803061533353962LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)69))))))))));
            }
        } 
    } 
}
