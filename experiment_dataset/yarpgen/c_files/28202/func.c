/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28202
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) min((((((/* implicit */int) ((_Bool) (unsigned char)219))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0]))))))), ((_Bool)0)));
                    arr_9 [i_0] [(_Bool)1] [i_2] &= (~(((/* implicit */int) (_Bool)0)));
                }
            } 
        } 
    } 
    var_17 = var_11;
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) (short)5070))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)109))) : (((((/* implicit */int) arr_13 [i_3])) & (((/* implicit */int) (unsigned short)65533)))))))));
        var_19 = ((/* implicit */unsigned short) (-(arr_12 [i_3])));
    }
}
