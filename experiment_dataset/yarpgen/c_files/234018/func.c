/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234018
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
    var_20 += ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_21 = ((unsigned long long int) (short)255);
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_1 [1U]))));
                    arr_6 [i_2] [i_2] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (arr_3 [i_2] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))) : ((+(((((/* implicit */int) var_17)) & (((/* implicit */int) var_7))))))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)268)) : (((/* implicit */int) (_Bool)1))))))))))));
                    var_24 = ((/* implicit */long long int) (~((+(arr_4 [i_0] [i_1])))));
                }
            } 
        } 
    } 
}
