/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44968
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
    var_14 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) (signed char)-101)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)87))))), (((/* implicit */unsigned int) (~(var_4)))))), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned int) -1438823666)) % (var_7))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (signed char)126)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                    var_15 = ((/* implicit */long long int) (-(arr_0 [i_0])));
                    arr_7 [i_0] [i_1] [(short)2] [i_2] &= ((_Bool) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_4)) : (13LL)))));
                }
            } 
        } 
    } 
}
