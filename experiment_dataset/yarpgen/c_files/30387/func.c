/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30387
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            arr_4 [i_1] = ((/* implicit */signed char) ((unsigned short) var_8));
            var_15 = ((/* implicit */_Bool) (+(arr_3 [i_1 - 2])));
        }
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            var_16 = ((/* implicit */long long int) ((signed char) arr_1 [i_0]));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_3 [i_0]))));
                var_18 *= arr_2 [i_0] [(unsigned short)6] [i_0];
            }
        }
        for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            arr_11 [i_0] [i_0] [i_4] = ((/* implicit */short) (~(0)));
            var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_4])) | (((arr_6 [i_0] [(signed char)1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)125))))));
        }
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (signed char)3))) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) var_5)))))));
        var_21 += ((/* implicit */short) ((int) var_0));
    }
    var_22 = ((/* implicit */long long int) var_11);
}
