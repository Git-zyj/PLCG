/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25048
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [(short)7] [i_1] = ((/* implicit */long long int) max(((-(((unsigned int) (unsigned char)44)))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_2 - 1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -4084754376590269573LL)) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_2 + 2] [i_1] [i_1] [i_2]))))) : (((4084754376590269570LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 - 1] [i_1] [i_1] [i_2])))))));
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) min(((signed char)120), ((signed char)84))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_16 [(signed char)0] [i_4] [(signed char)0] [i_4] &= ((/* implicit */unsigned char) ((max((((/* implicit */long long int) ((unsigned char) var_8))), (var_4))) + (var_1)));
                                arr_17 [i_0] [i_0] [i_1] [i_1] [(short)6] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((-4084754376590269591LL), (((/* implicit */long long int) arr_0 [i_1])))))))) >= (((/* implicit */int) (signed char)-116))));
                            }
                        } 
                    } 
                    arr_18 [i_1] = ((/* implicit */signed char) var_4);
                }
            }
        } 
    } 
    var_14 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
}
