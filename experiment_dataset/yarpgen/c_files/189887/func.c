/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189887
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
    var_16 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)511)) ? (-4229022626264619686LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)188)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (var_2))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)89))) - (0U))))) >> (((((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)34771)) : (((/* implicit */int) var_5))))) - (34760))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((int) ((((/* implicit */int) (unsigned short)65042)) > (((/* implicit */int) (unsigned short)43339))))))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) < (((/* implicit */int) (unsigned short)52712)))))) : (((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)67))) : (-3954009367065990447LL)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)12824))))) : ((-(((unsigned long long int) arr_4 [i_0]))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((short) var_2));
}
