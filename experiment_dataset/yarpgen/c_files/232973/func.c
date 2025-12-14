/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232973
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
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((var_5) ? (min((((/* implicit */unsigned int) var_2)), (var_16))) : (((/* implicit */unsigned int) ((int) var_17)))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (var_13) : (((/* implicit */unsigned int) var_17))))), (min((((/* implicit */long long int) 998218084U)), (4365649349706496957LL)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2116258633U)) ? (((/* implicit */int) var_4)) : (var_17)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_21 = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_22 = ((/* implicit */unsigned int) ((((long long int) 4365649349706496959LL)) / (((/* implicit */long long int) 1518251220U))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_23 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_3 [(_Bool)1])))))) & (((arr_5 [i_1]) / (((/* implicit */unsigned int) ((int) arr_4 [i_1])))))));
        arr_6 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) arr_4 [i_1])), (var_11)));
    }
    for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_24 += ((/* implicit */_Bool) 2178708656U);
        arr_10 [5ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((unsigned char) var_3))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        arr_11 [i_2] = ((/* implicit */signed char) ((unsigned int) var_18));
        var_25 = ((/* implicit */signed char) (+(var_0)));
        arr_12 [i_2] = ((/* implicit */signed char) var_11);
    }
    for (short i_3 = 1; i_3 < 9; i_3 += 3) 
    {
        arr_17 [i_3 - 1] = ((/* implicit */unsigned int) arr_14 [(unsigned short)8] [i_3]);
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (-(((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */unsigned long long int) max((var_16), (var_10)))) : (arr_13 [i_3]))))))));
    }
    var_27 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9144255049475140638LL)) ? (((/* implicit */long long int) var_16)) : (var_19)))), (var_3)))));
    var_28 *= ((/* implicit */unsigned int) ((568031734U) > (((/* implicit */unsigned int) (-2147483647 - 1)))));
    var_29 = ((/* implicit */_Bool) var_15);
}
