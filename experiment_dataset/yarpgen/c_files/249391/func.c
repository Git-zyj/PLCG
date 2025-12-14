/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249391
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
    var_17 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */int) (short)29935)) + (((/* implicit */int) var_16))))) ? (var_1) : (((/* implicit */long long int) (+(((/* implicit */int) var_5)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) var_6);
        var_19 = ((/* implicit */unsigned char) var_11);
        var_20 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
    }
    for (unsigned int i_1 = 4; i_1 < 21; i_1 += 3) 
    {
        var_21 = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_5 [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_1])))))))), (var_8)));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) max((var_3), (var_3))))));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((((((/* implicit */int) arr_3 [i_1] [i_1 - 2])) + (2147483647))) << (((var_8) - (7025236355130809313LL))))) | (((/* implicit */int) var_3))))), (939673534U)));
        arr_8 [i_1] [i_1 - 2] = ((/* implicit */unsigned long long int) var_3);
    }
    for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-29935)) | (((/* implicit */int) (unsigned short)9909))));
        var_23 = ((/* implicit */_Bool) var_5);
    }
}
