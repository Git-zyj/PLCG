/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49487
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
    var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (min((((/* implicit */unsigned short) var_11)), (var_0)))))), (((((/* implicit */int) (short)16383)) & (((/* implicit */int) (unsigned char)42))))));
    var_16 = ((/* implicit */unsigned int) ((((((unsigned int) var_10)) / (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_13))))))) > (var_12)));
    var_17 = ((/* implicit */short) ((var_12) >> (((((/* implicit */int) var_1)) + (98)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [(signed char)20]))))) <= (((int) arr_0 [(signed char)21]))));
        arr_3 [i_0] |= ((/* implicit */short) ((((((1061506928U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-12))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)18)) < (((/* implicit */int) (short)12)))))))) < (((/* implicit */unsigned int) ((((arr_0 [i_0]) + (((/* implicit */int) arr_1 [i_0])))) >> (((((/* implicit */int) arr_1 [i_0])) / (arr_0 [i_0]))))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)20294), (((/* implicit */unsigned short) (short)-2237))))) | (min((min((arr_0 [i_0]), (arr_0 [i_0]))), (arr_0 [i_0]))))))));
    }
}
