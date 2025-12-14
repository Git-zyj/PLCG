/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205959
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
    var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_18 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) 2133587639U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (2133587642U)))));
        arr_2 [7LL] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0]))));
        var_19 = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_20 = ((/* implicit */short) (~(4294967295U)));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) (!(((_Bool) (unsigned short)48555))));
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_1]), (var_13)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_1]))))) : ((-(562949953421311LL)))));
    }
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 7859861439459969687ULL)) ? (arr_5 [i_2] [i_2]) : (((/* implicit */long long int) ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_0)))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) max((((long long int) arr_0 [i_2])), (((/* implicit */long long int) ((int) max((2161379673U), (((/* implicit */unsigned int) (unsigned char)188)))))))))));
    }
    for (int i_3 = 2; i_3 < 23; i_3 += 2) 
    {
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_10))));
        arr_12 [i_3 - 2] [i_3 - 1] = ((/* implicit */int) min((((long long int) var_8)), (((/* implicit */long long int) (signed char)-64))));
    }
}
