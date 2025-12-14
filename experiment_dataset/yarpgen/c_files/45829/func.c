/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45829
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
    var_18 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)11675)) ? (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned int) (short)-1))))) : (16211816096900736489ULL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [(unsigned short)14] [(unsigned short)14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (18446744073709551611ULL)));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (arr_2 [i_0] [i_0])));
        var_21 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
    }
    var_22 ^= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) (+(((/* implicit */int) var_17))))), (min((((/* implicit */unsigned int) var_15)), (var_13))))) >> (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_15))))))));
    var_23 = ((/* implicit */int) var_8);
}
