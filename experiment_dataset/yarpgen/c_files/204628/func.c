/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204628
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
    var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13758)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)99))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)13769), (((/* implicit */short) var_13)))))) : (((9873485897736147284ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), (var_6))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((((((/* implicit */int) (signed char)-73)) | (((/* implicit */int) arr_3 [i_0])))) < (((/* implicit */int) max((arr_3 [i_0]), (var_13)))))) ? ((+(((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) (signed char)-25)))))) : (((((/* implicit */_Bool) 4294967288U)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [8ULL])))) : (((/* implicit */int) min(((short)13771), (((/* implicit */short) arr_0 [i_0])))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) var_14);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-52)))))) : (min((((/* implicit */int) max(((signed char)-35), ((signed char)-35)))), (((((((/* implicit */int) (signed char)-2)) + (2147483647))) << (((/* implicit */int) var_15))))))));
    var_22 = ((/* implicit */signed char) min((var_22), (var_13)));
    var_23 = var_17;
}
