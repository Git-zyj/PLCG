/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199111
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
    var_15 = ((/* implicit */signed char) var_4);
    var_16 = ((/* implicit */unsigned long long int) var_14);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_13 [i_3] [i_3] [i_3] &= ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) >> (min((((/* implicit */unsigned long long int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))), (var_13))));
                            var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((var_5) * (var_5)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))));
                        }
                    } 
                } 
                var_18 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) min((var_11), (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((short) var_4)))))));
                arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((unsigned int) var_9))))) - (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_0)))))))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_14))))) ? (var_11) : (((int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */int) var_9))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_2) : (var_2)))) : (((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_6);
}
