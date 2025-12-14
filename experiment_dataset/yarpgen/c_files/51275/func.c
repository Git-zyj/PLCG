/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51275
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)340))) : (8593760551299037640ULL))), (((/* implicit */unsigned long long int) max(((unsigned short)16383), ((unsigned short)46210))))))))));
    var_16 = ((/* implicit */int) var_7);
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_7))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_10 [0ULL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((min((max((268433408ULL), (8997930411009281712ULL))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 1])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(arr_9 [i_3] [i_3] [i_0] [i_3]))))))));
                            var_18 ^= arr_0 [i_2];
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    for (short i_5 = 3; i_5 < 22; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [16ULL] [14U] [(signed char)7] [i_6 + 1] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_2 [i_0] [i_0 + 2] [i_6 + 1])))) | (((/* implicit */int) ((short) arr_2 [i_0] [i_0 + 2] [i_6 + 1])))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))))) | (0ULL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 ^= ((/* implicit */short) (+(((/* implicit */int) var_4))));
}
