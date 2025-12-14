/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42420
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
    var_14 *= (unsigned char)226;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) ((unsigned char) arr_4 [i_0] [(unsigned char)1] [i_0]))) / (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_3 [i_0])))))))));
                var_15 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((arr_4 [i_0] [i_1] [i_1]), (arr_4 [6] [i_0] [(unsigned char)5])))), (((unsigned int) arr_4 [i_0] [0LL] [i_1]))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((var_10) / (max((((-2762449535482828274LL) / (9223372036854775807LL))), (((/* implicit */long long int) var_13))))));
    var_17 = ((/* implicit */int) ((_Bool) var_10));
    var_18 = var_2;
}
