/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4858
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
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 7; i_0 += 1) 
    {
        arr_2 [6] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */long long int) 2705683776U)) : (arr_0 [i_0 - 3])));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 575001614)) ? (arr_1 [(_Bool)1] [(short)7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)0] [i_0])) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (9898989738169147339ULL))))));
        arr_3 [i_0 - 3] |= ((/* implicit */unsigned int) ((long long int) arr_1 [i_0 + 1] [i_0 - 3]));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_4 [(unsigned char)4] [i_1]))));
        arr_8 [6LL] [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) -575001624)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_13) == (-1438004353))))) : (((((/* implicit */_Bool) -575001599)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (511LL)))));
    }
    for (unsigned char i_2 = 1; i_2 < 15; i_2 += 1) 
    {
        var_21 += ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 2])) & (((/* implicit */int) arr_9 [i_2 + 4] [i_2 + 2]))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [i_4] [13ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2 + 3] [i_2 - 1])) ? (arr_13 [i_2 + 4] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 2])))))) ? (max((arr_13 [i_2 - 1] [i_2 + 1]), (((/* implicit */long long int) (-2147483647 - 1))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_11)) < (arr_13 [i_2 + 1] [i_2 + 4])))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) max((var_22), ((-(var_12)))));
                                var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) arr_17 [(_Bool)1] [i_2 + 1] [i_2 + 1] [16LL] [i_3] [i_3])), (arr_11 [i_2 + 4] [i_3])))) ? ((-(((/* implicit */int) arr_11 [i_2 - 1] [9ULL])))) : (((/* implicit */int) max((arr_17 [i_2 + 1] [i_2 + 3] [i_2 + 4] [6] [i_3] [i_3]), (arr_17 [i_2] [i_2 + 1] [i_2 + 2] [i_5] [i_5] [i_6]))))));
                                var_24 = ((/* implicit */_Bool) min((min((arr_11 [11U] [i_2 + 3]), (arr_11 [i_2] [i_2 + 2]))), (((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)44122)), (512LL)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 506LL)) ? (((/* implicit */long long int) var_10)) : (min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)18))))), (min((((/* implicit */long long int) (unsigned char)238)), (-512LL)))))));
}
