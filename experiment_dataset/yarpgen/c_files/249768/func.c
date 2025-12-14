/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249768
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
    var_13 = ((/* implicit */unsigned char) ((unsigned long long int) (short)3));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        arr_2 [(unsigned char)1] |= ((/* implicit */unsigned char) (_Bool)0);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_14 = ((/* implicit */unsigned long long int) var_3);
        var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)215)), (((arr_0 [i_0 - 2]) - (arr_0 [i_0 - 1])))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) == (arr_0 [i_1])));
        arr_8 [i_1] [(unsigned char)6] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [(short)8]))) : (arr_0 [(unsigned char)0])))) ? (((((/* implicit */int) var_5)) ^ (((/* implicit */int) (unsigned char)64)))) : (((/* implicit */int) ((unsigned char) (_Bool)0)))))) ? (((/* implicit */int) var_7)) : ((((_Bool)1) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)0))))));
        var_16 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)213))))) == (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_2] [i_2])) > (((/* implicit */int) (short)-4))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) & (arr_0 [i_2]))))));
    }
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)7)) * (((/* implicit */int) (unsigned char)255)))))));
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))))) > (((/* implicit */int) var_2))))))))));
}
