/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238047
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) -906900679);
        arr_3 [i_0] |= ((/* implicit */unsigned int) 1869849942);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_3] [(short)5] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((2860928512U) | (((/* implicit */unsigned int) -906900671))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 131070U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)116)))))));
                                var_22 |= ((/* implicit */unsigned int) arr_15 [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_8 [4U] [i_1] [i_1])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) : (arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1] [i_2])));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_9))));
}
