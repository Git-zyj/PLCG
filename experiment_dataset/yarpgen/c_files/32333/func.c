/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32333
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
    var_19 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (arr_1 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1]))))), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [(unsigned char)1])))))));
                var_21 |= ((/* implicit */int) max((((/* implicit */unsigned int) min(((short)-1), (((/* implicit */short) (signed char)-94))))), (max((arr_3 [i_1] [(_Bool)0] [i_1 - 1]), (arr_3 [i_1 - 1] [(unsigned char)10] [i_1 - 1])))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_0]))))), (((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_13), (arr_2 [i_0] [i_0] [i_1])))) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_1 - 1])) : (((/* implicit */int) arr_0 [i_0])))))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_1 - 1]);
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)124)) ? (3918198061U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))))))));
            }
        } 
    } 
}
