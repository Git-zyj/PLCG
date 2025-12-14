/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199444
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
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (max((((/* implicit */unsigned long long int) var_14)), (var_6))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_9))));
    var_18 = ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))), (var_0))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)-1), (((/* implicit */short) (unsigned char)255))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max((var_3), ((signed char)80))))))));
    var_19 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)24)) ? (2047) : (((/* implicit */int) var_7))))) / ((~(18446744073709551611ULL)))));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_2))));
            }
        } 
    } 
}
