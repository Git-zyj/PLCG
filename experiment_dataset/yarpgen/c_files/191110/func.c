/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191110
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
    var_10 = ((/* implicit */unsigned int) var_7);
    var_11 = ((/* implicit */int) var_5);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (arr_3 [i_1 - 3] [i_1 + 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2]))) : (min((((/* implicit */unsigned long long int) (unsigned char)11)), (134086656ULL))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_14 [(_Bool)1] [(unsigned short)18] [i_2] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (signed char)66))) ? (min((((int) 288230376151711743LL)), (((/* implicit */int) arr_8 [i_0] [(short)4] [i_0])))) : (((/* implicit */int) ((_Bool) ((long long int) (unsigned short)60814))))));
                                arr_15 [i_0] [i_1 + 1] [i_0] [i_0] [2] = ((/* implicit */unsigned int) arr_10 [5ULL] [i_3] [i_2] [i_1 + 1]);
                                arr_16 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max((((unsigned char) 67108864U)), (((/* implicit */unsigned char) var_5))))) : (((/* implicit */int) (signed char)-56))));
                                var_13 = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((_Bool) ((((((/* implicit */int) arr_5 [i_0] [i_3] [i_0])) + (2147483647))) << (((17816652440683114213ULL) - (17816652440683114213ULL))))))) : (((/* implicit */long long int) ((_Bool) ((((((((/* implicit */int) arr_5 [i_0] [i_3] [i_0])) - (2147483647))) + (2147483647))) << (((17816652440683114213ULL) - (17816652440683114213ULL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_25 [i_0] = ((/* implicit */short) (signed char)66);
                                var_14 *= ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [12LL] [i_5] [4ULL] [(unsigned short)3] [4ULL])) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_3 [i_5] [i_5])) ? (((/* implicit */int) (short)-24481)) : (((/* implicit */int) (short)24520)))) : (((/* implicit */int) arr_20 [i_1 - 1] [i_1] [i_1 + 1]))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_12 [i_0] [i_1 + 1] [11LL] [i_2] [i_2]))));
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22785)) ? (((/* implicit */int) (_Bool)1)) : (0)))) ? (((/* implicit */int) min((arr_5 [(unsigned char)10] [(unsigned char)10] [i_0]), (arr_5 [(signed char)6] [i_0] [i_0])))) : (((/* implicit */int) max((var_3), ((signed char)7)))))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((259259655U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)24520))))))));
        arr_26 [i_0] = ((/* implicit */unsigned long long int) var_4);
    }
    var_18 += ((/* implicit */unsigned short) var_1);
    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((var_4), (var_4)))) + (2147483647))) >> (((min((var_0), (var_2))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
}
