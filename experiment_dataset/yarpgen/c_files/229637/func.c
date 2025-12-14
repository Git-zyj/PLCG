/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229637
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
    var_19 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_12)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                {
                    arr_10 [i_0] [i_0 + 1] [6U] [i_2] [i_3] [i_3 + 1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_17))));
                    var_21 *= ((/* implicit */short) ((unsigned long long int) var_8));
                }
                for (short i_4 = 4; i_4 < 8; i_4 += 3) 
                {
                    arr_15 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned int) ((((var_6) + (((/* implicit */unsigned long long int) var_13)))) > (var_3)));
                    arr_16 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) var_18)) < (((/* implicit */int) var_16)))));
                }
                arr_17 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) % (((/* implicit */int) var_10))));
                /* LoopSeq 1 */
                for (short i_5 = 4; i_5 < 10; i_5 += 1) 
                {
                    arr_21 [i_0 + 1] [i_0] [i_2] [i_5] = ((/* implicit */unsigned long long int) ((short) var_14));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((unsigned long long int) var_1)))));
                    arr_22 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((var_13) + (2147483647))) << (((((((((/* implicit */int) var_7)) | (((/* implicit */int) var_16)))) + (4457))) - (23)))));
                    var_23 &= ((/* implicit */unsigned short) ((signed char) var_10));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */int) var_15)) % (var_4))))));
                }
                var_25 = ((/* implicit */int) ((long long int) var_4));
            }
            var_26 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_5))))) % (var_5)));
        }
        arr_23 [i_0] = var_13;
    }
    var_27 = ((/* implicit */long long int) ((unsigned char) var_15));
}
