/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44775
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
    var_17 = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) ((unsigned int) var_14))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? ((~(((/* implicit */int) (signed char)74)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)70)) && (((/* implicit */_Bool) (signed char)87)))))))) ? (min((min((-1), (((/* implicit */int) var_0)))), (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-75)) ? (15198742831789984441ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14)))))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) ((short) var_15)))))));
    var_19 = ((/* implicit */unsigned int) var_0);
    var_20 |= ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))));
        var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)8962)) ? (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (15036762638086363961ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) var_15)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            var_23 = ((/* implicit */_Bool) ((int) (~(((/* implicit */int) arr_4 [i_1] [i_1 - 1])))));
            /* LoopSeq 2 */
            for (long long int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (signed char)-14))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)63))))) : ((+(arr_5 [i_0] [i_2] [i_2 + 2])))));
                var_25 ^= ((/* implicit */int) (+((-(var_2)))));
                arr_9 [i_0] [(unsigned short)6] [i_1] [i_1 - 1] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_0 [8])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_5)))));
            }
            for (unsigned int i_3 = 3; i_3 < 14; i_3 += 3) 
            {
                var_26 = ((/* implicit */long long int) (unsigned char)124);
                arr_12 [i_1] [i_1] = ((/* implicit */short) 9223372036854775807LL);
                var_27 = ((/* implicit */signed char) ((short) arr_11 [i_0] [i_1] [i_3 - 3] [i_3]));
            }
        }
    }
}
