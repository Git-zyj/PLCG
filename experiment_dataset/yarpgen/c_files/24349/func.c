/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24349
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
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_20 -= ((/* implicit */unsigned short) (+(var_16)));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (long long int i_3 = 4; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((_Bool) ((unsigned int) min((((/* implicit */unsigned char) arr_6 [i_2])), (var_6)))));
                        arr_9 [i_3] [i_3] [13U] [i_3] = ((/* implicit */long long int) var_19);
                        arr_10 [i_0] [i_1 + 1] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned long long int) 4294967276U)), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) * (arr_1 [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (var_2))))) : ((+(((long long int) var_0))))));
                        arr_11 [(unsigned short)5] [i_1] [(unsigned short)5] = ((/* implicit */short) (signed char)-22);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            var_22 -= ((/* implicit */unsigned char) ((arr_12 [i_4]) > (var_14)));
            arr_14 [i_4] = ((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_4])) && (((/* implicit */_Bool) 4294967295U)))))) : (1475147043U)));
        }
        var_23 = ((/* implicit */int) arr_8 [i_0 - 1] [(unsigned char)2] [(unsigned char)2] [(unsigned char)2]);
    }
    /* LoopNest 2 */
    for (long long int i_5 = 2; i_5 < 19; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            {
                var_24 = ((/* implicit */short) (-(6U)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_7 = 1; i_7 < 20; i_7 += 1) 
                {
                    var_25 ^= ((/* implicit */short) (+(((/* implicit */int) var_12))));
                    var_26 = ((/* implicit */int) ((unsigned int) arr_21 [i_5] [i_6] [i_5]));
                }
            }
        } 
    } 
}
