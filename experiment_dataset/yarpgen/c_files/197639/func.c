/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197639
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
    var_19 = ((/* implicit */unsigned char) var_16);
    var_20 = ((/* implicit */unsigned long long int) var_17);
    var_21 = ((/* implicit */unsigned char) ((((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_22 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) var_14)))));
                            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (short)26816))) ? (((/* implicit */int) ((var_0) || (((/* implicit */_Bool) var_3))))) : ((-(((/* implicit */int) (unsigned char)240)))))))));
                        }
                    } 
                } 
                arr_9 [i_1] = (((~(((/* implicit */int) var_17)))) & (max(((~(((/* implicit */int) var_0)))), (((var_4) | (((/* implicit */int) var_12)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            {
                arr_14 [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) var_9)))));
                arr_15 [i_4] [i_5] [i_4] = ((/* implicit */signed char) (+((+(((/* implicit */int) var_18))))));
            }
        } 
    } 
}
