/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44278
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38344))))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [5ULL])))))))) == (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20767))) : (-1LL)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_1))));
}
