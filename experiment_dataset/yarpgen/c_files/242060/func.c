/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242060
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)14471)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 - 2]))) : (4050071943U))) * (((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)14471), (((/* implicit */unsigned short) var_10))))) / (((/* implicit */int) ((short) (short)-24920))))))));
                var_16 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)24919)), (arr_3 [i_0] [i_1 + 3])))))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) >> (((((/* implicit */_Bool) (short)-24923)) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (var_4))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_12))));
    var_19 = ((/* implicit */int) var_12);
    var_20 ^= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)14468)) && (((/* implicit */_Bool) (unsigned short)14471)))))) <= (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_5))))))));
}
