/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225870
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) var_4);
                    var_12 = min((((/* implicit */int) (short)22)), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) 1820187734U)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) arr_4 [i_0])))) : (min((var_5), (((/* implicit */int) arr_3 [i_0] [14])))))));
                    var_13 = ((/* implicit */unsigned char) max((((2474779560U) >> (((arr_2 [i_2 + 2]) - (4212211911U))))), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2] [i_2 - 1])) : (arr_0 [i_1])))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (var_10)));
    var_15 = ((/* implicit */unsigned short) var_3);
}
