/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246878
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
    var_16 = ((/* implicit */unsigned char) (+(var_15)));
    var_17 |= ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((((-1651818348) + (2147483647))) << (((min((1974306884), (((/* implicit */int) (signed char)127)))) - (127))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_19 = 1737257908;
                        var_20 = ((/* implicit */unsigned char) min((76553597), (((/* implicit */int) (signed char)93))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)28)) == (((/* implicit */int) (_Bool)1))))) < ((+(2147483647)))))), (((((/* implicit */_Bool) (signed char)3)) ? (20) : (390857735))))))));
                        arr_11 [i_1] [3] [i_2] [i_2] [i_2] = min(((-(-1575176118))), (min(((-(1023))), (((/* implicit */int) arr_9 [i_1] [i_1] [i_0] [i_3] [i_3])))));
                    }
                }
            } 
        } 
        var_22 *= min((((/* implicit */int) ((_Bool) arr_6 [i_0] [(unsigned char)15] [i_0]))), (((int) var_7)));
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_1 [i_0])) - (45)))))));
        arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? ((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : (607016527)));
    }
}
