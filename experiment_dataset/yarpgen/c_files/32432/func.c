/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32432
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
    var_18 = ((/* implicit */unsigned int) (+(var_10)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 2147483647)) ? (((var_13) >> (((((-2147483633) - (-2147483632))) + (3))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((4155588404223150196LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-5))))))))), (((/* implicit */unsigned int) (signed char)(-127 - 1)))));
        var_20 = ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_3)))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] |= ((/* implicit */unsigned char) (-(((/* implicit */int) max(((signed char)-117), ((signed char)4))))));
        arr_7 [i_1] = ((/* implicit */signed char) ((min((var_10), (((/* implicit */unsigned long long int) arr_2 [i_1])))) | (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_2 [i_1])))), ((+(((/* implicit */int) arr_5 [i_1])))))))));
        arr_8 [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)4)))) / (var_15)))));
        arr_9 [i_1] = ((/* implicit */_Bool) (~(min((((/* implicit */int) (unsigned short)31958)), (var_0)))));
        var_21 = ((/* implicit */int) arr_4 [i_1]);
    }
    var_22 = ((/* implicit */short) (!((_Bool)1)));
}
