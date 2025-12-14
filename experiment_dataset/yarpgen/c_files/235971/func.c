/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235971
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
    var_18 = ((/* implicit */unsigned char) var_6);
    var_19 = ((/* implicit */unsigned short) ((_Bool) var_14));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_9 [i_0 - 3] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0 - 2] [i_1] [i_1])))))))) && (((/* implicit */_Bool) ((long long int) max((var_7), (((/* implicit */long long int) arr_1 [i_2]))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) min((((/* implicit */signed char) arr_6 [i_1] [i_3] [i_4])), ((signed char)-42)))) : (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_2 + 1] [i_0] [i_0] [i_4])) ? (var_16) : (((/* implicit */int) var_15))))))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) arr_4 [i_0] [i_3 + 1]))))) ? ((~(((/* implicit */int) arr_4 [i_0] [i_3 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) -2845407399461554660LL)))))));
                                var_22 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-1))))), (((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 4211126917U)), (2845407399461554631LL)))) % (min((11155582981644565852ULL), (((/* implicit */unsigned long long int) 2845407399461554631LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
