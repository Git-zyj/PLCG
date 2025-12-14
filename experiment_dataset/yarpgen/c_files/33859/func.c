/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33859
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) max((max((((var_5) * (arr_0 [i_0] [i_0]))), (var_8))), (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_3 [i_0] [16LL])), (var_4))) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))));
                arr_4 [(unsigned short)10] [i_1] |= ((/* implicit */unsigned short) arr_1 [i_1]);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (var_3)))), (((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned long long int) var_10)), (var_8))) : (((/* implicit */unsigned long long int) var_7)))))))));
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((unsigned int) ((max((var_8), (((/* implicit */unsigned long long int) var_6)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7U)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))))))))));
}
