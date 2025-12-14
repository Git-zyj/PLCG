/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243772
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned int) var_7);
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) ((int) (((_Bool)1) ? (-1982111778) : (((/* implicit */int) arr_9 [(signed char)10] [i_1] [i_2] [i_3] [i_4])))));
                                arr_13 [(unsigned char)10] [i_1] [i_1] [i_1] [10U] = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))));
                                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1982111778))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */unsigned char) ((max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_9 [i_0] [6U] [i_0] [i_0] [i_0])), (arr_10 [i_0] [(short)5] [(short)5] [i_0] [i_0])))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [10ULL] [10ULL] [i_1]))) : (var_4))))) <= (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_17))))), (arr_7 [(unsigned char)4] [i_1] [i_1])))))));
                    var_21 = ((/* implicit */unsigned long long int) (+(arr_5 [i_0] [i_0] [i_0] [i_0])));
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */short) var_15);
    var_23 = ((/* implicit */unsigned char) (+((~(((unsigned int) 142863570))))));
}
