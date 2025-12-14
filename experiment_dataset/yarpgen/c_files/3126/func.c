/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3126
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
    var_20 |= ((/* implicit */_Bool) (+(((unsigned int) ((((/* implicit */unsigned int) var_7)) == (var_19))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_2 - 1] [i_2 - 1]))) : (16383U))) >> (((max((arr_7 [i_0] [i_0] [(_Bool)1]), (((/* implicit */long long int) ((((/* implicit */_Bool) 507305513148555002ULL)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_3]))))))) - (7679LL)))));
                        var_22 = ((/* implicit */long long int) 17939438560560996595ULL);
                        var_23 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_9)), (min((507305513148555002ULL), (((/* implicit */unsigned long long int) var_7))))));
                        var_24 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 2] [i_2 + 1])) ? (arr_11 [i_2 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_13)))) ? ((+(var_13))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) + (((/* implicit */int) arr_17 [3] [3] [i_2 - 2] [3] [i_2 - 1])))))));
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) ((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [(_Bool)1])), (arr_5 [i_1] [(unsigned short)7] [i_5]))))))))));
                                var_27 = ((/* implicit */int) arr_11 [i_1]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        var_28 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((arr_15 [i_6] [(short)2]), (((/* implicit */unsigned int) arr_4 [i_2]))))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)-13450)) : (((/* implicit */int) (_Bool)1)))) : (max((var_4), (((/* implicit */int) arr_4 [i_2])))))), (((/* implicit */int) var_16))));
                        var_29 ^= ((/* implicit */long long int) var_17);
                        arr_22 [i_0] [i_1] [i_0] [i_6 + 2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_16 [i_0] [i_0] [i_0] [i_0] [(short)16]) >= (17939438560560996614ULL)))), (max((((((/* implicit */_Bool) 507305513148555002ULL)) ? (507305513148555012ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17939438560560996602ULL)) || (((/* implicit */_Bool) arr_20 [i_0] [i_0] [16LL] [i_6])))))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)21868)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (signed char)110))));
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            var_31 = ((/* implicit */signed char) arr_18 [(unsigned short)2] [i_1] [i_1]);
                            var_32 = ((/* implicit */short) ((var_9) == (((/* implicit */long long int) arr_20 [i_7] [i_0] [i_0] [8LL]))));
                        }
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((-368540108) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))), (23LL)))) || (((/* implicit */_Bool) var_4)))))));
                            var_34 = ((/* implicit */short) (_Bool)1);
                            var_35 = var_7;
                            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (-(7U)))) ? (((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */long long int) (~(var_10)))) : (((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (signed char)9))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_0] [i_0])) == (((((/* implicit */_Bool) var_18)) ? (arr_8 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)21851)))))))))));
                        }
                    }
                }
            } 
        } 
    } 
}
