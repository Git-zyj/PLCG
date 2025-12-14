/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192429
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
    var_20 = max((((/* implicit */long long int) var_19)), ((-(var_17))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((_Bool) ((_Bool) (~(arr_0 [0ULL]))))))));
        var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((255U), (1U)))), (min((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2])))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_23 += ((_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (15829766489659079335ULL)));
        arr_4 [i_1] = ((/* implicit */long long int) ((((_Bool) max((arr_1 [i_1]), (((/* implicit */unsigned long long int) arr_2 [i_1]))))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [(_Bool)1]))))));
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_2 [i_1]), (arr_2 [i_1])))), (min((arr_3 [i_1]), (arr_3 [i_1]))))))));
        var_25 = ((/* implicit */unsigned int) min((max((arr_0 [(_Bool)1]), (arr_0 [2ULL]))), (((/* implicit */unsigned long long int) max((8727373545472LL), (-2186773809397969033LL))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_0 [i_2]) : (arr_0 [i_2])));
        arr_9 [i_2] = arr_1 [i_2];
    }
    var_27 |= ((/* implicit */unsigned int) var_10);
    var_28 = var_1;
}
