/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240604
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
    var_10 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_1) == (var_1))))) - (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)74))) ^ (3253070281U)))))), (min((4797279520970249786ULL), (((/* implicit */unsigned long long int) (unsigned char)63))))));
    var_11 = ((/* implicit */unsigned int) min(((short)17181), ((short)-3828)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_1 + 3])), (arr_3 [i_0] [i_1] [i_1]))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) && (((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) var_2)))))))), ((-(((264241152) >> (((((/* implicit */int) (unsigned char)72)) - (43)))))))));
            }
        } 
    } 
}
