/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235218
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_5 [i_0] [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))))) : (arr_5 [i_0] [i_2] [i_1] [i_0])));
                    var_17 = ((/* implicit */unsigned long long int) min((arr_5 [i_0] [(short)9] [i_1] [i_0]), (((/* implicit */unsigned int) arr_6 [i_0] [4U] [i_0] [4U]))));
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_6 [0LL] [i_0] [i_0] [i_0])), (arr_4 [i_0])));
                    arr_8 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)32757)), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_2])) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58617))) : (arr_5 [i_0] [i_1] [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2]))))))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!((_Bool)1)))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_0]))));
        arr_10 [(short)7] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0] [1U] [1U] [i_0]);
    }
    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (max((((/* implicit */long long int) var_5)), (-7193102202760261385LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)23901)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))))))) / (((/* implicit */long long int) ((/* implicit */int) var_14)))));
    var_20 = ((/* implicit */_Bool) (short)17);
    var_21 = ((/* implicit */short) (~(var_3)));
}
