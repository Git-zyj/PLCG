/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217188
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
    var_18 = ((/* implicit */unsigned char) ((signed char) (-(var_16))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) arr_0 [(_Bool)1])))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */signed char) ((long long int) ((short) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)5]))) : (arr_1 [i_0] [i_0])))));
        arr_4 [14U] [14U] = ((/* implicit */long long int) (+((-(((var_13) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_14))))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0 - 1])))) % ((+(arr_1 [i_0] [i_0])))));
        arr_6 [i_0] = ((/* implicit */int) arr_0 [i_0 - 3]);
    }
    for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 2) 
    {
        arr_10 [i_1] = ((/* implicit */unsigned long long int) -1596209594);
        arr_11 [i_1] [i_1] = (!(((/* implicit */_Bool) max((4487974698977701368ULL), (((/* implicit */unsigned long long int) (signed char)103))))));
    }
}
