/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240125
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) 2793977687482114476ULL);
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_9 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2793977687482114494ULL)) ? (1133369438U) : (var_6)))) ? (2793977687482114480ULL) : (((/* implicit */unsigned long long int) (~(10))))))) ? (2310961341U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9729)))));
                            var_16 ^= ((/* implicit */unsigned char) (short)-9729);
                            arr_10 [i_3] [i_3] [i_3] [2U] [i_3] = ((/* implicit */signed char) -3370181855338599119LL);
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) (unsigned char)161);
            }
        } 
    } 
    var_18 = ((((((629709482) << (((/* implicit */int) var_5)))) > (((/* implicit */int) var_14)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2793977687482114470ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) % (4059581842U)))) : (3370181855338599129LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)57))));
    var_19 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_8))) < (((/* implicit */int) var_4))));
}
