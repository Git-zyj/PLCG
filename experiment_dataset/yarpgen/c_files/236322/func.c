/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236322
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
    var_17 = ((/* implicit */unsigned char) var_12);
    var_18 = ((/* implicit */long long int) var_12);
    var_19 -= ((/* implicit */long long int) ((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (max((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (_Bool)0)), (1152919305583591424LL))) - (1152919305583591424LL)))), (0ULL)))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_21 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -1152919305583591428LL)) ^ (min((((/* implicit */unsigned long long int) min((var_5), (var_5)))), (((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)96)))))))));
                        var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_4)))) ? (arr_4 [i_0] [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
                        arr_11 [i_0] [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -976839495)), (0U)))) ^ (((0ULL) & (((/* implicit */unsigned long long int) 1152919305583591417LL)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (498514649U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                    }
                } 
            } 
        } 
    }
}
