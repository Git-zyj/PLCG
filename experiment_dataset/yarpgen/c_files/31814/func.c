/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31814
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_20 &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1] [i_0]))) : (arr_1 [18LL]))), (max((((/* implicit */unsigned long long int) (+(var_19)))), (arr_1 [10ULL])))));
        arr_2 [i_0] = arr_0 [i_0] [15LL];
    }
    var_21 = ((/* implicit */unsigned int) ((var_14) > (((/* implicit */int) (_Bool)1))));
    var_22 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_10)), (max((((/* implicit */long long int) max(((signed char)111), ((signed char)121)))), (var_5)))));
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] &= ((/* implicit */unsigned int) ((short) ((arr_1 [i_1]) & (arr_1 [i_1]))));
        var_23 = ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232))) : (max((((/* implicit */unsigned long long int) -4740840140556418779LL)), ((~(14499113806286124568ULL))))));
    }
}
