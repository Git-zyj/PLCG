/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235659
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
    var_11 = ((/* implicit */int) min((((/* implicit */long long int) var_6)), (min((((/* implicit */long long int) (-(3529974534U)))), (min((-4LL), (((/* implicit */long long int) var_10))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [(unsigned char)4] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) (!(arr_0 [i_0])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_5))))));
        var_12 = ((/* implicit */unsigned int) (~(((int) (signed char)124))));
        var_13 |= ((/* implicit */unsigned int) var_9);
        var_14 -= ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3217))))))), (((/* implicit */int) (unsigned char)89))));
        var_15 -= ((/* implicit */unsigned short) ((var_4) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] &= ((/* implicit */unsigned long long int) var_8);
        arr_6 [i_1] = ((/* implicit */unsigned char) ((_Bool) min((var_2), (((/* implicit */long long int) (unsigned short)62319)))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_2]) : (((/* implicit */long long int) var_8))));
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2]))));
    }
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        var_18 = ((/* implicit */_Bool) ((short) min(((-(((/* implicit */int) (signed char)-115)))), (((/* implicit */int) arr_8 [i_3] [3ULL])))));
        var_19 = ((/* implicit */short) ((((/* implicit */int) var_0)) >> (((int) (unsigned char)20))));
    }
    var_20 = min((((/* implicit */int) var_5)), (((int) ((long long int) var_8))));
}
