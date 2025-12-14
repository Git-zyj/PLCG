/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44884
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
    var_12 = ((/* implicit */unsigned long long int) min(((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((-(5859494678928002762LL))))), (max((5859494678928002762LL), (((/* implicit */long long int) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) var_2)) - (23146))))))))));
    var_13 = ((/* implicit */long long int) max((((/* implicit */int) ((signed char) ((var_0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)(-127 - 1))))))), (max((((/* implicit */int) var_6)), (((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_8)) + (22302)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [(unsigned char)8] [i_0 + 1] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_10)) >> (((arr_1 [i_0 + 2]) - (4711535369179157165LL))))));
                var_14 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)60856)) ? (((/* implicit */int) (short)-27094)) : (((/* implicit */int) arr_3 [(signed char)9]))))))));
                var_15 = ((/* implicit */long long int) arr_3 [i_1]);
            }
        } 
    } 
}
