/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2202
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
    var_19 = ((/* implicit */signed char) max((((/* implicit */int) var_4)), ((+(((/* implicit */int) var_6))))));
    var_20 = min((var_7), (((/* implicit */unsigned int) var_11)));
    var_21 = ((/* implicit */signed char) var_7);
    var_22 = ((/* implicit */signed char) ((unsigned short) var_8));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) ((long long int) min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0]))));
                var_24 ^= ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_1]);
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((-2097152), (2097151)))) || (((/* implicit */_Bool) var_7))));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) < (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))) - (max((max((((/* implicit */unsigned long long int) arr_0 [i_1] [i_0])), (arr_2 [i_1]))), (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_1])))))));
                var_27 = ((/* implicit */int) max((var_27), (((int) ((unsigned long long int) (unsigned short)10979)))));
            }
        } 
    } 
}
