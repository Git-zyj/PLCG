/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244163
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
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14336)) + (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)227)) + (((/* implicit */int) (unsigned short)17))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) (((+(arr_0 [i_0 - 2]))) >> (((((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((var_10) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (8886790079955415716LL)))));
    }
    for (short i_1 = 2; i_1 < 22; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) arr_3 [i_1]);
        arr_6 [i_1] [i_1] = ((/* implicit */short) (_Bool)1);
    }
    for (int i_2 = 3; i_2 < 10; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) ((signed char) ((_Bool) 2305825417027649536ULL)));
        var_21 = ((/* implicit */_Bool) min((((/* implicit */int) var_5)), ((-((-(((/* implicit */int) var_2))))))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((unsigned char) min((((/* implicit */int) arr_4 [i_2 - 3])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)32767)))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 2; i_3 < 12; i_3 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) var_4);
        var_24 = (+(((/* implicit */int) arr_12 [i_3 + 2] [i_3])));
        arr_13 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3]))) : ((~(arr_1 [i_3] [i_3])))));
    }
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) var_6);
        var_26 = ((/* implicit */_Bool) var_14);
    }
}
