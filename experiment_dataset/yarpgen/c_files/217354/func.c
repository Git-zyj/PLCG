/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217354
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
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) 1100336711))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) ((_Bool) 1100336699));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((2979497508U) & (((/* implicit */unsigned int) -1761291217))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) -1761291217)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
                            arr_13 [i_0] [i_1 + 1] [i_0] [i_3] = ((/* implicit */unsigned char) ((-232168799) & (-232168780)));
                        }
                    } 
                } 
                arr_14 [(unsigned short)10] |= ((/* implicit */_Bool) var_16);
            }
        } 
    } 
}
