/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211856
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
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */long long int) 3515810591U)), (((((((/* implicit */long long int) ((/* implicit */int) var_6))) * (var_4))) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)194)), (var_8)))))))));
    var_15 += ((/* implicit */_Bool) max((((/* implicit */short) var_6)), (var_9)));
    var_16 = ((/* implicit */_Bool) (short)15221);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)175)) && (((((/* implicit */int) arr_4 [i_0] [i_0])) <= (((/* implicit */int) arr_1 [i_1])))))), (((arr_3 [i_1] [i_1] [i_0]) || (min((arr_3 [(_Bool)1] [(unsigned char)8] [i_1]), (arr_3 [i_0] [i_0] [10LL])))))));
                var_18 = ((/* implicit */short) arr_4 [i_0] [i_1]);
                var_19 = ((/* implicit */signed char) ((((-5292776884740407029LL) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) != (-5292776884740407041LL))))))) + (5292776884740407026LL)));
            }
        } 
    } 
}
