/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239120
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
    var_20 -= ((/* implicit */long long int) (unsigned short)43540);
    var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) (unsigned short)43546)) ? (((/* implicit */int) (unsigned short)43546)) : (((/* implicit */int) (signed char)108))))))) ? ((+((-(((/* implicit */int) (unsigned short)65535)))))) : (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                var_22 *= max((((max((2996395649487492098ULL), (((/* implicit */unsigned long long int) var_5)))) >> (((((((/* implicit */_Bool) (unsigned short)43562)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2]))) : (9223372036854775807LL))) + (74LL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [14U] [14U] [14U])) ? (((/* implicit */long long int) arr_0 [i_0 - 1] [(short)6])) : (9223372036854775807LL)))) ? (((/* implicit */int) arr_2 [(signed char)16] [(signed char)16] [i_1 - 3])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_23 ^= ((/* implicit */unsigned char) ((((-9223372036854775807LL) + (9223372036854775807LL))) << (((var_10) + (4041880049958160582LL)))));
                    var_24 = ((/* implicit */unsigned char) max((((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (signed char)11))) < (((/* implicit */int) (unsigned char)18))))), ((signed char)-75)));
                }
            }
        } 
    } 
}
