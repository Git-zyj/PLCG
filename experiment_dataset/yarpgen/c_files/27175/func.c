/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27175
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
    var_20 = max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) var_8))), (((((/* implicit */_Bool) (short)-20014)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-4164308454526718914LL)))))), (max((max((var_18), (var_17))), (var_5))));
    var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */unsigned short) ((_Bool) var_15))), (var_1)))), (min((4164308454526718894LL), (((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)-12)), ((unsigned short)55698))))))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (min((((/* implicit */unsigned long long int) ((int) var_18))), (((((/* implicit */_Bool) var_10)) ? (var_18) : (var_18)))))));
    var_23 = ((/* implicit */_Bool) ((long long int) ((unsigned char) var_14)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_24 = ((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) ((_Bool) arr_1 [i_1 + 1]))))));
                var_25 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) min((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_0]))))))));
            }
        } 
    } 
}
