/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199137
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_10 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((var_9) | (((/* implicit */int) arr_3 [i_0] [2LL]))))) : (arr_2 [i_0] [i_0])));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
        {
            var_11 = ((/* implicit */int) max((var_11), (var_8)));
            /* LoopSeq 1 */
            for (short i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    arr_14 [i_3] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])) * (((/* implicit */int) arr_10 [i_0] [i_3] [i_2] [i_3]))))));
                    arr_15 [i_0] [i_1] [i_2 - 1] [i_3] = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0]))));
                    var_12 += ((/* implicit */unsigned char) ((arr_8 [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2 + 1]) ^ (((/* implicit */int) ((short) arr_6 [i_0] [i_1] [i_2 + 1] [i_1])))));
                    var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2 - 1] [i_2 - 1] [i_3])) || (((/* implicit */_Bool) arr_9 [i_0] [i_2 - 2] [i_2 - 2] [5U]))));
                }
                var_14 &= ((/* implicit */int) (+((-(arr_5 [i_1])))));
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_2 + 1] [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_10 [i_2 - 2] [i_2] [i_2] [i_2]))));
            }
            var_16 = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
        }
        for (int i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
        {
            arr_19 [i_0] [i_4] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_5 [i_4])) || (((/* implicit */_Bool) arr_5 [i_4]))))));
            arr_20 [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0])) ? ((~(((/* implicit */int) (short)15)))) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_4] [i_4]))));
        }
        for (short i_5 = 3; i_5 < 11; i_5 += 2) 
        {
            var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-75))) < (arr_4 [i_0] [i_0])));
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) var_1)))))));
        }
    }
    var_19 *= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)192)))) & ((+(var_2))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 14173712462267109633ULL))))))));
}
