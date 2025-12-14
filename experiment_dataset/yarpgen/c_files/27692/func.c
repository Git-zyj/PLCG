/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27692
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
    var_12 = ((/* implicit */short) (+(((/* implicit */int) ((4092U) <= (((/* implicit */unsigned int) -1)))))));
    var_13 = ((/* implicit */short) ((1) % ((~(((/* implicit */int) (unsigned short)15360))))));
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_10))));
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)15360), (((/* implicit */unsigned short) (signed char)-28)))))) / (((36011204832919552ULL) * (((/* implicit */unsigned long long int) var_4))))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) + (((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_1])), ((unsigned short)37354)))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_2)) : (var_9)))))) ? (((-8758086291415701810LL) - (((/* implicit */long long int) (+(2147483647)))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((int) (signed char)8)))))));
            }
        } 
    } 
}
