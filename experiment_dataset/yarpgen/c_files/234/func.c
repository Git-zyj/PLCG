/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234
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
    var_13 = var_0;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) (~(-1)))) ? (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned int) -2070364971)) : (arr_5 [i_1 - 2] [i_1 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((long long int) arr_3 [i_0])) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (-1075138709) : (1075138719)))))))));
                var_14 = ((/* implicit */int) max((var_14), (((var_6) + (((((/* implicit */_Bool) 609579593)) ? (((((/* implicit */_Bool) 1075138715)) ? (-1562351539) : (var_10))) : (var_10)))))));
                arr_7 [i_1] = ((/* implicit */unsigned char) min((((arr_0 [i_0] [i_1]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1729105598)) - (var_0)))))), (((/* implicit */unsigned long long int) 609579593))));
                var_15 = ((/* implicit */long long int) min((2629293368U), (((/* implicit */unsigned int) (((+(2147483647))) ^ (((/* implicit */int) ((_Bool) var_1))))))));
            }
        } 
    } 
}
