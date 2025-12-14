/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206317
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
    var_15 += ((/* implicit */long long int) (-(var_13)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [(short)13] [i_0])) : (arr_2 [i_0]))) / (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_0 [i_0] [(signed char)6]))))))) ? (((/* implicit */int) (short)-31392)) : (((/* implicit */int) ((arr_1 [i_0]) <= (((/* implicit */long long int) max((321255140), (321255140))))))))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) 321255145))));
        arr_4 [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(321255140)))) ? (18338635350087059738ULL) : (((/* implicit */unsigned long long int) 321255140))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 3) 
        {
            for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
            {
                {
                    var_18 += ((/* implicit */unsigned char) arr_6 [i_3 + 1] [i_3 + 1]);
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            {
                                arr_16 [i_5] [i_3 - 1] [i_5] [i_5] [i_2 + 1] [i_1] = ((/* implicit */short) var_0);
                                var_19 = ((/* implicit */short) ((arr_8 [i_4]) & (((/* implicit */unsigned long long int) arr_13 [i_1] [i_2] [i_3] [(short)15]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 ^= ((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) ((((/* implicit */_Bool) min((321255158), (((/* implicit */int) (signed char)-6))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_1])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 12983805495827141953ULL)))))));
    }
    var_21 = ((/* implicit */unsigned int) max((min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_10)) ? (-321255137) : (((/* implicit */int) (signed char)0)))))), (2147483647)));
}
