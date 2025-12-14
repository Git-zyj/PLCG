/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199498
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
    var_10 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)-32757)), ((unsigned short)7138)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_4 [i_0] [i_1]) ? (var_0) : (((/* implicit */int) var_2)))))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (arr_6 [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [20ULL] [(signed char)3] = ((/* implicit */int) var_4);
                                arr_14 [i_0] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_1 [(unsigned short)0])) ? (arr_5 [i_1 + 1] [i_1] [i_4]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (var_0))))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((var_3) & (((/* implicit */long long int) ((/* implicit */int) var_4))))) >= (((/* implicit */long long int) arr_10 [i_1] [1LL] [i_1]))))) != (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned int) arr_7 [i_2] [i_1] [i_1] [i_0]))))) && (((/* implicit */_Bool) var_9)))))));
                }
            } 
        } 
    } 
}
