/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231151
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
    var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_17) : (((/* implicit */unsigned long long int) 4161536LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_0)))))));
    var_21 = ((/* implicit */unsigned short) ((_Bool) var_14));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */int) arr_3 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_1]);
                                var_24 = ((/* implicit */int) var_12);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned long long int) min(((short)-1), ((short)-29935)));
                }
            } 
        } 
    } 
}
