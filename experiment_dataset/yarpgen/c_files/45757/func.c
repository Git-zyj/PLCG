/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45757
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) arr_0 [16ULL])) == (((/* implicit */int) var_0)))))))) * (var_12))))));
    }
    for (unsigned int i_1 = 4; i_1 < 10; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) arr_3 [i_1]);
        arr_5 [i_1] [i_1 - 2] = ((/* implicit */signed char) max((((/* implicit */unsigned char) ((var_2) || (((/* implicit */_Bool) arr_0 [i_1]))))), (min((arr_0 [i_1]), (arr_0 [i_1])))));
        var_17 = ((/* implicit */unsigned int) (-(arr_1 [i_1 - 4] [i_1 - 4])));
    }
    for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) arr_3 [i_2]);
        arr_8 [i_2] [i_2] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)9)), (var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_4 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((var_14) / (((/* implicit */unsigned long long int) arr_6 [i_2]))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_9 [i_3] [i_3])), (min((max((1271138030U), (((/* implicit */unsigned int) arr_9 [i_3] [4ULL])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5889661298606016637LL)) ? (((/* implicit */int) (unsigned short)25249)) : (((/* implicit */int) (_Bool)1)))))))));
        var_20 = ((/* implicit */signed char) (-(((unsigned int) var_11))));
    }
    var_21 = ((/* implicit */unsigned char) var_1);
}
