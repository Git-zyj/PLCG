/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3641
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
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((var_1) ? (((((/* implicit */int) (signed char)-2)) ^ (((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125))) == (var_12)))))) / (((/* implicit */int) ((max((var_13), (((/* implicit */unsigned int) var_11)))) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2)))))))))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)13408)) << (((/* implicit */int) (_Bool)1))))) != (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (var_12) : (((/* implicit */unsigned int) var_3))))) | (max((var_8), (((/* implicit */unsigned long long int) (short)13388))))))));
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((/* implicit */int) var_1)) / (((/* implicit */int) (signed char)2)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((arr_1 [i_0]) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967288U))))) : (((/* implicit */unsigned int) var_3)))))));
                var_19 ^= ((/* implicit */unsigned int) var_9);
                arr_6 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [2ULL] [0]))));
                var_20 = ((/* implicit */unsigned int) (+(-1617352446)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_0))));
}
