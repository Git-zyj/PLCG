/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20875
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
    var_18 = ((((/* implicit */_Bool) var_15)) ? (((((unsigned long long int) 9223372036854775807LL)) + (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */int) (short)-25909))))));
    var_19 = ((/* implicit */signed char) var_16);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) max((max((((140307376) ^ (((/* implicit */int) var_6)))), (((/* implicit */int) var_5)))), (((((/* implicit */int) arr_9 [i_4] [(_Bool)1] [i_2 + 1] [i_1] [i_0 + 1])) / (((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_1] [i_0])) ? (arr_6 [i_4] [i_1]) : (var_0)))))));
                                var_21 = ((/* implicit */int) arr_0 [i_1]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) 6442398280156030735LL))))), ((+(((/* implicit */int) var_9))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */int) min(((!(((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_0 [i_2])))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) arr_7 [i_0])))))))));
                        var_24 = ((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) ((-140307398) - (((/* implicit */int) var_14)))))), ((+(((/* implicit */int) (_Bool)1))))));
                    }
                    var_25 = ((/* implicit */_Bool) min((((/* implicit */int) var_15)), (1451294007)));
                    var_26 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_15))))));
                }
            } 
        } 
    } 
}
