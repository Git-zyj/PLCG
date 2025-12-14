/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245907
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
    var_18 |= ((/* implicit */short) ((signed char) (((!(((/* implicit */_Bool) (short)-31228)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_19 = arr_0 [i_0];
                    var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_4 [i_2] [i_1])))), ((+(-2)))))) ? (((/* implicit */int) arr_5 [i_1] [i_2])) : ((~(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_2 [i_2]))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 11; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) var_17);
                arr_14 [i_3] = ((/* implicit */unsigned long long int) ((max((arr_9 [i_3 + 1] [i_3 - 1]), (((/* implicit */long long int) var_5)))) >= (((/* implicit */long long int) var_15))));
            }
        } 
    } 
    var_22 = var_4;
}
