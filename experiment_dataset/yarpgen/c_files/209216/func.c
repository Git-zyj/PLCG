/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209216
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
    var_11 = ((/* implicit */int) ((min((((/* implicit */int) var_7)), (((((((/* implicit */int) (short)-1)) + (2147483647))) << (((((/* implicit */int) var_5)) - (241))))))) >= (((/* implicit */int) var_6))));
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (!((_Bool)1))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) -1972665926))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [(unsigned short)21]);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                var_14 |= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_0]))));
                var_15 ^= ((/* implicit */unsigned char) arr_10 [i_1] [i_2] [i_1] [i_0]);
            }
            var_16 -= (~(max((((((/* implicit */int) (short)-29706)) | (((/* implicit */int) var_8)))), ((~(((/* implicit */int) (unsigned char)7)))))));
        }
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-122)))))));
            arr_13 [i_0] [i_0] [i_3] = arr_6 [i_0] [i_0] [i_3];
        }
    }
    var_18 = ((/* implicit */unsigned short) var_5);
}
