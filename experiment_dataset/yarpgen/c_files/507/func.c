/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/507
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) min((((unsigned long long int) ((_Bool) var_6))), (((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) (unsigned short)0)), (arr_0 [i_0]))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (signed char)-107))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)107)), (44325699609839820LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (min((3330379101U), (var_4)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (-1766539864)))) ? ((~(2923542399220903299ULL))) : (((/* implicit */unsigned long long int) 3087570786U)))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_5)) : ((-9223372036854775807LL - 1LL)))))))));
}
