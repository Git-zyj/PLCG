/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229364
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned short)39452)) * (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) var_7)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0 - 1] [(unsigned char)19] = ((/* implicit */unsigned short) (-(min((((arr_0 [i_0] [(unsigned char)13]) ^ (((/* implicit */unsigned long long int) arr_1 [i_0] [(unsigned char)3])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_17)))))))));
        var_19 = ((/* implicit */unsigned char) ((((((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) var_16)) : (arr_0 [i_0 - 1] [i_0 - 2]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) (unsigned char)248))))))));
        var_20 ^= ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)0)) ? (arr_0 [(unsigned char)2] [i_0 - 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) arr_2 [(unsigned short)2])) : (((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) (unsigned char)0))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (signed char)-111))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_3) + (var_3)))) && (((/* implicit */_Bool) (~(var_2))))));
    var_23 = var_2;
}
