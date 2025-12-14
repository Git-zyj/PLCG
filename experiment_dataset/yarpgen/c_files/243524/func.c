/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243524
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 ^= ((/* implicit */_Bool) (-(((arr_0 [i_0 - 1]) + (arr_0 [i_0 - 1])))));
                arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned int) var_6))))) % (max((((/* implicit */unsigned long long int) ((arr_3 [i_0 - 1] [15LL] [i_1]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))), (((unsigned long long int) var_4))))));
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 24; i_2 += 1) 
                {
                    arr_11 [1] [i_2 - 2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_9 [i_0 - 1] [(_Bool)1] [i_2 - 1])) + (2147483647))) << ((((-(arr_6 [i_0]))) - (215005811U)))))), ((((_Bool)0) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                    var_12 = ((/* implicit */unsigned char) var_7);
                    arr_12 [(signed char)1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [2U] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 24; i_3 += 4) 
                    {
                        for (long long int i_4 = 4; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_13 = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_4 - 1]))) ^ (min((((/* implicit */unsigned long long int) arr_15 [i_4] [i_1] [i_0 - 1])), (arr_1 [16U])))))));
                                var_14 ^= ((/* implicit */long long int) max((var_6), (((/* implicit */short) (((!(((/* implicit */_Bool) (short)2210)))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_15 = ((/* implicit */unsigned int) (signed char)8);
                    arr_20 [i_5] = ((/* implicit */unsigned char) ((unsigned short) var_3));
                }
                var_16 = ((/* implicit */long long int) (((_Bool)1) && ((_Bool)0)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_4);
}
