/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203075
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
    var_13 = ((/* implicit */unsigned long long int) var_11);
    var_14 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) max((((unsigned char) var_2)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (var_1)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_8))))))))) ? (((/* implicit */int) ((short) ((var_2) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) var_11))));
                    var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_10)))))))), (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_6))), (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) ((unsigned int) var_8))), (((unsigned long long int) var_7)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_11), (var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)47909)) / (((/* implicit */int) (short)32767))))) : (((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
}
