/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31820
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
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))))), ((signed char)121)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))) : (arr_1 [i_1]))))) ? (((/* implicit */int) ((_Bool) ((short) (unsigned short)22678)))) : (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (short)-32179)) : (((/* implicit */int) var_1))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) var_10);
    var_15 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (var_4)))) && (((/* implicit */_Bool) var_6)))))));
}
