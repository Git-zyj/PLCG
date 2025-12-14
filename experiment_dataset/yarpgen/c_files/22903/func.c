/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22903
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_9))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = (-(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) 223803440)) : (arr_0 [i_0] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)4))))) : (max((-6477425068288598654LL), (((/* implicit */long long int) (short)14238)))))));
            arr_6 [i_0 - 1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) (unsigned char)244)) < (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
            arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) arr_4 [i_0 + 3] [0LL])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)284)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 125829120U))))) : (((((/* implicit */_Bool) 5155716511818873849LL)) ? (1006632960) : (((/* implicit */int) (_Bool)1))))))) : ((~(max((((/* implicit */unsigned long long int) (unsigned short)29566)), (17918579272083678334ULL)))))));
        }
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0 + 3] [i_0 - 1]))))) ? (((long long int) 1073407195U)) : (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 4]))))))))));
    }
    for (unsigned int i_2 = 3; i_2 < 15; i_2 += 2) 
    {
        var_16 -= ((/* implicit */signed char) (+(1006632954)));
        var_17 = ((/* implicit */signed char) var_0);
    }
    for (long long int i_3 = 2; i_3 < 14; i_3 += 3) 
    {
        arr_12 [i_3] [i_3 - 2] = ((/* implicit */unsigned char) 17816101786777765864ULL);
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -4847355362891331248LL))));
    }
    var_19 = var_12;
}
