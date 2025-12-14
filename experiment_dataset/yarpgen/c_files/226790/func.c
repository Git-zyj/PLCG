/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226790
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)96))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */signed char) var_12);
            /* LoopSeq 1 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                arr_10 [i_2] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)6581))));
                var_14 = ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]);
                var_15 += ((/* implicit */signed char) max(((unsigned short)6023), (arr_6 [2U] [i_1 + 1])));
                arr_11 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */signed char) ((short) max((((/* implicit */unsigned int) arr_8 [i_0] [i_1 + 1] [i_2] [i_0])), (565964245U))));
            }
        }
        for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_10);
            arr_15 [i_0] = ((/* implicit */signed char) arr_12 [i_0] [i_0]);
            var_16 ^= ((/* implicit */unsigned char) -2100114460);
            var_17 |= ((/* implicit */unsigned int) var_13);
        }
        /* vectorizable */
        for (long long int i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            var_18 -= ((/* implicit */int) (unsigned short)13022);
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_5 [i_0] [i_4 + 2] [i_4 - 1]))));
        }
        var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)13])) ? (arr_17 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)59499)))))));
    }
    var_21 += ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)13025))))))));
}
