/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44478
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
    var_17 = ((/* implicit */long long int) var_14);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        var_18 = arr_1 [i_0] [i_0];
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 7; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [i_2 + 3] = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) max((((/* implicit */long long int) 1155145274U)), (arr_5 [i_0] [i_1] [i_2])))))), (((((/* implicit */long long int) ((/* implicit */int) ((613514380891164600LL) != (613514380891164619LL))))) < (613514380891164603LL)))));
                    arr_10 [i_2] [i_2] [i_2] = ((max((min((arr_1 [i_2 - 2] [i_0]), (arr_0 [i_0] [i_1]))), (((/* implicit */long long int) 1030603478U)))) | (((/* implicit */long long int) arr_3 [i_0])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_4] [i_2] [i_2] [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_2 + 2] [i_3])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 656099593))))));
                                var_20 = arr_8 [i_2] [i_1] [i_2];
                                var_21 = ((/* implicit */unsigned long long int) var_1);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0]))))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 2] [i_2] [i_1])) ? (max((342143618162253190LL), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (arr_14 [i_2 + 1] [i_2] [i_2 - 2] [i_0] [i_0] [i_0])))))))));
                }
            } 
        } 
        var_23 ^= ((/* implicit */long long int) 18446744073709551615ULL);
    }
}
