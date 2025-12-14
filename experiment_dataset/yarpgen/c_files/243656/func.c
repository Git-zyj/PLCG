/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243656
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
    var_20 = ((/* implicit */short) ((unsigned char) var_14));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) var_10);
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (unsigned char)34))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((min(((~(arr_2 [i_0 + 1]))), (((/* implicit */unsigned int) var_13)))) + (min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20206))) > (arr_2 [i_0])))), (((arr_0 [3ULL] [3ULL]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))))))));
        var_24 = ((/* implicit */short) ((31533315139250455LL) % (((/* implicit */long long int) arr_2 [(short)17]))));
    }
}
