/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54294
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
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_20 *= ((/* implicit */_Bool) (signed char)104);
                    arr_7 [i_0] [(signed char)15] [i_2 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_15))))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        arr_11 [i_2 + 1] [i_3 + 1] = ((/* implicit */unsigned short) ((arr_10 [i_0] [i_1] [i_2] [i_2] [i_0 - 1] [i_3]) || (((/* implicit */_Bool) var_11))));
                        arr_12 [i_0] [(_Bool)1] [i_0 + 1] [8U] = ((/* implicit */signed char) arr_4 [i_0] [(_Bool)1]);
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_21 = arr_1 [i_0 - 1];
                        var_22 -= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-113)) | (100663296)));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_23 -= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_4] [i_5] [i_5])) : (100663275))));
                            var_24 = ((/* implicit */signed char) var_19);
                        }
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) ((((var_17) ? ((~(((/* implicit */int) var_15)))) : (((/* implicit */int) max(((signed char)-63), (((/* implicit */signed char) (_Bool)1))))))) * (((/* implicit */int) ((((/* implicit */int) ((_Bool) var_19))) > (((/* implicit */int) var_4)))))));
}
