/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244685
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_9))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_10 [i_0 - 3] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((short) 524287))) : (max((-1729029705), (((/* implicit */int) arr_1 [i_0])))))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((((int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2] [i_3])) ? (((/* implicit */int) var_18)) : (arr_6 [i_1] [i_3] [i_1] [i_0])))), (((int) ((((/* implicit */_Bool) arr_4 [i_4] [i_2] [i_2] [i_0])) ? (((/* implicit */unsigned int) -1666469164)) : (4294967295U)))))))));
                                var_21 = ((/* implicit */unsigned short) ((short) max((arr_5 [i_0 - 3] [i_0 - 2] [i_0 - 1]), (arr_5 [i_0 + 1] [i_0 + 1] [i_0]))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_9))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_14), (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) var_2)), (var_11)))))) : (((((/* implicit */_Bool) var_8)) ? (((long long int) var_13)) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (2147483638))))))));
}
