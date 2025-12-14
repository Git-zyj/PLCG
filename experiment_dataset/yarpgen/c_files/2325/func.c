/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2325
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
    var_10 = ((/* implicit */long long int) (-(min((((/* implicit */int) ((unsigned short) var_3))), ((-(1476038969)))))));
    var_11 = ((/* implicit */long long int) 1476038943);
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)8048), (var_1)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) (unsigned char)115);
        arr_4 [i_0] = ((/* implicit */short) ((_Bool) ((((/* implicit */int) (unsigned char)98)) * (((/* implicit */int) (_Bool)0)))));
        var_13 = ((/* implicit */int) arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) arr_6 [i_1])) : (arr_5 [i_1])));
        var_14 = ((/* implicit */signed char) ((unsigned short) arr_1 [i_1]));
        var_15 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (signed char)-85))))));
        arr_8 [i_1] = ((/* implicit */long long int) arr_6 [i_1]);
    }
}
