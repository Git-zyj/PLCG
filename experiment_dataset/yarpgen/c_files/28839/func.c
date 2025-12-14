/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28839
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
    var_11 -= var_10;
    var_12 = ((/* implicit */unsigned int) (-((~((-(((/* implicit */int) var_7))))))));
    var_13 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_0 - 1] [i_0 - 2] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)3))))), (((((/* implicit */_Bool) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((4637648522526127367ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (unsigned short)5))))))))));
                var_14 |= ((((/* implicit */_Bool) ((unsigned char) ((short) var_8)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) % (((/* implicit */int) (unsigned short)8))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)64966)))))) : (((((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned char)56)))) ^ (((/* implicit */int) (unsigned short)12)))));
            }
        } 
    } 
}
