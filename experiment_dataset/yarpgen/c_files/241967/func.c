/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241967
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
    var_13 = ((/* implicit */unsigned long long int) ((var_11) + (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_9)))))))));
    var_14 &= ((/* implicit */unsigned short) ((((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-33), (((/* implicit */signed char) var_3)))))))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)24)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (short)28239)), ((((-9223372036854775807LL - 1LL)) - (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)44699)))))))));
                arr_4 [i_1] [i_0] [i_0] = (~(((/* implicit */int) arr_3 [i_1])));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(max((var_6), (((/* implicit */unsigned int) var_4))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (max((((/* implicit */long long int) (signed char)-71)), (6102072471440794203LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-((-(((/* implicit */int) (short)(-32767 - 1)))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) (+(var_8)))) : ((-9223372036854775807LL - 1LL))))));
}
