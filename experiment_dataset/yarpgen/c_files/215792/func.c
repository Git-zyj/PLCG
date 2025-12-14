/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215792
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
    var_18 = ((/* implicit */long long int) ((var_15) % (((/* implicit */unsigned long long int) var_10))));
    var_19 &= var_13;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_0] = (unsigned char)43;
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((582716202U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) (+(23ULL)))) ? (((18446744073709551592ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))))) : (((((unsigned long long int) 18446744073709551592ULL)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
                arr_5 [i_1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [(_Bool)1]))));
                arr_6 [i_0] [i_0] = ((/* implicit */int) min((1816079608U), (((/* implicit */unsigned int) (unsigned char)143))));
            }
        } 
    } 
    var_21 += ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_11)), (524286)))) ? ((~(474511550U))) : (((unsigned int) (short)0)))));
    var_22 = ((/* implicit */unsigned int) var_17);
}
