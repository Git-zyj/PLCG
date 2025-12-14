/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49657
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
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) max((arr_4 [i_0] [i_0] [i_2]), (((/* implicit */unsigned short) (_Bool)0))))), (arr_5 [i_0 - 1] [i_1 - 1] [i_0 + 1]))) % ((-(min((((/* implicit */int) (_Bool)1)), (arr_5 [(unsigned short)14] [i_1] [i_2])))))));
                    arr_7 [i_1 + 1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1]))));
                    var_20 = ((/* implicit */long long int) ((arr_0 [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(signed char)11] [(signed char)11])))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 - 1])))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_18)) ? ((~(((/* implicit */int) var_12)))) : (((int) (_Bool)1)))) % (((/* implicit */int) (_Bool)1))));
}
