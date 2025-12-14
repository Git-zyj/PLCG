/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223338
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
    var_19 = ((/* implicit */long long int) var_15);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)231)) | (((/* implicit */int) arr_0 [i_1]))))))))));
                    arr_7 [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23))) : (arr_1 [i_0]))), (((((/* implicit */_Bool) 16383U)) ? (2471568758U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47)))))));
                    var_21 = ((/* implicit */unsigned long long int) (unsigned char)250);
                    var_22 = ((/* implicit */unsigned short) arr_1 [i_0]);
                    arr_8 [i_0] [i_1] [6LL] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_17)))), (max(((~(var_12))), (((/* implicit */long long int) (-(16373U))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) 16384U);
    var_24 = ((/* implicit */unsigned int) var_1);
    var_25 = ((/* implicit */unsigned short) var_18);
}
