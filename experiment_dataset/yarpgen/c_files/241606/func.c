/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241606
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
    var_12 = var_0;
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_2)) > ((-(max((var_0), (0U)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (-((-(arr_1 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) var_1);
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (~(((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) ^ (arr_1 [20LL]))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) var_6);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_0 [(_Bool)1] [i_0]);
    }
}
