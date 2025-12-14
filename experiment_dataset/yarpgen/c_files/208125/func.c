/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208125
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((short) var_19)))));
        var_21 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0])), ((((~(((/* implicit */int) arr_1 [i_0])))) / (((/* implicit */int) arr_1 [i_0]))))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))));
    }
    for (unsigned int i_1 = 3; i_1 < 15; i_1 += 1) 
    {
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((arr_0 [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 + 1]))))))))));
        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(8056566670216336030LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 3])) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 - 2]))))) : (max((((long long int) arr_3 [i_1] [i_1])), (((long long int) arr_1 [i_1]))))));
    }
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_25 = arr_4 [i_2];
        arr_8 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)25)))), (arr_3 [i_2] [i_2]))))));
        var_26 = ((/* implicit */long long int) ((int) max((arr_5 [i_2]), (arr_5 [i_2]))));
        arr_9 [i_2] [(unsigned char)6] = ((/* implicit */unsigned char) var_6);
        var_27 = ((unsigned char) (unsigned char)244);
    }
    var_28 &= ((/* implicit */unsigned short) var_16);
}
