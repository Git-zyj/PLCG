/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242381
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
    for (signed char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_12 = ((((/* implicit */_Bool) 8590300314691605324ULL)) ? ((-(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) max((arr_1 [i_0] [(unsigned char)14]), (((/* implicit */signed char) ((((/* implicit */int) (signed char)30)) <= (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((unsigned long long int) arr_3 [i_0] [i_1]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) min((var_5), ((unsigned short)65528))))));
}
