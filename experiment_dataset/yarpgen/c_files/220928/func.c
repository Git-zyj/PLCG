/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220928
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) max((((/* implicit */short) ((signed char) ((arr_4 [i_0] [i_1] [i_1]) == (((/* implicit */long long int) var_12)))))), ((short)-32762)));
                    arr_6 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_3 [i_0]);
                    arr_7 [i_0] [i_1] [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0])), (arr_5 [i_0] [i_1] [i_1] [i_2])))) <= (((/* implicit */int) arr_3 [i_2]))));
                    arr_8 [i_0] [i_1] [i_0] = ((((/* implicit */long long int) (~(((/* implicit */int) var_9))))) | (((((/* implicit */_Bool) ((var_13) | (((/* implicit */int) (short)-32762))))) ? (((/* implicit */long long int) arr_2 [i_0] [i_2])) : (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) & (arr_4 [i_0] [i_0] [i_2]))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) max((var_16), (max((((/* implicit */long long int) (short)-32762)), (var_1)))));
}
