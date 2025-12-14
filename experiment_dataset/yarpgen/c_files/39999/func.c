/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39999
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
    var_10 &= ((/* implicit */int) ((((/* implicit */int) max((max(((unsigned short)33776), (var_0))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (signed char)-96)))))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (unsigned short)9232))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)9237)) >= (((/* implicit */int) (short)-7704))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) (signed char)-81)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 &= ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) arr_3 [6ULL])) ? (var_2) : (((/* implicit */long long int) arr_2 [i_1] [i_0 + 1]))))));
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)95)))))));
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) (unsigned short)2563)) : (((/* implicit */int) arr_0 [i_0 + 1])))))) : (((/* implicit */int) (((~(arr_1 [i_1] [i_0]))) >= (((/* implicit */unsigned int) var_1)))))));
                var_14 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) ((var_1) - (((/* implicit */int) arr_3 [i_1]))))), (((((/* implicit */unsigned long long int) arr_2 [17ULL] [(unsigned short)7])) ^ (11284536465253384433ULL)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (~(max((var_3), (var_3)))));
}
