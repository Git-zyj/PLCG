/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194465
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [(_Bool)1]))));
                                var_13 = ((/* implicit */int) (signed char)-49);
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)37))))) ? ((-(((/* implicit */int) (unsigned char)179)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_0] [i_3] [i_4])) : (((/* implicit */int) (unsigned short)59845)))))) : (((/* implicit */int) var_4))));
                                arr_13 [i_0] [i_1] [(unsigned short)8] [i_2] [i_4] [i_3] [(unsigned char)17] = ((/* implicit */short) (unsigned short)59845);
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)-102))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_6);
    var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((-562951620) & (((/* implicit */int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) var_6))))));
}
