/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36923
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
    var_16 = ((/* implicit */long long int) ((((unsigned int) (!(((/* implicit */_Bool) -881852468))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_11) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_14)), (var_15)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((-881852471) >= (881852499))) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 881852468)) ? (-881852468) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((unsigned char) arr_1 [i_0]))))))));
                arr_4 [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)5)) : (((/* implicit */int) (unsigned short)24470))))), (((unsigned long long int) 9186513225244052711ULL)))), (((/* implicit */unsigned long long int) ((unsigned short) arr_2 [i_0] [i_1])))));
            }
        } 
    } 
}
