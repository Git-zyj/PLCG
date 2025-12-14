/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220759
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
    var_12 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_5))))))), (((unsigned long long int) var_5))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_13 |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (unsigned short)7371)) : (((/* implicit */int) (unsigned short)58165))))), ((+(11033494469989240583ULL)))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(var_0))) / (max((-1), (var_0)))))) ? (arr_1 [i_0 - 1]) : ((+((-(-904447632)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((long long int) arr_5 [i_1 + 1])))));
        arr_6 [i_1] = ((((/* implicit */_Bool) (-(var_10)))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2267682306U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        var_15 = ((/* implicit */_Bool) var_6);
    }
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_3))));
    var_17 = ((/* implicit */unsigned char) (unsigned short)7371);
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_0)), (var_4)));
}
