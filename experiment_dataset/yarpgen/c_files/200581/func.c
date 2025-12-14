/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200581
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                                var_20 = ((/* implicit */signed char) (((((-(((/* implicit */int) (unsigned char)18)))) / (((/* implicit */int) ((_Bool) (_Bool)1))))) == (((/* implicit */int) var_15))));
                                var_21 ^= ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (unsigned char)152)))))) ? (((/* implicit */int) (unsigned char)10)) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) * (((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_17))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 23; i_5 += 2) 
                    {
                        for (short i_6 = 1; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 - 2] [i_2] [i_2 - 1] [i_1 - 2] [(short)1] [i_5 - 1] [i_6])) ? (var_1) : (((/* implicit */int) var_16))))) ? ((+(12596690734283435692ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_9 [i_1 - 1] [i_1] [i_2 + 1] [i_2 + 1] [i_1] [i_5 - 1] [i_6])))))))));
                                arr_17 [i_0] [i_0] [i_1 + 1] [i_0] [i_2 - 1] [i_5] [i_1] = ((/* implicit */signed char) var_19);
                                arr_18 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
                            }
                        } 
                    } 
                    var_24 ^= ((/* implicit */short) 11392868677856351118ULL);
                }
            } 
        } 
    } 
    var_25 ^= ((/* implicit */signed char) -1813683888);
    var_26 = ((/* implicit */long long int) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) (short)-28076))));
}
