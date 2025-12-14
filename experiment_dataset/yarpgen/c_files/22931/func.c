/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22931
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
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) var_14);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_16 &= ((/* implicit */signed char) (~(134217727ULL)));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (var_4)));
                        var_18 = ((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (max((((/* implicit */int) var_4)), (((((/* implicit */int) arr_0 [i_0 - 2])) / (((/* implicit */int) (signed char)8))))))));
                        var_19 = ((min((((/* implicit */long long int) arr_4 [i_1] [i_2 - 2])), (var_10))) / (((/* implicit */long long int) ((/* implicit */int) var_8))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_20 = max((((/* implicit */unsigned long long int) max((1691151064U), (1691151071U)))), (max((((/* implicit */unsigned long long int) (unsigned short)38998)), ((~(var_0))))));
                        var_21 = ((/* implicit */unsigned char) var_14);
                    }
                    var_22 = ((/* implicit */unsigned short) ((max((max((((/* implicit */unsigned int) arr_14 [i_1])), (1691151042U))), (arr_13 [i_2] [i_1] [i_1] [i_0] [i_0]))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((min((var_12), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_6 [i_0]))))))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_13);
}
