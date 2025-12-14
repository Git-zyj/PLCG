/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222579
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
    var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) var_15))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((arr_2 [2ULL]), (((/* implicit */int) min(((unsigned char)161), (((/* implicit */unsigned char) var_15)))))));
                    arr_9 [2ULL] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)0))))), (((unsigned char) arr_1 [i_0 + 1] [i_0]))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)20074)) ? (((/* implicit */int) var_14)) : (-2147483628))) | (((/* implicit */int) min((min((var_16), (var_3))), (((/* implicit */unsigned char) arr_1 [i_0] [i_0])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_7);
    var_21 = (~(((/* implicit */int) (unsigned short)14)));
}
