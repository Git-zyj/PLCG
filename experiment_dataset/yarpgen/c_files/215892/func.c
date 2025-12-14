/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215892
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(arr_3 [i_0] [i_0])));
                    var_18 = (-(((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) (unsigned short)63488))))) : (12199034174828173780ULL))));
                    arr_7 [i_0] = ((/* implicit */unsigned long long int) (signed char)-46);
                }
                var_19 += ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1])) : (var_16)))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_9))));
                var_21 = ((unsigned long long int) ((((/* implicit */int) arr_2 [i_1])) > (((/* implicit */int) arr_2 [i_0]))));
                var_22 = ((/* implicit */_Bool) arr_0 [i_1]);
            }
        } 
    } 
    var_23 = max((((/* implicit */int) ((((/* implicit */int) (signed char)-67)) == (((/* implicit */int) ((((/* implicit */int) (signed char)50)) == (var_16))))))), (((((/* implicit */_Bool) ((var_2) / (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_11)))));
}
