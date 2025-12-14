/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4769
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18338)) ? (100415363U) : (((/* implicit */unsigned int) -1833002557))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)75))))) : (((/* implicit */int) (unsigned char)255))));
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)45)) >> (((-1833002557) + (1833002580)))))) ? (((((/* implicit */_Bool) 4198061117U)) ? (((/* implicit */int) (short)9505)) : (((/* implicit */int) (short)-13664)))) : (((((/* implicit */_Bool) 2932456770221029331LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_13 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)36)) >= (((/* implicit */int) (signed char)74))));
            var_14 = ((/* implicit */short) (unsigned short)0);
        }
        arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 7359978479692760056LL)) + (541341454093384244ULL)));
    }
    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)98))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43985))) : (var_4))) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)98)))));
    var_16 = ((/* implicit */_Bool) var_6);
}
