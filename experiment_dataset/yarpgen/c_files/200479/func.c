/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200479
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)92)) * (((((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_7)))) & ((~(((/* implicit */int) var_7))))))));
    var_13 = ((/* implicit */signed char) ((((((/* implicit */long long int) (~(((/* implicit */int) var_0))))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_6))))) & (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    var_14 = ((/* implicit */unsigned short) (~(min((((var_11) ? (-2527807681030464806LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) var_5))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = ((unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) var_9))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] = (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (2527807681030464805LL))));
                                var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ? (var_8) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) & (2527807681030464796LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_0))))) ? (((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (3744501135U))) : (((/* implicit */unsigned int) ((int) var_5))))) : (((/* implicit */unsigned int) ((var_8) & (((var_11) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 -= ((/* implicit */signed char) ((unsigned short) var_1));
}
