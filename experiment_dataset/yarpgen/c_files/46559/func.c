/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46559
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) ((arr_0 [i_1 - 2]) ? (max((((/* implicit */long long int) arr_0 [i_1 + 1])), (-7521423732530220484LL))) : (((/* implicit */long long int) ((arr_2 [i_1 - 1] [i_1 + 2]) % (((/* implicit */int) arr_0 [i_1 + 1])))))));
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1]))))) <= (arr_2 [15ULL] [i_1])));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] [i_4] |= arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1];
                                arr_14 [(unsigned short)17] [i_1] [11ULL] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((var_3) % (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_3] [(unsigned short)11] [i_3]))) != (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_2 [i_0] [i_0])) / (var_13)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_4);
}
