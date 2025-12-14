/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227165
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
    var_18 += min((((/* implicit */int) ((unsigned short) var_16))), (((((((/* implicit */int) var_15)) / (var_17))) * (((/* implicit */int) var_6)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) var_10);
        arr_2 [i_0] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_12)))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)1791)) : (var_5))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) var_6);
        arr_7 [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (3017601137272625210LL))))));
        var_20 += ((/* implicit */signed char) (unsigned short)55123);
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) arr_5 [i_1]))))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (_Bool)1))));
    }
}
