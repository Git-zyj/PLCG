/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2798
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
    var_16 = ((/* implicit */short) ((unsigned long long int) max((((unsigned short) 191099407U)), (((/* implicit */unsigned short) var_15)))));
    var_17 *= ((/* implicit */short) (+(191099407U)));
    var_18 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (2ULL)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_0] = ((((long long int) (-(((/* implicit */int) var_15))))) & (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) + (((((/* implicit */unsigned int) arr_2 [i_1] [i_1])) & (var_2)))))));
                    arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_4 [i_0] [i_1] [i_1] [i_2]), (((/* implicit */short) ((var_6) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17425)))))))))));
                }
            } 
        } 
    } 
}
