/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30331
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max(((short)-29666), ((short)29666))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_3 [i_0])), (var_14)))) : (max((arr_7 [i_0] [i_1] [i_1] [i_2]), (((/* implicit */long long int) var_0))))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) max((var_2), (((/* implicit */int) var_10))))) ? (((((/* implicit */int) (short)-29638)) ^ (-983660608))) : (((/* implicit */int) max(((short)-29666), ((short)-7022)))))))));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                var_18 *= ((/* implicit */short) var_2);
                var_19 = ((/* implicit */long long int) ((((unsigned long long int) var_8)) & (((/* implicit */unsigned long long int) ((int) 9223372036854775807LL)))));
            }
            var_20 = ((/* implicit */unsigned long long int) var_0);
            var_21 = ((/* implicit */unsigned short) arr_7 [i_3] [i_3] [i_4] [i_4]);
        }
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            var_22 = var_9;
            var_23 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_19 [i_3] [i_3] [i_6]) / (-983660616)))) > (min((((/* implicit */unsigned long long int) arr_12 [i_3])), (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
        }
        /* LoopNest 2 */
        for (long long int i_7 = 3; i_7 < 9; i_7 += 3) 
        {
            for (int i_8 = 4; i_8 < 7; i_8 += 3) 
            {
                {
                    var_24 = ((/* implicit */_Bool) arr_18 [i_7 + 1] [i_7] [i_7 - 3]);
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_14 [i_3] [i_8 + 2] [i_8] [i_7 - 2]), (((/* implicit */unsigned int) var_7))))) ? (((((/* implicit */_Bool) arr_14 [i_3] [i_8 + 2] [i_8] [i_7 - 2])) ? (arr_14 [i_3] [i_8 + 2] [i_8 + 2] [i_7 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((arr_14 [i_3] [i_8 + 2] [i_8 + 2] [i_7 - 2]) ^ (arr_14 [0ULL] [i_8 + 2] [i_8 + 2] [i_7 - 2])))));
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) arr_13 [i_8 + 2] [i_8 - 3] [i_7 - 3]))))) ? (((((/* implicit */_Bool) arr_3 [i_3])) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) arr_14 [i_7 + 1] [i_7 + 1] [i_7] [i_7])))) : (((/* implicit */unsigned long long int) (-(arr_15 [i_8 - 1] [i_7] [i_7 + 1]))))));
                }
            } 
        } 
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((int) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (short)24437)) : (((/* implicit */int) (short)29664))))))));
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_26 [i_3] [i_3] [i_3]), (((/* implicit */long long int) arr_14 [i_3] [i_3] [i_3] [i_3]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3)))))))))));
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_9)))) || (((/* implicit */_Bool) ((unsigned char) arr_8 [i_3] [i_3] [i_3] [i_3])))))))));
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
    {
        arr_30 [6ULL] = ((((/* implicit */int) arr_24 [i_9] [i_9] [i_9])) & (((/* implicit */int) var_15)));
        arr_31 [i_9] [(signed char)1] = ((/* implicit */_Bool) var_12);
        arr_32 [i_9] [4ULL] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_9])) | (((/* implicit */int) var_10))));
        arr_33 [i_9] |= arr_1 [i_9] [i_9];
    }
    var_30 |= ((/* implicit */unsigned long long int) var_15);
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)24832)) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) (short)-29641))))) : (((/* implicit */int) min((min(((unsigned char)100), (((/* implicit */unsigned char) (signed char)124)))), ((unsigned char)13))))));
}
