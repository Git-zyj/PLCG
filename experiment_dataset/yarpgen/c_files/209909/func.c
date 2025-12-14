/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209909
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
    var_18 = ((/* implicit */_Bool) ((var_1) % (((/* implicit */unsigned int) var_5))));
    var_19 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)161))))));
    var_20 = ((/* implicit */unsigned short) max(((+(max((var_9), (var_9))))), (((/* implicit */long long int) (-(max((var_12), (((/* implicit */int) (unsigned short)41327)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0 - 2] = ((/* implicit */unsigned int) arr_0 [i_0 - 1]);
        arr_5 [i_0] = max((min((((/* implicit */int) arr_1 [i_0 + 2])), (var_5))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 2] [9]))))))));
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24208)) ? (((/* implicit */int) (unsigned short)35870)) : (((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) (unsigned short)41322)))))))));
    }
    for (long long int i_1 = 3; i_1 < 19; i_1 += 2) 
    {
        var_22 = ((_Bool) arr_7 [i_1 - 2]);
        /* LoopNest 2 */
        for (short i_2 = 4; i_2 < 19; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [i_1] = ((/* implicit */unsigned short) ((short) var_6));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 19; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            {
                                arr_18 [i_1] [i_1] [i_3] [i_1] [i_4 + 1] [i_4] [i_5] = max((min((((/* implicit */unsigned int) arr_15 [i_1] [i_1] [i_1 + 2] [i_2 - 2])), (arr_11 [i_1] [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */long long int) arr_15 [i_1] [i_1] [i_1 + 2] [i_2 - 2])) != (arr_17 [1LL] [i_1] [i_1 + 2] [i_1] [i_3])))));
                                var_23 = ((/* implicit */long long int) arr_6 [i_1]);
                                arr_19 [i_1] [i_1] [i_3] [i_2] [i_1 - 3] [i_4] = ((/* implicit */int) arr_9 [i_1]);
                                arr_20 [i_4] [i_1] [i_4] [i_1] [i_4 - 2] = ((/* implicit */short) arr_10 [i_1]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_6 = 1; i_6 < 20; i_6 += 1) 
                    {
                        arr_23 [i_1] = ((/* implicit */_Bool) arr_22 [i_1 - 3] [15ULL] [i_1] [i_1] [i_1 - 1] [i_1 - 2]);
                        arr_24 [i_1] [i_1] = ((/* implicit */unsigned char) (~((~(arr_9 [i_1])))));
                    }
                    arr_25 [14] [i_1] [i_2] [14] = ((/* implicit */unsigned short) min((arr_15 [i_1] [i_2] [i_1] [i_3]), (((/* implicit */int) max(((_Bool)1), (arr_21 [i_1] [i_1 - 2] [i_1] [i_2 + 2] [i_2]))))));
                    arr_26 [i_1 - 1] [i_1] [i_1 - 1] = ((/* implicit */unsigned int) var_16);
                }
            } 
        } 
    }
    var_24 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) & (var_16))) | (((/* implicit */long long int) ((/* implicit */int) var_6)))));
}
