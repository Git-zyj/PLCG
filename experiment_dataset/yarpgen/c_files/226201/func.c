/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226201
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
    var_20 = ((/* implicit */unsigned long long int) ((var_18) - (((/* implicit */long long int) (~(((int) (unsigned short)1)))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) (-(min((((/* implicit */int) arr_0 [i_0])), (-2054014585)))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)12196)))))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [14])) ? (var_5) : (((/* implicit */unsigned int) 192012024))))) ? (((/* implicit */int) var_2)) : (((int) (_Bool)1)))))))));
        var_23 = ((/* implicit */int) min((min((((/* implicit */unsigned int) var_17)), (var_5))), (((/* implicit */unsigned int) min((((((/* implicit */int) arr_0 [(unsigned char)15])) - (((/* implicit */int) (unsigned char)201)))), (arr_1 [i_0]))))));
    }
    var_24 &= ((/* implicit */unsigned long long int) ((max((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_3))))), ((((-2147483647 - 1)) % (-2054014585))))) + (((int) ((((/* implicit */_Bool) (short)21538)) ? (var_12) : (((/* implicit */long long int) 959114026U)))))));
}
