/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227792
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
    var_15 = ((/* implicit */signed char) ((int) ((unsigned long long int) 0ULL)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */short) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) ((-1LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_2 [i_2 - 1]) : (((/* implicit */int) min((arr_0 [i_0]), (arr_1 [i_2 - 1]))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [i_0] [16U] = arr_5 [i_3] [i_2];
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            var_16 ^= ((/* implicit */unsigned long long int) ((unsigned char) max((((((/* implicit */_Bool) var_3)) ? (1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 + 2]))))), (arr_4 [i_0] [i_0] [i_0]))));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_6 [i_0] [i_1] [i_4 + 1] [22]))));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 2; i_5 < 22; i_5 += 2) 
                        {
                            var_18 += ((/* implicit */unsigned long long int) (~(arr_7 [i_5] [i_5 - 2] [i_5])));
                            arr_16 [i_5 - 1] [i_3] [i_3] [i_1] [i_1] [i_1] [17ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 25U)) ? (arr_4 [i_2 - 1] [i_2] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
                        }
                    }
                }
            } 
        } 
    } 
}
