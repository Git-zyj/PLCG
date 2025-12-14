/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53583
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
    var_15 = var_9;
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_16 *= ((/* implicit */_Bool) (unsigned short)46119);
                            arr_11 [i_0] [i_1] [i_1] [i_1] = arr_2 [i_1];
                        }
                    } 
                } 
                var_17 = (unsigned short)127;
                var_18 = var_11;
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min((var_9), (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_3)))));
    var_20 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 15318402257577708385ULL)) ? (var_2) : (11616908201176978436ULL)))) ? (min((var_7), (var_7))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))))))) & (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (3128341816131843241ULL)))) ? (var_7) : (var_6))));
}
