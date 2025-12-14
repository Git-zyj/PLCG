/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238280
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
    var_16 = var_7;
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 24; i_3 += 4) 
                    {
                        arr_10 [23] [(unsigned char)23] [i_0] [0LL] [(unsigned char)1] = ((/* implicit */long long int) arr_5 [(unsigned short)24] [(_Bool)1] [(unsigned char)19]);
                        var_17 = arr_9 [20LL] [(unsigned char)23] [i_0];
                        arr_11 [(unsigned char)23] [21U] [i_0] [(_Bool)1] [(unsigned char)9] [(unsigned char)17] = ((/* implicit */short) arr_1 [(unsigned char)7] [(_Bool)1]);
                        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 2; i_5 < 23; i_5 += 2) 
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */long long int) arr_5 [i_0 - 3] [(short)23] [i_2])) ^ (arr_1 [(unsigned char)22] [i_1])));
                            arr_18 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36))) != (arr_4 [i_5 + 2])));
                        }
                        for (long long int i_6 = 1; i_6 < 22; i_6 += 2) 
                        {
                            arr_21 [17] [12LL] [(unsigned short)14] [(_Bool)1] [(signed char)23] [i_0] [(unsigned char)4] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_14 [10U] [13LL] [3ULL] [(unsigned char)16] [(unsigned char)13])) << (((arr_13 [(signed char)22] [9] [15U]) + (820491543)))))));
                            arr_22 [(unsigned char)3] [8] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1LL))));
                        }
                        var_20 |= ((/* implicit */_Bool) (-(arr_0 [i_0 - 2])));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [(unsigned char)19] [i_0 + 2] [(_Bool)1] [i_0 - 1])) ? (((/* implicit */int) arr_12 [(unsigned char)8] [i_0 + 4] [(unsigned char)12] [i_0 - 3])) : (((/* implicit */int) arr_12 [(unsigned char)12] [i_0 + 2] [(unsigned short)9] [i_0 + 2]))));
                        /* LoopSeq 1 */
                        for (int i_7 = 2; i_7 < 23; i_7 += 4) 
                        {
                            var_22 -= ((/* implicit */unsigned char) ((arr_16 [i_7 + 1] [(unsigned short)15] [(unsigned short)10] [(unsigned char)11] [(unsigned char)3]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206))) : (((arr_6 [(signed char)11] [(unsigned char)15] [(_Bool)1]) ? (arr_2 [16ULL] [(unsigned char)0] [(_Bool)1]) : (3084544857U)))));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)125)))))));
                            var_24 = ((/* implicit */unsigned char) arr_25 [0LL] [i_0] [(unsigned char)19] [9] [(_Bool)1] [(unsigned short)7] [(unsigned char)23]);
                            var_25 = ((/* implicit */unsigned long long int) arr_17 [i_0] [22LL] [23U] [(signed char)16] [(_Bool)1] [(unsigned char)1]);
                        }
                    }
                    var_26 = ((/* implicit */unsigned long long int) ((arr_1 [i_0 - 2] [23ULL]) + (((/* implicit */long long int) ((/* implicit */int) arr_25 [(short)0] [i_0] [i_2] [(_Bool)1] [i_1] [i_0] [i_0 + 2])))));
                    var_27 &= ((/* implicit */unsigned char) ((_Bool) (unsigned char)105));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 24; i_9 += 3) 
                        {
                            {
                                arr_32 [(_Bool)1] [(signed char)6] [(unsigned short)12] [(unsigned char)18] [i_1] [22ULL] [(unsigned char)10] &= ((/* implicit */long long int) 2824312212234282819ULL);
                                var_28 = ((/* implicit */unsigned short) arr_23 [15LL]);
                                var_29 *= ((arr_7 [6ULL] [i_2] [i_0 + 2] [(unsigned char)18]) >> (((arr_15 [(unsigned char)20] [i_9 + 1] [(unsigned char)8] [i_9 - 2] [(short)3] [i_9 + 1]) - (2000449201))));
                                arr_33 [i_0] = ((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                    arr_34 [0LL] [i_0] [13U] = ((/* implicit */unsigned long long int) ((int) arr_15 [(_Bool)1] [i_0 + 4] [0] [i_0 + 1] [(_Bool)1] [i_0 + 3]));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_28 [(unsigned char)16] [i_0 + 1])) > ((~(((/* implicit */int) var_1))))));
    }
}
