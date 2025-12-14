/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5225
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (~(var_3))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_10);
        arr_3 [i_0] [i_0] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_14))))));
        var_16 = ((/* implicit */short) min(((~(((/* implicit */int) var_12)))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? ((+(var_10))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            arr_15 [i_3] [i_2] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_2))))));
                            var_17 ^= var_9;
                            arr_16 [i_4] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */long long int) max(((-(((/* implicit */int) (unsigned short)44303)))), (((/* implicit */int) var_8))));
                        }
                        arr_17 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((var_6), (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_11))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))))));
                        var_18 -= ((/* implicit */unsigned long long int) (~((-2147483647 - 1))));
                    }
                } 
            } 
        } 
        arr_18 [i_0] = ((/* implicit */unsigned int) min(((!(var_12))), ((!(((/* implicit */_Bool) (-2147483647 - 1)))))));
    }
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) var_1)))))))));
}
