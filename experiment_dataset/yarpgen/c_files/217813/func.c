/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217813
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_16))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned int) ((var_7) % (((/* implicit */long long int) var_2)))))), (((((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) var_14))))) & (var_7))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_1] [i_1 - 1]))))) <= (((((/* implicit */_Bool) ((18446744073709551608ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2149))) : (arr_4 [i_0] [i_1 + 2] [i_2]))))))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)0))));
                }
            } 
        } 
    } 
}
