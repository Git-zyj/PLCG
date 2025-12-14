/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206282
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_15 = ((((/* implicit */_Bool) arr_0 [i_0])) || (var_0));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            arr_5 [i_0] [1] [i_0] = ((/* implicit */unsigned short) ((((arr_2 [i_0]) / (((/* implicit */int) (_Bool)1)))) | (min((min((var_10), (((/* implicit */int) arr_0 [(unsigned short)10])))), (((/* implicit */int) ((unsigned char) arr_0 [i_0])))))));
            var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (arr_4 [i_0])))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_13))))));
        }
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            arr_8 [i_2] = ((/* implicit */unsigned char) var_14);
            /* LoopSeq 4 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_17 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_11 [i_0] [i_3 - 1] [i_3] [12ULL])));
                /* LoopSeq 2 */
                for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    var_18 = var_10;
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) var_5)) ^ (1246719039))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) var_8)))))))));
                    var_20 &= ((/* implicit */unsigned char) arr_11 [i_2] [i_2] [14ULL] [12U]);
                }
                for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 1) 
                {
                    arr_16 [i_0] [i_0] [7U] [i_3] [i_3] = ((/* implicit */signed char) var_13);
                    /* LoopSeq 1 */
                    for (signed char i_6 = 2; i_6 < 14; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) && ((_Bool)0))))));
                        arr_21 [i_0] [i_2] [i_3 - 1] [i_3] [i_3 - 1] [(short)5] [12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_2 + 1]))));
                    }
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (arr_18 [i_0] [i_2] [i_5 + 2])));
                    var_23 |= ((/* implicit */_Bool) arr_0 [i_0]);
                }
                var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))));
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0] [6] [i_3] [6] [i_2 - 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 1] [i_2]))) : (arr_7 [i_3 - 1] [i_3 - 1] [i_2 - 1])));
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
            {
                var_26 ^= ((((/* implicit */_Bool) ((unsigned char) var_9))) && (((/* implicit */_Bool) var_14)));
                var_27 = ((/* implicit */unsigned char) var_13);
                arr_25 [8LL] = ((/* implicit */signed char) ((arr_22 [(unsigned char)0]) ^ (((/* implicit */int) (_Bool)1))));
                arr_26 [i_0] [i_2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [1] [9LL] [i_2] [i_0] [i_0])) ? (((((/* implicit */int) arr_17 [(short)0] [i_2] [i_7])) ^ (((/* implicit */int) arr_23 [i_7] [i_2 + 2])))) : (((/* implicit */int) arr_24 [2LL] [2LL] [i_7] [i_7]))));
            }
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
            {
                arr_30 [6] [i_2] [(signed char)14] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)1))) ? (((var_7) % (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) ((int) var_7)))));
                var_28 = ((/* implicit */unsigned char) ((var_10) ^ (arr_22 [i_2 + 2])));
            }
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
            {
                arr_34 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) var_4);
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) arr_0 [(unsigned short)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned char)6]))) : (arr_11 [i_0] [i_2] [i_9] [(unsigned short)14])))));
            }
        }
    }
    var_30 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_0))))) != (((/* implicit */int) var_11)))))));
}
