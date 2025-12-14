/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43730
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */int) arr_1 [i_0]);
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)6272))))) ? ((~(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_0])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_12);
    var_20 &= ((/* implicit */short) min((((/* implicit */int) min((var_4), (((((/* implicit */long long int) ((/* implicit */int) var_14))) >= (var_16)))))), (min((((((/* implicit */int) var_3)) | (var_0))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) var_0)) - (var_9))), (min((((/* implicit */unsigned long long int) var_11)), (var_9)))))) ? (var_7) : (max((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (signed char)-69))))), ((-(((/* implicit */int) (signed char)68))))))));
    var_22 = ((/* implicit */int) var_12);
}
