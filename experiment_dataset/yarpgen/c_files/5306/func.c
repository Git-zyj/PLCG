/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5306
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min((3704303705U), (((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_2 [i_0])))))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_11)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)111))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) : (arr_0 [i_0] [i_0])));
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            var_17 = ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]);
            var_18 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_4 [4ULL] [i_1] [i_1])))) || (((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_4 [i_0] [(unsigned char)7] [i_1]))))));
        }
        for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            arr_9 [i_0] |= ((/* implicit */long long int) (unsigned char)7);
            var_19 = ((/* implicit */signed char) ((((((/* implicit */int) arr_6 [i_0] [i_2])) + (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [0])) : (((/* implicit */int) var_13)))))) >> (((/* implicit */int) ((((arr_1 [i_0]) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_2])))) != (((((/* implicit */_Bool) 3448002362U)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_8)))))))));
            var_20 = ((/* implicit */long long int) arr_7 [i_0] [i_2]);
        }
        for (long long int i_3 = 3; i_3 < 11; i_3 += 4) 
        {
            var_21 = ((/* implicit */long long int) arr_1 [i_3]);
            /* LoopSeq 4 */
            for (int i_4 = 1; i_4 < 12; i_4 += 4) 
            {
                var_22 = ((/* implicit */signed char) var_9);
                arr_16 [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_4 + 1])) ? (var_2) : (((/* implicit */int) arr_2 [i_4 - 1])))) % (((/* implicit */int) max((arr_2 [i_4 - 1]), (((/* implicit */unsigned short) arr_5 [i_3 + 2])))))));
                arr_17 [(short)9] [i_3] [i_3] [i_0] = arr_15 [i_0] [i_0] [i_4] [i_4];
                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) / (arr_0 [i_0] [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0] [i_4 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_3 - 2] [i_4 - 1])))))))));
                var_24 = ((/* implicit */unsigned int) ((arr_7 [i_3 - 2] [i_3 - 2]) / (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_10 [i_4] [i_3] [i_4 - 1])), (3448002360U))))));
            }
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                var_25 = ((/* implicit */unsigned short) 18446744073709551603ULL);
                var_26 -= ((/* implicit */long long int) (unsigned short)65533);
            }
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                arr_22 [i_0] [(_Bool)1] [i_6] &= ((/* implicit */long long int) 268402688);
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) var_15)) == (arr_7 [i_3] [(unsigned char)5]))) ? (arr_20 [i_3 - 2] [i_3 - 1] [i_6] [i_3 - 3]) : (((/* implicit */long long int) (((_Bool)1) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0])))))))))));
            }
            for (int i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                var_28 = ((/* implicit */short) max((arr_7 [i_0] [i_0]), (((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) -268402689)))), (arr_12 [i_0] [i_3 + 2] [i_3 - 1] [i_0]))))));
                arr_25 [i_3] [i_3] [i_7] [(short)2] = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (unsigned char)64)) + (arr_24 [i_0] [i_3] [i_7] [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_0])) && (((/* implicit */_Bool) (unsigned char)0)))))))));
                arr_26 [i_0] [i_3] = ((/* implicit */unsigned int) ((signed char) ((unsigned char) max((((/* implicit */unsigned int) arr_1 [i_3 - 3])), (3448002362U)))));
            }
            var_29 -= ((/* implicit */signed char) ((var_7) == (((((/* implicit */_Bool) arr_24 [i_3 - 1] [i_3] [i_3 - 2] [i_3])) ? (var_15) : (((/* implicit */unsigned int) arr_24 [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3]))))));
        }
        arr_27 [i_0] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (_Bool)1))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_8 = 3; i_8 < 11; i_8 += 3) 
    {
        arr_30 [(unsigned char)0] [(unsigned char)0] &= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)191))));
        var_30 = ((/* implicit */signed char) ((arr_11 [(short)4]) <= (arr_11 [i_8 - 1])));
    }
}
