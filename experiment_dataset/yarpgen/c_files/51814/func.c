/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51814
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])), (max((((/* implicit */int) (signed char)94)), (var_10))))), ((+(((/* implicit */int) arr_1 [i_0]))))));
                arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((var_3), (((/* implicit */long long int) (signed char)-74)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_0])))))))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (((unsigned long long int) (signed char)84)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((9399753399901195484ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (short)-13476)))))));
                var_12 = ((/* implicit */signed char) (((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)112)) > (((/* implicit */int) var_7))))))) == (((/* implicit */int) arr_3 [i_0] [i_0]))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (signed char)-91);
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (+((-(((((/* implicit */_Bool) -7571858282178235016LL)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (unsigned char)144)))))))))));
    var_15 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)35))));
}
