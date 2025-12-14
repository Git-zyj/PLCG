/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201349
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        arr_10 [i_1 - 2] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) ((arr_9 [i_3] [i_2] [i_1] [i_0]) <= (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2 + 3]))))) : (((/* implicit */int) arr_0 [i_2 + 3])))) > (((/* implicit */int) (((~(15842399509628883312ULL))) == (((/* implicit */unsigned long long int) ((var_4) + (((/* implicit */int) (short)32767))))))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] |= ((/* implicit */signed char) (+(((((/* implicit */int) ((arr_5 [i_0] [i_1 + 1] [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-5346)))))) + (((int) (_Bool)0))))));
                        var_17 *= ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_2] [i_3])) ? ((~(arr_5 [i_2 + 2] [i_1] [i_1 - 1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_1] [i_3])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3])) && (((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3])))))) : (((((/* implicit */_Bool) var_10)) ? (var_1) : (arr_5 [i_1] [i_2] [i_3]))))));
                        arr_12 [i_3] = ((/* implicit */short) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63579))) < (arr_9 [i_3] [i_2] [i_1] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)32767)) >= (arr_7 [i_3] [i_1] [i_2 + 2] [i_3] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */unsigned long long int) 2022281697U))))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 1; i_4 < 21; i_4 += 3) 
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (-1843396698))));
                        arr_17 [i_0] [i_1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(1924165074U)))) && (((/* implicit */_Bool) ((var_14) / (((/* implicit */long long int) var_0)))))));
                        arr_18 [i_4] [i_2 + 2] [i_1] [i_0] = ((/* implicit */unsigned char) 2022281697U);
                    }
                    arr_19 [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((arr_13 [i_2 + 2] [i_2] [i_1] [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-29763))))))));
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */unsigned int) ((int) (short)-24464))) : (arr_13 [i_2] [i_2] [i_1] [i_1 - 2] [i_0])))))));
                    arr_20 [i_0] [i_2] = ((/* implicit */short) (-((~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-32757))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((var_3) > (((/* implicit */int) ((unsigned char) ((var_6) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))))));
}
