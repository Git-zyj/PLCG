/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191994
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
    var_19 = ((/* implicit */short) var_13);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) ((1078361527U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-25599)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0])))));
        var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_15)))) ^ (((/* implicit */int) (_Bool)1))));
        arr_3 [(unsigned char)16] [(unsigned char)16] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (signed char)62)))))) : (((/* implicit */int) (((~(((/* implicit */int) (unsigned char)248)))) == (((/* implicit */int) arr_1 [(unsigned char)16])))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((/* implicit */long long int) 1585416078)) : (((((/* implicit */_Bool) 536870911)) ? (((/* implicit */long long int) (+(var_11)))) : (arr_0 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_1])))), (((((/* implicit */_Bool) (short)25597)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1])))))))));
            var_23 &= ((/* implicit */long long int) var_10);
            var_24 = ((/* implicit */int) arr_0 [i_1] [i_0]);
        }
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            arr_9 [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [i_2]))) ? (arr_0 [i_0] [i_2]) : (max((arr_0 [i_0] [i_2]), (arr_0 [i_2] [i_0]))));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_7 [12U])) + (2147483647))) << (((((/* implicit */int) (unsigned char)181)) - (181)))))) : (max((1008806316530991104LL), (((/* implicit */long long int) var_7)))))) < (((long long int) (signed char)115))));
            var_25 = ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) % (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3519))) % (arr_6 [i_0] [i_0]))));
        }
    }
    var_26 = ((/* implicit */unsigned short) ((unsigned long long int) 302564792U));
}
