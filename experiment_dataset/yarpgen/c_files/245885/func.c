/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245885
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [4] [4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0]) : (((/* implicit */int) var_1)))))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((int) (+(1255971775))));
                arr_7 [i_1] = -1923227730;
            }
        } 
    } 
    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551612ULL))));
    var_11 = ((/* implicit */unsigned long long int) -561770285);
}
