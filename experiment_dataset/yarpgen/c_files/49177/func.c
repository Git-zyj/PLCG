/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49177
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
    var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((var_8), ((unsigned char)250)))) : (((/* implicit */int) var_5))));
    var_20 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) (unsigned short)7548))))) == (min((((/* implicit */long long int) (unsigned char)51)), (-1853571924359522603LL))))))));
                arr_5 [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-83)), ((unsigned short)10017))))) : (((arr_2 [i_1] [i_0]) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])) : (arr_0 [i_1] [i_0]))) : (((((/* implicit */_Bool) var_16)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))))));
            }
        } 
    } 
    var_22 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)96))))) : (((/* implicit */int) (signed char)75))));
}
