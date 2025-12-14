/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33951
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)5361))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5)))) + ((+(2166940137U)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [11U]))));
        arr_4 [9ULL] [5LL] = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((signed char) max((min((((/* implicit */long long int) (unsigned short)17736)), (arr_5 [i_1]))), (((/* implicit */long long int) (+(arr_6 [i_1])))))));
        arr_7 [(unsigned char)24] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_6 [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_1]) == (arr_5 [i_1]))))) : ((+(((unsigned int) arr_6 [i_1]))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)240)))))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
    }
}
