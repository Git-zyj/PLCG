/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29972
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [2U] [i_0] [i_3] [i_4 + 1] [i_0] = ((/* implicit */signed char) arr_13 [5] [(signed char)7] [5] [i_3]);
                                arr_15 [i_0] [i_1 + 2] [i_0] [i_3] [i_1 + 2] [i_2] [i_4] = ((/* implicit */long long int) var_5);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) -8103198424636115753LL);
                    arr_16 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((var_7), (((/* implicit */int) var_3))))) >= (((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [(_Bool)1] [i_1 + 2])))))));
                    var_18 = ((/* implicit */short) ((min((((/* implicit */unsigned int) var_13)), (1687376093U))) < (((/* implicit */unsigned int) ((int) var_12)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((unsigned int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)127)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 18446744073709551604ULL)) ? (var_2) : (((/* implicit */int) (_Bool)1))))))))))));
}
