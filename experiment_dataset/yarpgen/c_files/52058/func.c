/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52058
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
    var_16 = ((/* implicit */int) (unsigned char)20);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_8 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_3] [(unsigned char)9] [i_3])) ? (((/* implicit */int) arr_2 [(short)0] [i_1] [i_1])) : (((/* implicit */int) arr_2 [(signed char)11] [i_2] [i_0]))));
                        var_17 = arr_3 [i_3] [i_0];
                    }
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        arr_11 [7LL] [(unsigned char)2] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_2]), (((/* implicit */short) ((unsigned char) arr_1 [i_4]))))))) ^ (((min((1441373044U), (((/* implicit */unsigned int) var_0)))) ^ (var_14))));
                        arr_12 [i_4] [i_2] [i_1] |= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_4 [i_0] [i_0] [10]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 11; i_6 += 1) 
                        {
                            {
                                var_18 &= arr_10 [i_2] [i_2 + 1] [(short)8] [i_2];
                                var_19 = ((/* implicit */int) 1021047519U);
                                arr_21 [0] [0] [i_2] [i_5] [i_5] [11LL] [0] = arr_2 [i_0] [8LL] [i_2];
                                var_20 |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [i_2 + 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_2 + 1])))), (((((/* implicit */int) var_7)) | (((/* implicit */int) arr_0 [i_2 - 2]))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((-2360708069737268150LL) / (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 - 3] [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_10 [i_0] [i_1] [i_1] [(unsigned char)5]), (((/* implicit */long long int) (unsigned char)20))))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_5])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_15 [i_0] [i_1 + 3] [i_2] [i_5] [i_1 + 3])), (2065948633)))))))));
                            }
                        } 
                    } 
                    arr_22 [i_2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((int) ((((/* implicit */int) arr_13 [i_0] [i_1 - 3] [i_1] [9] [i_1 - 3])) - (((/* implicit */int) arr_4 [(_Bool)0] [i_1] [i_2])))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_2 + 1] [i_1 - 1]))) / (var_6)))));
                    var_22 |= ((/* implicit */_Bool) ((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) arr_1 [i_1 + 2]))))))));
                }
            } 
        } 
    } 
}
