/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203114
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
    var_20 = (unsigned short)64763;
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 - 1])) ? (arr_4 [i_1 + 2] [i_1 - 2]) : (arr_4 [i_1 + 2] [i_1 - 2]))) ^ (((arr_4 [i_1 + 1] [i_1 + 1]) ^ (arr_4 [i_1 - 2] [i_1 - 2])))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_0 [i_1 + 1]), (((/* implicit */unsigned long long int) (unsigned short)8806))))) ? (min((((/* implicit */unsigned long long int) var_2)), (arr_0 [i_1 - 1]))) : (max((arr_0 [i_1 - 1]), (((/* implicit */unsigned long long int) var_9))))));
                arr_6 [(unsigned short)11] [i_1 + 1] [(unsigned char)8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)8806))))) >= (((min((((/* implicit */unsigned long long int) var_13)), (arr_0 [(unsigned short)5]))) >> (((/* implicit */int) ((arr_3 [i_0] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))))))));
            }
        } 
    } 
}
