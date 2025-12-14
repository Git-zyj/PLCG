/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194556
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_11 |= ((/* implicit */_Bool) ((unsigned short) (signed char)127));
        /* LoopSeq 4 */
        for (short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            arr_6 [i_0] = (~(0));
            /* LoopNest 3 */
            for (unsigned short i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 3) 
                    {
                        {
                            var_12 |= ((/* implicit */signed char) ((arr_4 [i_2 + 2] [i_2 - 1] [i_2 - 1]) < (arr_4 [i_2 + 2] [12] [12])));
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_10 [i_1 - 1] [i_4 - 1])) : (arr_8 [i_1 + 1] [i_2 + 1])));
                        }
                    } 
                } 
            } 
            var_14 = ((/* implicit */unsigned short) arr_8 [(signed char)13] [i_1 + 1]);
        }
        for (short i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-110))) : (arr_13 [i_5])));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */int) arr_18 [i_0])) : (((/* implicit */int) (signed char)3))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 22; i_7 += 2) 
                {
                    for (short i_8 = 3; i_8 < 20; i_8 += 2) 
                    {
                        {
                            var_17 = (+(((/* implicit */int) (unsigned short)16383)));
                            arr_26 [i_0] [i_0] [i_6] [i_0] [i_0] |= ((/* implicit */long long int) ((unsigned short) arr_22 [i_8 + 2] [i_7 - 1] [i_5]));
                            var_18 = (!(((/* implicit */_Bool) (short)8984)));
                            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_6]))));
                        }
                    } 
                } 
            }
            var_20 = ((/* implicit */signed char) ((arr_3 [i_5]) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)8966)))))));
            arr_27 [(unsigned char)15] = ((/* implicit */int) (signed char)109);
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) arr_10 [i_0] [i_9 - 1]))));
            var_22 = ((/* implicit */unsigned long long int) ((arr_22 [i_9 - 1] [i_9] [i_9 - 1]) == (arr_22 [i_0] [i_0] [i_9 - 1])));
        }
        for (unsigned int i_10 = 2; i_10 < 22; i_10 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_0)))) / (arr_22 [2LL] [i_10 - 2] [i_10 - 2])));
            arr_33 [i_0] [i_0] [i_10 - 1] = ((/* implicit */unsigned short) (+(arr_5 [i_0] [i_10 - 1])));
            arr_34 [i_10 - 1] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
        }
        arr_35 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [(signed char)22])) ? (((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_28 [(short)2] [i_0] [i_0]))));
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) >= (((((/* implicit */int) ((var_10) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) * (((/* implicit */int) var_3))))));
}
