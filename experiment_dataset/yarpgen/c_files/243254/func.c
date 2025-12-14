/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243254
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
    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned long long int) var_10)) : (max((((/* implicit */unsigned long long int) var_4)), (var_0)))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_1))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((arr_3 [i_0]) - (arr_3 [i_0])));
        var_13 = ((/* implicit */int) (~(arr_0 [i_0])));
        arr_5 [i_0] = var_9;
    }
    for (unsigned char i_1 = 4; i_1 < 19; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) 0LL);
        arr_9 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_6 [i_1 - 2])), (max((arr_7 [i_1]), (((/* implicit */int) arr_6 [i_1]))))))) - (8168349456670237984ULL)));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1033246768)) || ((_Bool)1))))));
    }
    for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_15 = max((1033246763), (((/* implicit */int) (unsigned char)137)));
        arr_12 [3LL] = ((/* implicit */signed char) min((5237414066107779376LL), (-23785910193126282LL)));
        var_16 -= ((/* implicit */_Bool) ((arr_6 [i_2]) ? (max((((/* implicit */int) var_8)), (-1033246790))) : (((int) arr_10 [i_2]))));
    }
}
