/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3393
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
    var_13 = ((/* implicit */signed char) 21U);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [(unsigned char)3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) max((4294967275U), (((/* implicit */unsigned int) (signed char)97)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-29587))))))) : ((~(((/* implicit */int) ((4266986376U) >= (4294967295U))))))));
                arr_7 [i_1] = arr_1 [i_1];
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (((~(((/* implicit */int) ((signed char) arr_5 [(unsigned char)2]))))) < (min(((+(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) var_12)))))))));
            }
        } 
    } 
    var_15 *= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967286U)) || (((/* implicit */_Bool) 5144767U))))), (((unsigned long long int) ((unsigned char) var_2)))));
    var_16 = ((/* implicit */signed char) 4294967275U);
}
