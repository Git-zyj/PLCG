/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214894
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) (+(var_2)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) (-(((/* implicit */int) arr_1 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]));
        arr_5 [8U] = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    var_12 = ((/* implicit */unsigned int) var_4);
    var_13 = ((/* implicit */unsigned long long int) var_5);
    var_14 = ((/* implicit */_Bool) var_10);
    var_15 = ((/* implicit */unsigned long long int) var_4);
}
