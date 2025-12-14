/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208037
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
    var_13 = ((/* implicit */unsigned short) ((unsigned char) (~(max((var_6), (((/* implicit */int) (short)32743)))))));
    var_14 = ((/* implicit */unsigned int) ((var_1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) var_10))))) ? (var_7) : (((/* implicit */long long int) var_12))))) : ((+(var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56693))) : (1582879822764402589ULL)))) ? (var_2) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))))), (((max((((/* implicit */unsigned long long int) var_5)), (var_4))) >> (((var_12) - (3916212470U))))))))));
                var_16 += ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8842))))));
            }
        } 
    } 
}
