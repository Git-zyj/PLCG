/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222832
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
    var_20 += ((/* implicit */_Bool) var_17);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) - ((+(((/* implicit */int) arr_1 [(signed char)7]))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            var_22 += ((/* implicit */short) (+(((/* implicit */int) (short)0))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                var_23 = ((/* implicit */_Bool) (signed char)95);
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31467)) & (((/* implicit */int) arr_1 [i_0])))))));
                var_25 |= ((((/* implicit */int) arr_8 [i_0])) / (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1])));
            }
            for (short i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                arr_14 [i_0] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (short)6)) - (((/* implicit */int) arr_3 [i_1 - 1]))));
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (short)0))));
            }
        }
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            var_27 = ((/* implicit */short) (+(((((/* implicit */int) arr_9 [i_4])) + (((/* implicit */int) (short)6))))));
            var_28 = (-(((/* implicit */int) arr_7 [i_4] [i_4] [i_0])));
        }
        var_29 = var_11;
        /* LoopSeq 1 */
        for (unsigned short i_5 = 1; i_5 < 24; i_5 += 3) 
        {
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) arr_2 [i_0] [i_5 - 1]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                var_31 ^= ((/* implicit */long long int) arr_20 [i_5]);
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_5 - 1] [i_5 + 1] [i_5 - 1])) > (((/* implicit */int) arr_22 [i_5 + 1] [i_5 + 1] [i_5 + 1]))));
            }
        }
    }
}
