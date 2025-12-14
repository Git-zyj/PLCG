/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4512
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
    var_15 = ((/* implicit */short) var_4);
    var_16 = ((/* implicit */unsigned char) ((var_4) + (((/* implicit */long long int) max((438022862U), (((/* implicit */unsigned int) ((var_10) & (((/* implicit */int) var_1))))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        var_17 = min((((/* implicit */short) var_6)), (arr_1 [1U] [i_0 + 1]));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) < (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 2])))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) arr_4 [i_1]);
        arr_5 [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_1] [i_1]))));
        var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_1] [(unsigned char)5]))));
    }
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                arr_12 [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
                arr_13 [i_4] [i_3 + 2] [i_4] [i_4] = ((/* implicit */long long int) (~(((((/* implicit */int) arr_9 [i_3 - 1])) + ((~(((/* implicit */int) arr_6 [i_2] [i_4]))))))));
                var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_11 [i_4])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2]))))) : (((/* implicit */int) arr_11 [i_4]))))));
            }
            arr_14 [i_2] = var_12;
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                var_21 -= ((((/* implicit */int) ((unsigned char) arr_6 [i_2] [i_3 + 3]))) < (((/* implicit */int) ((((/* implicit */int) arr_3 [i_2] [i_3])) > (((/* implicit */int) (unsigned char)222))))));
                var_22 = ((/* implicit */short) max((((unsigned char) ((unsigned char) var_10))), (arr_7 [i_3 + 3])));
                var_23 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) var_4))))) ? (min((((/* implicit */long long int) arr_16 [i_2] [i_3 + 3] [i_5])), (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 127U)) ? (arr_10 [i_5] [i_5] [i_3] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
            }
        }
        for (short i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            var_24 ^= ((/* implicit */short) (+(((/* implicit */int) arr_9 [i_6]))));
            var_25 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned char) arr_7 [i_2])));
        }
        for (short i_7 = 1; i_7 < 18; i_7 += 1) 
        {
            arr_24 [i_7] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_23 [i_2])) && (((/* implicit */_Bool) arr_21 [i_7])))) ? (((/* implicit */unsigned long long int) 1212201325U)) : (arr_23 [i_7 - 1])));
            arr_25 [i_7] [(short)10] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((var_10) / (((/* implicit */int) arr_16 [i_7 - 1] [i_2] [i_7]))))), (((var_7) + (((((/* implicit */unsigned long long int) var_10)) ^ (13ULL)))))));
        }
        arr_26 [i_2] = ((((/* implicit */int) ((signed char) ((unsigned char) arr_20 [i_2] [i_2] [(unsigned char)4])))) & (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)48)), (var_10)))) ? (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_1))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_16 [i_2] [8] [4U])))))));
    }
}
