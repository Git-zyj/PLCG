/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43094
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */int) min((min((min((var_7), (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))))))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_7)))))));
                    var_16 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_8 [i_0])))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_7);
    var_18 &= ((/* implicit */int) min(((-(13957723545939632411ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (1180744571U)))))))));
}
