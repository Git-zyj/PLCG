/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216505
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
    var_13 = var_9;
    var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (((-(-576459676))) >= (((/* implicit */int) ((unsigned short) 1836579464U))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    var_15 += ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(1836579464U)))), (((unsigned long long int) arr_1 [i_1 - 3]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 - 4])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (unsigned char)29)), (18446744073709551615ULL))) + (((/* implicit */unsigned long long int) (-(arr_1 [i_1 - 2]))))))))))));
                }
            } 
        } 
    } 
}
