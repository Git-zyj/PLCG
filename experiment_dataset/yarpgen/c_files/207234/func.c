/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207234
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
    var_19 = ((/* implicit */unsigned short) (~(var_11)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((~(arr_2 [(signed char)3] [i_0] [(_Bool)1]))) >= (((arr_2 [8ULL] [i_1] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19802)))))));
                arr_6 [18U] [0LL] = ((/* implicit */unsigned short) min(((-(arr_0 [i_0 - 1]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (var_2))))));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max(((signed char)8), (((/* implicit */signed char) var_10))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [(signed char)10] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (arr_3 [i_0])))) : (((/* implicit */int) var_12))))) : (max((1073741824U), (((/* implicit */unsigned int) arr_1 [i_0 + 1]))))));
                arr_7 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) -1544548547))))), ((-(arr_0 [(unsigned short)4])))));
            }
        } 
    } 
}
