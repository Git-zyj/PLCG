/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213181
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_0] [(signed char)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_3 [i_0 + 2] [i_0] [i_0 + 3])));
                    arr_10 [i_0] [i_1] [i_1] = ((var_5) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))));
                    arr_11 [5LL] [0] [3ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)248))))) ? (var_1) : (((/* implicit */int) (unsigned char)12))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned char) ((arr_2 [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) arr_8 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0 + 2]))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        arr_16 [i_3] [i_3] &= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (arr_15 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
            {
                arr_21 [(short)5] [(short)5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [7ULL] [1U] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((11632336252162187953ULL) > (((/* implicit */unsigned long long int) -1770523690)))))) : (arr_17 [i_4] [i_5])));
                arr_22 [i_5] [i_4] [i_5] [1LL] = ((/* implicit */short) ((((/* implicit */int) (signed char)105)) ^ (((/* implicit */int) (unsigned char)88))));
            }
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
            {
                arr_26 [i_3] [i_4] [i_6] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) (signed char)-105))));
                arr_27 [(unsigned char)3] = ((/* implicit */_Bool) ((var_10) / (((/* implicit */int) (unsigned char)24))));
                arr_28 [i_3] [i_3] [(_Bool)1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1162806790)) ? (((/* implicit */int) (short)10564)) : (((/* implicit */int) (short)10540))));
            }
            arr_29 [3LL] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_15 [i_3]) / (((/* implicit */long long int) 1476917133U))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_19 [i_4]))));
            arr_30 [i_3] [8LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1409039660U)) ? (arr_24 [i_3]) : (((/* implicit */unsigned int) var_1))));
        }
    }
    var_12 = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (min((((/* implicit */int) var_6)), (min((var_10), (((/* implicit */int) var_7))))))));
}
