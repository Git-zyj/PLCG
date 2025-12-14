/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224586
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) var_12);
                arr_6 [i_1] [i_1] &= ((/* implicit */long long int) ((unsigned int) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) (unsigned short)12))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-124))))) ? (((unsigned long long int) arr_0 [i_0])) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)4)))))))) ? (arr_2 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0 - 1])))));
            }
        } 
    } 
    var_21 |= ((/* implicit */signed char) var_5);
    var_22 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) var_8)) : (((unsigned long long int) (unsigned short)65532)))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4))) : (var_6))) > (((((/* implicit */_Bool) -1732956424)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
    var_23 *= ((unsigned int) (-(var_8)));
}
