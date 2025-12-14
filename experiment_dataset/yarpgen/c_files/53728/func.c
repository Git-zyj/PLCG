/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53728
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
    var_17 = ((/* implicit */int) (unsigned short)1844);
    var_18 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_2)) < (((/* implicit */int) (unsigned short)1844))))), (var_4))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (short i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                            {
                                arr_15 [i_3] [i_1 - 2] [i_0] [i_3 - 1] [i_4] [i_3] [i_2] = ((/* implicit */short) -234799453);
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_3 - 3] [i_4] [i_0] [i_3 - 3])) ? (arr_12 [i_0] [i_2] [i_2] [i_3 - 3] [i_4] [i_4] [i_4]) : (var_1)))) ? (arr_12 [i_4] [i_4] [i_2] [i_3 - 3] [i_4] [i_3 + 1] [i_0]) : (min((((/* implicit */unsigned int) var_4)), (arr_12 [i_0] [i_2] [i_2] [i_3 - 3] [i_0] [i_0] [i_2]))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) 234799462);
                            }
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_2))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */short) (+(((unsigned long long int) ((((/* implicit */int) var_15)) & (-1300084051))))));
}
