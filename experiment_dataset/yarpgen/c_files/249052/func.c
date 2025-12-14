/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249052
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((min((arr_3 [i_0] [i_0 - 1] [i_0 - 1]), (arr_3 [i_0] [i_0 - 1] [i_0]))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1] [i_0])))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_15 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned char) arr_6 [i_0] [i_0] [i_0 - 1] [i_2] [i_2] [i_3 + 1]))), (((((arr_4 [i_3] [i_1] [i_0]) ? (17347635012102423115ULL) : (arr_6 [8U] [i_1] [i_1] [i_1] [i_1] [i_1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_3 [i_1] [i_2] [(unsigned short)2])), (arr_0 [i_1])))))))));
                            var_16 = min((((((/* implicit */int) max((((/* implicit */short) arr_2 [i_0 - 1] [i_1] [i_2])), (arr_5 [i_0] [i_0 - 1] [i_0])))) < (min((((/* implicit */int) arr_2 [i_0] [i_1] [i_2])), (arr_8 [i_0] [i_1] [i_2] [i_2]))))), (arr_3 [i_0] [i_0] [i_0]));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) 11205359266340414506ULL))));
                            arr_9 [i_0] [i_0] [i_0] [18ULL] [i_0] = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (((((/* implicit */_Bool) arr_6 [i_3] [i_0 - 1] [i_2] [i_1] [i_1] [i_0 - 1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
            }
        } 
    } 
    var_19 &= ((/* implicit */_Bool) min((((/* implicit */int) var_1)), (((var_0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((var_13) != (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (11205359266340414524ULL) : (((/* implicit */unsigned long long int) var_2)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((7241384807369137091ULL) << (((11205359266340414506ULL) - (11205359266340414445ULL))))))))));
}
