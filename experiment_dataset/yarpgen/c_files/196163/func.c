/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196163
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
    var_10 = ((/* implicit */unsigned char) ((unsigned int) (((!(((/* implicit */_Bool) var_6)))) && ((!(((/* implicit */_Bool) var_8)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) -359773933);
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 23U)) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)18]))) : (arr_3 [(unsigned char)4] [(unsigned char)4])))) % (arr_0 [(unsigned char)8]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) max((((/* implicit */short) var_2)), (arr_1 [(unsigned short)12])))))))))))));
            }
        } 
    } 
}
