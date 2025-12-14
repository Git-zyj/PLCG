/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40079
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) var_6)))))) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (var_5))), (((/* implicit */unsigned long long int) ((_Bool) (unsigned char)69))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned char) (short)-1))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 4]))) / (arr_2 [i_0 + 1] [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((short) min((arr_3 [i_0] [i_0]), ((unsigned char)29)))), (((/* implicit */short) ((arr_1 [i_0 - 3]) != (arr_1 [i_0 + 4]))))));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (unsigned char)142))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 1) /* same iter space */
    {
        arr_8 [15] [i_1] = ((/* implicit */_Bool) arr_7 [i_1 - 1]);
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_2 [i_1 - 3] [i_1 + 1]))) < ((+(((/* implicit */int) arr_0 [i_1 - 3])))))))));
    }
}
