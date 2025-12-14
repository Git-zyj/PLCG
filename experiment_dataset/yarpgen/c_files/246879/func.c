/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246879
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
    var_11 *= ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) arr_0 [i_1 - 2])))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35836))) <= (arr_0 [i_1 - 3])))));
                var_13 = ((/* implicit */unsigned long long int) var_2);
                var_14 = var_7;
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)12] [i_1 - 1]))) * (arr_5 [i_1 + 1] [(signed char)10]))) * (((/* implicit */unsigned long long int) -6225407345309208102LL))))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)35836))))) - (arr_0 [i_1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (var_0))))));
    var_18 &= ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)35836)) ? (((/* implicit */int) (unsigned short)65535)) : (var_5))))) ? (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_4)))))) : (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)121)) : (-235712793))), (((/* implicit */int) (short)-18018)))));
}
