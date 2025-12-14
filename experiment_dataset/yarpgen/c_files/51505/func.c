/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51505
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
    for (signed char i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-10721)) + (((/* implicit */int) arr_4 [i_0 - 3] [i_0 + 1]))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) arr_0 [i_0 - 1]))));
        }
        var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-114))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                arr_11 [i_2] [i_3] = (~(((/* implicit */int) ((signed char) min((((/* implicit */long long int) (signed char)-95)), (2097120LL))))));
                arr_12 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_0 [i_3])), (((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) var_16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_2 [i_3])))) : (((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9326))) : (arr_9 [i_3])))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [(short)8] [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((arr_17 [i_2 + 1] [10ULL] [i_5]) + (((/* implicit */long long int) ((/* implicit */int) var_14))))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned char) (_Bool)1))))) ? (((((/* implicit */_Bool) (short)23897)) ? (arr_9 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)7]))))) : (arr_14 [i_2] [i_3] [i_4]))))));
                            arr_19 [i_2] [i_3] [(short)13] [i_2] [i_5] = ((/* implicit */short) arr_17 [i_2] [i_2 + 2] [i_2 + 1]);
                            arr_20 [(signed char)7] [i_2] = (!(((/* implicit */_Bool) arr_7 [i_2])));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_2 + 3] [i_5] [i_4] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_2]))))) : ((~(2097151)))))) : (min((var_4), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                            var_22 = ((/* implicit */unsigned short) max(((~((+(2347870298U))))), (max((((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))), (var_6)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-18)))))))))));
    var_24 |= ((/* implicit */unsigned short) var_16);
}
