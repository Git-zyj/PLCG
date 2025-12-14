/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47263
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
    var_13 = ((/* implicit */short) ((var_5) / (var_7)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (((var_2) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) / (var_8))))))))));
        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_11))) >> (((/* implicit */int) var_11)))))));
        var_16 += ((/* implicit */_Bool) var_7);
        arr_2 [(short)22] &= ((/* implicit */int) ((((((/* implicit */int) (unsigned short)49086)) + (((/* implicit */int) (unsigned char)73)))) > (((/* implicit */int) ((983040U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45007))))))));
        arr_3 [i_0] [(unsigned short)20] &= ((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_10)) & (((/* implicit */int) min(((unsigned short)16470), (((/* implicit */unsigned short) var_3)))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_11))));
        var_18 = ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
    }
    for (unsigned char i_2 = 1; i_2 < 13; i_2 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_0))));
        arr_8 [i_2] [i_2 - 1] = ((/* implicit */unsigned short) (+(var_5)));
        var_20 *= ((/* implicit */short) var_11);
        var_21 += ((/* implicit */unsigned short) var_8);
    }
    var_22 = ((/* implicit */long long int) (((~(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))) / (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (max((((/* implicit */unsigned long long int) var_3)), (var_2))))))));
    var_23 = ((/* implicit */int) min((var_11), ((_Bool)1)));
}
