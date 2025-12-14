/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197116
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
    var_13 -= ((/* implicit */_Bool) (unsigned char)127);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_14 *= ((/* implicit */short) ((((/* implicit */int) max((var_7), (((/* implicit */signed char) arr_0 [i_2] [i_2]))))) << (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))) & (2609811086U)))));
                    var_15 = ((/* implicit */short) (-(((/* implicit */int) ((0LL) != (-1LL))))));
                    var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((-1LL) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1020)))))))) ? (arr_4 [i_0] [(short)16] [16U] [i_2]) : (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))) * (((/* implicit */int) arr_0 [i_2] [i_0])))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_6);
    var_18 += ((/* implicit */short) (signed char)127);
}
