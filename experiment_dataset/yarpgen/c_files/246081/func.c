/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246081
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) (_Bool)0))));
            var_11 = ((/* implicit */unsigned char) arr_2 [i_0]);
        }
        for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_12 = ((/* implicit */signed char) (-(-712871635)));
                var_13 = ((/* implicit */unsigned short) arr_9 [i_2 + 1] [i_2] [i_3] [i_3]);
            }
            var_14 = ((/* implicit */unsigned short) min((arr_7 [i_0]), (((/* implicit */long long int) 131008U))));
        }
        var_15 *= ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) / (arr_0 [i_0])))), (min((((/* implicit */unsigned int) max(((unsigned char)253), (((/* implicit */unsigned char) arr_1 [i_0] [i_0]))))), (4294967295U)))));
    }
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_9))));
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        for (short i_5 = 1; i_5 < 15; i_5 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    var_18 ^= ((/* implicit */unsigned int) arr_16 [i_5 + 3] [i_5 + 3]);
                    var_19 = ((/* implicit */unsigned int) arr_12 [i_4]);
                }
                arr_17 [i_4] [(_Bool)1] = ((/* implicit */int) arr_12 [i_5]);
                var_20 = ((/* implicit */unsigned short) (short)401);
                arr_18 [i_4] [i_4] [i_4] = ((/* implicit */long long int) arr_13 [i_5]);
            }
        } 
    } 
}
