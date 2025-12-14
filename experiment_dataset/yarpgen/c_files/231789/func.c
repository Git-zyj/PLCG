/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231789
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 1956534399))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (var_3))))))) : (var_3))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = 29U;
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((max((((2889256808U) | (1405710476U))), (((/* implicit */unsigned int) (signed char)-120)))) >> (((min((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1]))) + (1284792707)))));
                var_11 &= ((/* implicit */long long int) (((!((_Bool)1))) || (((/* implicit */_Bool) 2889256808U))));
            }
        } 
    } 
}
