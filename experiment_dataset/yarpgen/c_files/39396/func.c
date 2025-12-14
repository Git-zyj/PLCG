/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39396
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
    var_14 = ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))))) || (((/* implicit */_Bool) var_1)));
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) >> (((((((/* implicit */int) var_2)) | (((/* implicit */int) (signed char)-15)))) + (65))))) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned short)37228), (((/* implicit */unsigned short) var_6)))))))))))));
    var_16 = var_12;
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_8 [i_1] [i_1 - 1] = ((/* implicit */_Bool) var_12);
                var_17 = (unsigned short)55562;
            }
        } 
    } 
    var_18 = max((((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_7))))) & (((((/* implicit */_Bool) (signed char)-75)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12400))))))), (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_4)))) | (((/* implicit */int) max(((unsigned short)53133), ((unsigned short)0))))))));
}
