/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19697
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
    var_11 = ((/* implicit */unsigned long long int) var_2);
    var_12 = ((/* implicit */long long int) (-(var_6)));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)60418))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_14 -= ((/* implicit */short) (+(min((((((/* implicit */int) (unsigned short)1)) ^ (((/* implicit */int) arr_2 [2])))), (arr_11 [i_0] [i_2])))));
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((((/* implicit */_Bool) (signed char)-86)) ? (-6851841401910403779LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 - 1]))))) : (((/* implicit */long long int) var_8))));
                            arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((((/* implicit */_Bool) arr_2 [i_1])) && ((_Bool)0)))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_6))))), (min((var_7), (((/* implicit */unsigned long long int) var_6))))))));
                            var_16 += ((/* implicit */_Bool) min((min((arr_11 [i_0 + 3] [i_0 + 1]), (((/* implicit */int) arr_3 [i_3])))), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_2)) + (55)))))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_15 [i_4] [i_0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_5);
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_0] [i_1 - 2] = ((signed char) max((arr_4 [i_0 - 1]), (arr_4 [i_0 + 2])));
                                var_17 = ((/* implicit */short) var_2);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
