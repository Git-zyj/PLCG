/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205212
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] = ((/* implicit */unsigned char) ((((_Bool) (signed char)0)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-28759))))) : (1049383146U)));
                                var_21 &= ((/* implicit */short) var_2);
                                arr_17 [i_0] [i_1 - 3] [i_1 + 1] [i_1] [(unsigned short)15] [i_3] = (+(max((((/* implicit */long long int) arr_8 [i_0])), (-8365099567634037271LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) min((((/* implicit */unsigned char) var_9)), (var_10)));
    var_23 += ((/* implicit */unsigned long long int) var_3);
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)28758)) && (((/* implicit */_Bool) 3245584161U))))) : (((/* implicit */int) (unsigned short)54623))))) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) 581638715667133086ULL)))))) : (6455231163474895243LL)));
}
