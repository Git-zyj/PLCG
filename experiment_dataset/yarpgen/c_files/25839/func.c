/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25839
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    var_13 *= arr_6 [i_0] [i_0];
                    var_14 = ((/* implicit */_Bool) arr_0 [i_0] [i_2 - 2]);
                    var_15 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) (unsigned short)64507)) : (((/* implicit */int) (_Bool)1))))) < (max((((arr_3 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) arr_2 [i_2 - 1] [i_2 - 3]))))));
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 + 1] [i_0])) || (((/* implicit */_Bool) ((arr_5 [i_2 - 2] [i_2 + 1] [i_2 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)3))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) (+(var_10)));
}
