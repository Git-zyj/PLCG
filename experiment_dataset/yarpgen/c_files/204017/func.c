/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204017
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
    var_19 -= ((/* implicit */long long int) ((((_Bool) var_0)) ? (var_12) : ((-(((((/* implicit */int) var_8)) * (((/* implicit */int) (unsigned char)59))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_10 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4]), (arr_10 [i_0] [i_1] [i_2] [i_2] [i_1] [i_2])))) ? (((/* implicit */long long int) 2858121469U)) : (((long long int) ((4708152823410551168ULL) * (((/* implicit */unsigned long long int) -2506048375374708973LL)))))));
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 - 1]))) : (1206844345413394924ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3 - 1] [i_1 + 2] [i_3 - 1] [i_0 - 3])) ? (((/* implicit */int) arr_6 [i_3 + 4] [i_1 - 1] [i_2] [i_0 - 1])) : (((/* implicit */int) arr_6 [i_3 + 3] [i_1 + 1] [i_1 + 1] [i_0 + 1]))))))))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [(short)18] [(short)18]))))), (arr_11 [i_0 + 1] [i_1 + 2] [i_1] [i_1] [i_1])));
                    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [0])) % (((/* implicit */int) (signed char)-83))))))));
                    arr_13 [i_0] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_9)), (max((arr_1 [i_0 + 1]), (((/* implicit */unsigned long long int) var_6))))));
                }
            } 
        } 
    } 
}
