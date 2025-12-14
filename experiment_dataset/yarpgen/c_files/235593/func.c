/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235593
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
    var_20 = ((/* implicit */unsigned char) 18446744073709551615ULL);
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_2))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_22 = ((arr_1 [i_0] [i_0]) + (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_1 [i_0] [i_0 + 2]) : (((/* implicit */unsigned long long int) 3137715367U)))));
        arr_2 [(short)2] = ((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (short)31764);
        var_23 ^= ((/* implicit */unsigned int) ((_Bool) (short)31764));
    }
    for (short i_1 = 2; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) ((unsigned short) (short)31764));
        arr_6 [i_1] = (unsigned char)231;
    }
    for (short i_2 = 2; i_2 < 17; i_2 += 1) /* same iter space */
    {
        var_25 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)62)) ? (1157251940U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31740))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)13749))))))), (arr_4 [(_Bool)1])));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (unsigned char)178)), (18446744073709551600ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551604ULL)) && (((/* implicit */_Bool) var_9)))))))))));
    }
    var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) max((((/* implicit */short) (unsigned char)24)), (var_18)))))));
    var_28 = ((/* implicit */short) max((var_28), (var_7)));
}
