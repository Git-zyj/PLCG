/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203932
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)904)) % (((/* implicit */int) (unsigned short)64637))));
                arr_7 [i_1] [i_0] &= ((/* implicit */signed char) (((+(var_8))) / (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) * (((/* implicit */int) var_2)))))));
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)7))))) : (((((/* implicit */_Bool) (unsigned short)64618)) ? (10402071735659222831ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
    var_12 = var_1;
}
