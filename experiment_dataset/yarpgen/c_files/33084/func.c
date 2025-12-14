/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33084
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
    var_20 = ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) (+(max((((((/* implicit */int) var_19)) % (var_14))), (((/* implicit */int) (unsigned short)50955))))));
                var_21 = ((/* implicit */long long int) min((var_3), (((min((5554818158684071739ULL), (((/* implicit */unsigned long long int) (unsigned char)8)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_0] [i_0] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_22 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) min((arr_2 [i_2 + 1]), (arr_2 [i_2 - 1])))), (var_16)));
                                var_23 &= ((/* implicit */unsigned long long int) max((arr_0 [i_2 - 1] [i_0 + 2]), (((/* implicit */unsigned short) ((_Bool) var_3)))));
                                var_24 = ((/* implicit */long long int) arr_3 [i_1]);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) 5554818158684071739ULL))));
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    var_26 = ((/* implicit */signed char) 0ULL);
                    var_27 ^= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) 13510798882111488LL)), (5554818158684071739ULL))), (min((((/* implicit */unsigned long long int) (short)2582)), (18446744073709551615ULL)))));
                    var_28 = ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_5] [i_5]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_6 = 1; i_6 < 15; i_6 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1]);
                        var_30 = (~(((/* implicit */int) arr_13 [(signed char)0] [i_1] [(short)15] [5ULL] [i_5 + 1] [i_1] [6])));
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) var_19))));
                    }
                    var_32 = ((/* implicit */short) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) arr_6 [i_5 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) && (((/* implicit */_Bool) arr_5 [14LL] [i_1] [i_1]))))) : (((/* implicit */int) ((12891925915025479877ULL) >= (((/* implicit */unsigned long long int) arr_4 [i_1])))))))));
                }
                /* vectorizable */
                for (long long int i_7 = 2; i_7 < 14; i_7 += 3) 
                {
                    arr_23 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_7 + 2] [i_7 + 1] [i_0 + 2] [(unsigned short)16] [(unsigned char)11]))));
                    var_33 ^= ((/* implicit */int) var_4);
                    var_34 = ((/* implicit */unsigned long long int) arr_4 [i_1]);
                }
                var_35 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-2576))) & (arr_3 [i_0 - 1])));
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) & (((arr_21 [i_1] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 2])))))));
            }
        } 
    } 
}
