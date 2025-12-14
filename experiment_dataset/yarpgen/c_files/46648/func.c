/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46648
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 5214934259384937330ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (((-(3711552852U))) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))))))) : (((((/* implicit */_Bool) var_11)) ? (583414442U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((min((arr_2 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_0 - 2] [i_0])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((signed char) 3840009793U))), ((short)30592)))))));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) 0ULL))));
                    var_19 = ((unsigned char) 1863396863);
                    var_20 = ((/* implicit */short) ((((max((17093538334024282228ULL), (((/* implicit */unsigned long long int) 2418402506330204224LL)))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)182))))))) ? (((/* implicit */int) arr_1 [i_2] [i_0])) : (((/* implicit */int) (unsigned char)120))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1863396882)) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0] [i_0 - 2])) : (((/* implicit */int) arr_4 [i_0 - 3] [i_0] [i_0 + 1])))) & (((/* implicit */int) ((signed char) ((17093538334024282228ULL) == (6402900207356622152ULL)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) 1863396863))));
    var_22 = ((/* implicit */_Bool) 454957480U);
}
