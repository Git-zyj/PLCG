/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30735
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
    var_10 = ((/* implicit */long long int) ((((4191780534677696218LL) < (((/* implicit */long long int) 3930133915U)))) ? (((/* implicit */int) ((((long long int) var_2)) >= (((/* implicit */long long int) ((((/* implicit */_Bool) -6006575188405814944LL)) ? (((/* implicit */int) (short)0)) : (805306368))))))) : (((int) min((var_7), (((/* implicit */long long int) var_6)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1 + 2] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_1 + 2])) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (arr_3 [i_1]))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((arr_12 [i_1] [i_3 + 1] [(signed char)9] [i_1]) ? (((((((arr_4 [4LL]) ? (arr_9 [i_0] [i_0] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0 + 1]))))) + (9223372036854775807LL))) << (((((arr_15 [i_3 - 1] [i_2] [i_0 - 1]) + (1063058264))) - (30))))) : (((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) ((_Bool) var_7)))))));
                                arr_16 [i_1] [i_2] [i_1] [(unsigned char)9] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_0))) + (max((arr_6 [(unsigned char)1] [i_1] [i_1]), (((/* implicit */int) arr_14 [2U] [i_1] [i_1]))))))), (((((/* implicit */_Bool) arr_15 [i_0] [i_0 - 2] [i_1])) ? (var_5) : (((/* implicit */long long int) arr_15 [i_0] [i_0 - 1] [i_0 - 1]))))));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) ((_Bool) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1])))))))));
                arr_17 [i_0] [i_1] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_1 - 1]);
            }
        } 
    } 
}
