/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33473
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) > (arr_1 [i_0] [i_0])));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned long long int) ((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) arr_0 [(short)0]))));
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (+(((/* implicit */int) (unsigned char)26)))))));
        }
        for (int i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            arr_8 [(_Bool)1] [i_0] [i_0] = arr_7 [i_2 + 3] [i_0] [(short)6];
            arr_9 [i_0] [(unsigned char)10] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 - 2] [i_2])) ? (((((/* implicit */_Bool) arr_6 [i_0] [(short)1] [i_0])) ? (-254759371) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (short)-7496)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) arr_6 [i_0] [(unsigned short)10] [i_2]))))));
            var_16 = ((/* implicit */int) (!(arr_7 [i_0] [i_0] [i_2])));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_14 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3])) >> (((/* implicit */int) (unsigned char)19))))) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) arr_0 [i_0]))));
                var_18 = ((((/* implicit */_Bool) arr_11 [2])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)0)));
                arr_17 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned char)5])) : (((/* implicit */int) arr_3 [i_0] [i_3]))));
            }
        }
        var_19 &= ((/* implicit */unsigned int) (~((((_Bool)1) ? (((/* implicit */int) (signed char)(-127 - 1))) : (arr_5 [i_0] [(_Bool)1])))));
    }
    var_20 = (!(((/* implicit */_Bool) var_4)));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min(((short)26885), (((/* implicit */short) var_2))))) - ((+(((/* implicit */int) (short)0))))))) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) var_2))));
}
