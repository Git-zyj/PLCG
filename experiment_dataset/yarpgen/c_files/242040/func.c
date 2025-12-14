/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242040
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)100)) < (((/* implicit */int) (signed char)127)))))));
                var_13 = ((/* implicit */signed char) arr_0 [i_0] [i_1]);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_14 = ((/* implicit */signed char) var_6);
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_2])))), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])) : (arr_2 [i_0]))) : (max((var_4), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_2])))))) : (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned int) (signed char)-105)), (2836544170U)))))));
                    arr_7 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-105)) + (2147483647))) << (((((/* implicit */int) (signed char)100)) - (100)))));
                }
                arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-2008946902088734455LL), (((/* implicit */long long int) 0U))))) ? (((/* implicit */int) (signed char)-104)) : ((-(((/* implicit */int) (signed char)49))))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 2; i_3 < 22; i_3 += 2) 
                {
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) arr_2 [i_4]);
                            var_17 = ((/* implicit */_Bool) arr_6 [i_1]);
                            arr_15 [i_0] [i_1] [i_3] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_1]))) | (min((arr_14 [i_0] [i_4] [i_3] [i_4] [i_3 - 1]), (var_4))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (signed char)-49)), (((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6970282406361117456ULL)))));
}
