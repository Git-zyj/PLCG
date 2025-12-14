/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20955
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
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_4))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 7; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)42))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)19776))))) : (613420800U))))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_7)))) ? ((~((~(((/* implicit */int) var_13)))))) : ((~((~(((/* implicit */int) var_9))))))));
                                arr_14 [i_2] [i_2] [i_2] [i_2] [i_4] [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)19776)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_16) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) var_17)) : (((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_5);
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_11))));
}
