/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246060
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (max((-4876558810604072041LL), (((/* implicit */long long int) var_8)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_3 [i_1])))), ((~(((/* implicit */int) var_2))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1]))) - (var_7))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_4 [i_1] [i_1] [i_1 + 1])) / (9223372036854775807LL))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_14 [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_3] [(short)17] [i_1 - 1] [i_0])) == (((/* implicit */int) arr_1 [i_0])))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) max((4876558810604072037LL), (((/* implicit */long long int) (_Bool)1)))))))) ? (((((/* implicit */unsigned long long int) var_8)) / (arr_10 [i_1 + 1]))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (-1358990470141386450LL) : (((/* implicit */long long int) -2138955947)))), (((/* implicit */long long int) (_Bool)1)))))));
                            arr_15 [i_3] [(signed char)16] [i_2] [i_3] = ((/* implicit */long long int) (_Bool)1);
                        }
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_8 [i_0] [i_0] [i_1 - 1] [i_1 + 1]), (arr_8 [i_0] [i_1 - 1] [i_1 + 1] [i_0]))))));
                arr_17 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_10 [(short)0]))))))) : (((/* implicit */int) var_0))));
            }
        } 
    } 
}
