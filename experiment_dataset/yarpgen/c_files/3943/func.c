/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3943
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) 3757518635U)) % (min((10900003267766325528ULL), (((/* implicit */unsigned long long int) 2019683766U)))))), (((/* implicit */unsigned long long int) (unsigned short)13942))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) ((arr_1 [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))), (arr_0 [i_0] [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((max((((/* implicit */unsigned int) arr_5 [i_1] [i_1])), (arr_3 [i_1]))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(short)0] [i_1]))) - (arr_3 [i_1]))))) << (((max(((~(-5814118216998203192LL))), (((/* implicit */long long int) max((arr_4 [i_1]), (((/* implicit */unsigned int) arr_5 [i_1] [i_1]))))))) - (5814118216998203171LL)))));
        var_18 = ((/* implicit */int) arr_4 [i_1]);
        var_19 = ((/* implicit */long long int) arr_3 [16ULL]);
        var_20 |= ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1907803258))))), ((((~(arr_3 [14U]))) & (max((arr_3 [i_1]), (((/* implicit */unsigned int) (unsigned char)182))))))));
    }
    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)1129)), (9ULL)));
}
