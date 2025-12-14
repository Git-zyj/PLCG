/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201129
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 0U)) & ((-(((16LL) / (var_7)))))));
    var_17 = ((/* implicit */_Bool) min(((-(min((var_10), (((/* implicit */unsigned int) var_9)))))), (((/* implicit */unsigned int) var_5))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_1 + 3] [i_2] = var_2;
                    arr_12 [i_2] = (!((!((_Bool)1))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_0)), (min(((-(var_12))), (max((var_14), (((/* implicit */unsigned long long int) var_11))))))));
}
