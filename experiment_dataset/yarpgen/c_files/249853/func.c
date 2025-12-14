/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249853
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
    var_16 = ((/* implicit */unsigned char) ((signed char) var_6));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) (+((+(167640043)))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (((+((-9223372036854775807LL - 1LL)))) ^ (((/* implicit */long long int) (+(((/* implicit */int) (signed char)108)))))));
        var_18 -= ((/* implicit */unsigned char) min(((-(((((/* implicit */_Bool) (short)-32473)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32473))))))), (((/* implicit */unsigned long long int) min(((unsigned short)17964), (((/* implicit */unsigned short) arr_0 [i_0])))))));
        var_19 = ((/* implicit */int) var_9);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */_Bool) arr_1 [i_1]);
        var_21 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (-401271806) : (((/* implicit */int) (short)-12002))))))) && (((/* implicit */_Bool) min((((short) arr_3 [i_1] [i_1])), (((/* implicit */short) (((_Bool)1) && (arr_0 [i_1]))))))));
        var_22 &= ((/* implicit */long long int) arr_3 [i_1] [i_1]);
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] &= ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) arr_7 [i_2] [i_2])))));
        var_23 = ((/* implicit */int) min((((((((/* implicit */_Bool) var_0)) ? (arr_3 [i_2] [i_2]) : (((/* implicit */unsigned long long int) var_15)))) / (arr_3 [21ULL] [i_2]))), (((/* implicit */unsigned long long int) -1490917093))));
    }
    var_24 &= ((((/* implicit */_Bool) ((var_14) << (((((var_6) + (1732659718))) - (29)))))) || (((/* implicit */_Bool) ((long long int) ((int) (unsigned char)255)))));
}
