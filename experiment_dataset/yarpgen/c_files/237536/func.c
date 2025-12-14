/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237536
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((arr_0 [i_0]) << (((arr_8 [i_0] [i_0] [i_2] [i_3]) - (626932527U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1158336340U))))))))));
                            var_16 = (~((+(arr_1 [i_2] [i_2]))));
                            /* LoopSeq 3 */
                            for (long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                            {
                                arr_14 [i_0] [i_0] = ((/* implicit */long long int) max(((~(arr_12 [i_0] [i_3] [i_2] [i_3] [i_4 + 1]))), ((+(arr_12 [i_0] [6LL] [i_0] [i_3] [i_4 + 1])))));
                                arr_15 [i_4] [i_1] [i_0] = ((/* implicit */unsigned int) ((max((8201650328103792058LL), (((/* implicit */long long int) arr_12 [i_0] [i_4 - 1] [i_2] [i_4 - 1] [i_2])))) / (((/* implicit */long long int) max((1158336340U), (((/* implicit */unsigned int) 2147483647)))))));
                            }
                            /* vectorizable */
                            for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                            {
                                var_17 = ((/* implicit */long long int) arr_17 [i_1] [11LL] [i_1] [i_2] [i_2]);
                                var_18 = ((/* implicit */unsigned int) (~(arr_1 [i_1] [i_5])));
                            }
                            for (long long int i_6 = 2; i_6 < 11; i_6 += 3) 
                            {
                                arr_21 [i_0] [i_1] [i_1] [i_1] [i_6 + 1] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_16 [2] [i_0] [7] [i_1] [i_0]))))))));
                                var_19 = ((min((arr_13 [i_0] [i_0] [i_0] [i_1] [i_0]), (8985994558064496843LL))) / (arr_13 [i_0] [i_1] [i_2] [i_2] [i_2]));
                                arr_22 [i_2] [i_1] [5U] &= ((/* implicit */int) (+(4294967268U)));
                            }
                            arr_23 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0] = ((long long int) arr_7 [i_3] [i_2] [i_0]);
                        }
                    } 
                } 
                arr_24 [i_0] = ((/* implicit */unsigned int) min((((long long int) arr_20 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_0])), (((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_1] [i_0])), (arr_19 [i_0] [0U] [i_0] [i_1] [i_1] [i_1])))) & ((+(8985994558064496843LL)))))));
                var_20 = ((/* implicit */long long int) min((arr_10 [i_0] [i_1]), (((arr_2 [i_0]) & (arr_2 [11U])))));
                var_21 = ((/* implicit */unsigned int) ((min((arr_7 [i_0] [i_1] [i_0]), (arr_7 [i_0] [i_1] [i_1]))) / (arr_7 [i_0] [i_0] [i_1])));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_10))));
}
