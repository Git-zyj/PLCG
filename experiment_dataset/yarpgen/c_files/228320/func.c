/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228320
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
    var_15 ^= ((/* implicit */short) var_5);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */long long int) ((0ULL) - (((/* implicit */unsigned long long int) 615004607662541796LL))));
                        arr_9 [i_0] [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_2] [i_2 + 1])), (min((18200927083409681060ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (var_6))))))));
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (-(615004607662541796LL))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_5 = 4; i_5 < 11; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_6 = 1; i_6 < 11; i_6 += 3) 
                {
                    for (short i_7 = 4; i_7 < 12; i_7 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) ((arr_16 [i_0] [i_5 - 1] [i_6 + 2] [i_0 + 1]) - (arr_16 [i_0] [i_0] [i_6 - 1] [i_7 - 1])));
                            var_19 = ((/* implicit */_Bool) ((int) arr_8 [i_5 - 2] [i_4]));
                        }
                    } 
                } 
                var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((unsigned short) (short)16901)))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 2; i_8 < 12; i_8 += 3) 
                {
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        {
                            arr_24 [i_0] [i_0] [(short)5] [i_0] [i_9] [(unsigned char)10] = 615004607662541795LL;
                            arr_25 [i_0] [i_0] [i_4] [i_4] [i_0] [i_8] [i_9] = (-(((/* implicit */int) arr_23 [i_0 - 1] [i_5 + 2] [i_8] [(unsigned char)9] [i_8] [i_8] [i_8 - 2])));
                            arr_26 [i_4] [i_5] [i_0] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_11 [i_5 - 3] [i_8 - 2] [i_0 - 1]))));
                        }
                    } 
                } 
            }
            var_21 += ((unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) -615004607662541813LL)) : (0ULL)));
        }
    }
    var_22 = ((/* implicit */long long int) ((var_5) < (max((max((((/* implicit */long long int) (signed char)-15)), (-6147148728429324773LL))), (((/* implicit */long long int) (signed char)-3))))));
}
