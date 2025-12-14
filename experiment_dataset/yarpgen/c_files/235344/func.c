/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235344
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
    var_18 = ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 |= ((/* implicit */short) ((arr_1 [2U] [i_0 - 1]) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-23)))));
        var_20 = ((/* implicit */signed char) ((short) ((((/* implicit */int) (signed char)-53)) > (((/* implicit */int) (short)1053)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1 - 1] [i_0] [i_0] [i_2] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) var_1)))));
                                arr_14 [i_0] [i_0 - 1] [i_0 - 1] [i_2] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) var_15)))));
                                arr_15 [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((int) arr_0 [i_0 - 1] [i_0 - 1]));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_2] = var_12;
                    var_21 = ((/* implicit */signed char) min(((+(min((((/* implicit */unsigned long long int) (unsigned short)56654)), (10948459919749082388ULL))))), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) arr_6 [i_2])), (var_8))) - ((-(var_3))))))));
                }
            } 
        } 
    }
}
