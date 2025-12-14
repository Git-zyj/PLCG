/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247129
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) max((-18), (arr_2 [i_2])))) >= (((((/* implicit */long long int) ((/* implicit */int) var_5))) - (arr_3 [i_0] [i_1])))))) - (min((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_9))))), (14))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_12 [(signed char)9] [i_3] [(signed char)9] [(signed char)9] [i_4] [i_1] [i_1] = ((/* implicit */_Bool) arr_11 [(signed char)18] [i_3] [i_1]);
                                var_11 *= ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_4 + 2] [i_4 + 4] [i_4 + 4] [i_4 + 4] [i_3])) || (((/* implicit */_Bool) 4294967285U)))) || (((((/* implicit */int) arr_9 [i_4 + 2] [i_4 + 3] [i_4 - 1] [i_4 + 2] [i_0])) > (((/* implicit */int) arr_9 [i_4 + 2] [i_4 + 1] [i_4 + 3] [i_4 + 3] [i_3]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_12 *= ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) ((10U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_2] [(unsigned short)20] [i_2] [i_6 + 3] [i_6 + 3])))))), (arr_15 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_0] [i_1])))) * (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_10 [i_5 + 1] [i_5] [i_5 + 1] [i_5] [i_5 + 1])) : (((((/* implicit */int) (unsigned char)20)) * (((/* implicit */int) var_5))))))));
                                var_13 = ((/* implicit */signed char) (+(-18)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((2199023255551LL) ^ (((/* implicit */long long int) 4294967285U)))) & (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
}
