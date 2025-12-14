/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208102
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
    var_16 = ((/* implicit */long long int) var_1);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))))), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_5) + (var_12)))) && (((/* implicit */_Bool) var_11))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_18 -= var_1;
                                var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1 - 1] [i_1] [i_1 + 2] [14U])))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((((/* implicit */long long int) max((var_0), (var_0)))) - (arr_3 [i_1 + 2] [i_1 - 1] [16U]))), (((/* implicit */long long int) min((arr_13 [i_0] [i_0] [i_0] [(signed char)20]), (((short) var_9))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) arr_0 [i_1 + 1] [i_0]);
                                var_22 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_3 [i_0] [i_5] [i_0])))))))));
                                var_23 = ((((/* implicit */_Bool) min((arr_2 [i_1 - 1] [i_1 + 1]), (arr_2 [i_1 - 1] [i_1 - 1])))) || (((/* implicit */_Bool) (-(var_0)))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) min(((((-(var_0))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [10ULL] [i_0]))))), (arr_19 [i_5] [i_5] [i_5])));
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 21; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_8] [i_8 + 1] [i_8 + 2])) ? (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) arr_13 [i_8] [i_8 - 1] [i_8] [i_0])))))))) : ((-(max((((/* implicit */unsigned long long int) var_5)), (var_1)))))));
                                var_26 = ((/* implicit */short) (-(((arr_18 [i_0] [i_1 + 1] [i_8 + 1] [i_9]) - (((/* implicit */unsigned long long int) var_12))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
