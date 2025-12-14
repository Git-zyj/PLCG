/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213631
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
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned long long int) ((unsigned int) var_9))), (min((((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0])), (var_5)))))))));
        var_15 = min((((/* implicit */unsigned long long int) ((_Bool) min((3604368445143463781ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))))), (min((min((((/* implicit */unsigned long long int) arr_1 [i_0 + 3] [i_0 + 3])), (13340918826897369996ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_0 + 1] [i_0])), (arr_0 [i_0])))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)0)), (16539683269471388721ULL)));
            var_17 = ((/* implicit */short) ((_Bool) min((min((arr_3 [i_0]), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) min(((unsigned short)32837), (((/* implicit */unsigned short) var_12))))))));
            arr_4 [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) min((arr_0 [i_0 - 2]), (arr_0 [i_0])))), (min((18025357364334731901ULL), (((/* implicit */unsigned long long int) var_7)))))), (min((min((var_11), (6963120414200222582ULL))), (((unsigned long long int) arr_2 [i_0] [i_1] [i_1]))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_18 = ((/* implicit */_Bool) ((unsigned long long int) min((((unsigned short) var_6)), (((/* implicit */unsigned short) ((short) 18446744073709551615ULL))))));
            arr_8 [i_2] = ((/* implicit */unsigned long long int) min((min(((unsigned short)55472), (((/* implicit */unsigned short) ((_Bool) 13341828198990260829ULL))))), (((/* implicit */unsigned short) ((_Bool) ((unsigned short) var_3))))));
        }
    }
    var_19 = ((/* implicit */_Bool) min((min((min((var_5), (((/* implicit */unsigned long long int) (_Bool)1)))), (min((((/* implicit */unsigned long long int) (_Bool)0)), (var_11))))), (min((min((((/* implicit */unsigned long long int) (short)30891)), (var_3))), (((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1)))))));
}
