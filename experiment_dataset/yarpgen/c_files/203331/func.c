/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203331
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_10)))) - (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) ^ (((((/* implicit */int) (unsigned short)45565)) ^ (((/* implicit */int) (unsigned short)19968))))));
                var_16 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) ^ (((((/* implicit */_Bool) (signed char)120)) ? (var_6) : (var_8))))) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1]))))));
                var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (arr_0 [i_0])))) ? (((((/* implicit */int) arr_2 [i_1] [i_1] [i_0])) ^ (((((var_8) + (2147483647))) >> (((-4483017048923936349LL) + (4483017048923936368LL))))))) : (((/* implicit */int) var_0))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((var_10) ? (var_1) : (arr_1 [i_0]))) | (((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned short)19972)))), (((/* implicit */int) arr_3 [i_1] [i_1]))))))))));
                var_19 = ((/* implicit */short) max((((/* implicit */long long int) (signed char)-1)), (9223372036854775807LL)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (unsigned short)45565))))));
    var_21 = ((/* implicit */signed char) var_7);
}
