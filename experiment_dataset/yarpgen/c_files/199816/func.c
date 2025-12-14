/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199816
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [(_Bool)0] [(_Bool)0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned char)13)))))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            arr_6 [i_0] [(signed char)10] [12LL] &= ((/* implicit */unsigned int) min(((unsigned short)65533), (((/* implicit */unsigned short) var_1))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                arr_11 [i_1] = ((/* implicit */signed char) arr_1 [(_Bool)1]);
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_15 [3ULL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) arr_2 [i_0] [i_0]));
                    var_12 = ((/* implicit */signed char) ((((/* implicit */long long int) arr_4 [i_0] [i_1])) - (9223372036854775807LL)));
                }
                /* LoopSeq 1 */
                for (unsigned int i_4 = 1; i_4 < 17; i_4 += 3) 
                {
                    arr_19 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((arr_17 [i_1 + 1] [i_4 - 1] [i_4 - 1] [i_1 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 1] [i_2 - 1] [i_2 + 1] [i_4 + 2])))));
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (+(((/* implicit */int) arr_7 [i_0] [(signed char)16] [i_0] [i_0])))))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0])) ? ((-(((/* implicit */int) arr_12 [i_0])))) : (((/* implicit */int) arr_2 [i_2] [i_4]))));
                }
            }
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_18 [(_Bool)1] [i_5] [(signed char)4] [i_0]))));
            arr_22 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)14231), (((/* implicit */short) arr_8 [i_5]))))) ? (((/* implicit */int) max(((unsigned short)2), (((/* implicit */unsigned short) arr_8 [i_0]))))) : ((+(((/* implicit */int) arr_8 [i_5]))))));
        }
    }
    for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        var_16 &= arr_20 [i_6] [i_6] [(short)11];
        arr_26 [(signed char)0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((min((arr_21 [i_6] [(unsigned short)10] [i_6]), (((/* implicit */unsigned short) var_1)))), (((/* implicit */unsigned short) var_6)))))) <= (-9223372036854775807LL)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_17 = arr_2 [i_6] [i_7];
            arr_31 [i_6] [i_6] = ((/* implicit */unsigned int) (+(var_10)));
            var_18 = ((/* implicit */signed char) 6U);
            var_19 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_0)))) ? (arr_25 [i_6]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_10 [i_6] [i_6] [i_7])))))));
        }
        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            var_20 *= ((/* implicit */unsigned int) min((arr_0 [i_6] [i_8]), (min((((unsigned long long int) arr_25 [i_8])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_25 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22593))))))))));
            arr_34 [i_6] = var_2;
            var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((var_1) ? (((/* implicit */int) arr_23 [i_6])) : (((/* implicit */int) var_1)))))) ? (((((/* implicit */int) (unsigned short)7)) >> (((max((((/* implicit */long long int) var_7)), (arr_1 [i_6]))) + (8558LL))))) : (((/* implicit */int) var_7))));
        }
        arr_35 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (arr_28 [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [(unsigned char)6] [i_6] [i_6] [i_6])) || (((/* implicit */_Bool) var_2)))))) : (max((((arr_28 [i_6] [i_6]) << (((((/* implicit */int) arr_23 [i_6])) + (16744))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)58)))))))));
    }
    var_22 = ((/* implicit */long long int) (unsigned short)12);
}
