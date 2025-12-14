/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190159
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [(unsigned char)7] = (_Bool)0;
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((int) arr_1 [i_0] [i_0])), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (2147483647) : (var_4)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)255);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) || (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (unsigned short)13856))));
        arr_8 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((unsigned long long int) 1124743274))));
        arr_9 [0ULL] [i_1] = ((/* implicit */int) (unsigned char)124);
        arr_10 [i_1] = ((/* implicit */unsigned int) var_5);
        arr_11 [i_1] = ((/* implicit */unsigned char) arr_0 [i_1] [i_1]);
    }
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)7)), (var_9)))) ^ (((/* implicit */int) var_9))));
    var_11 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) (~(((/* implicit */int) (unsigned short)13856))))))));
}
