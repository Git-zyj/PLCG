/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3100
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
    var_16 = ((/* implicit */unsigned int) ((((var_12) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_0)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1] [i_2 + 3] [i_3] [i_3] [i_4 + 2] = ((/* implicit */unsigned long long int) arr_6 [(short)3] [(short)3] [i_2] [i_2] [i_2] [2U]);
                                arr_12 [i_4] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_4 - 1] [i_1] [i_2 + 2])) | (((/* implicit */int) arr_4 [i_4 + 1] [i_1] [i_2 + 1]))))) ? ((~(((/* implicit */int) arr_4 [i_4 - 2] [i_1] [i_2 + 3])))) : ((-(((/* implicit */int) var_2))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) arr_2 [(short)4] [i_1] [i_1]);
                }
                var_17 = ((/* implicit */unsigned long long int) (short)0);
                arr_14 [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_10 [(short)13] [(short)19] [i_1] [i_1])) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) (short)1)))), (((/* implicit */int) (short)-5))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) (-(-970015468468446252LL)));
    var_19 = ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) max((((/* implicit */int) var_6)), ((-(((/* implicit */int) var_10))))))) : ((-(var_1))));
}
