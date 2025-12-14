/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50135
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) ^ (var_1))))))))));
        var_15 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((min((((((/* implicit */int) arr_2 [i_0] [i_0])) & (((/* implicit */int) var_6)))), (((var_2) ^ (((/* implicit */int) var_10)))))) + (2147483647))) << (((min((((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (arr_2 [i_0] [i_0])))), (((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) var_3)))))) - (135)))))) : (((/* implicit */unsigned char) ((((min((((((/* implicit */int) arr_2 [i_0] [i_0])) & (((/* implicit */int) var_6)))), (((var_2) ^ (((/* implicit */int) var_10)))))) + (2147483647))) << (((((min((((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (arr_2 [i_0] [i_0])))), (((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) var_3)))))) - (135))) - (9))))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) min((arr_4 [i_1]), (((/* implicit */unsigned long long int) ((var_7) || (((/* implicit */_Bool) arr_4 [i_1])))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_4 [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [i_1])) <= (((/* implicit */int) (unsigned short)28077)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) : (arr_4 [i_1])));
        var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)37449))))) ? (((/* implicit */int) ((short) (signed char)(-127 - 1)))) : (max((((/* implicit */int) var_11)), (var_2)))))), (((((/* implicit */_Bool) ((arr_4 [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3))))))));
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [6LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (arr_4 [i_1]))))) : (((((/* implicit */_Bool) (unsigned char)134)) ? (arr_4 [i_1]) : (arr_4 [i_1])))))) || (((/* implicit */_Bool) (~(((long long int) 1234381601)))))));
    }
    var_18 = ((/* implicit */int) var_8);
    var_19 |= ((/* implicit */unsigned int) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))));
    var_20 = ((/* implicit */long long int) (unsigned short)37459);
    var_21 = ((/* implicit */signed char) var_0);
}
