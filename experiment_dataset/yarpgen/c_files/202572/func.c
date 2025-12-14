/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202572
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
    var_12 *= ((/* implicit */_Bool) min((max((((/* implicit */long long int) var_6)), (var_8))), (((/* implicit */long long int) var_2))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    var_13 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)191)) ? (2966391758U) : (1328575538U)))) ? (((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_1] [i_0])) ? (arr_6 [i_0] [i_1] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */unsigned long long int) ((593113923U) + (var_2))))));
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (-(593113923U)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2966391771U)) ? (((/* implicit */int) max((((/* implicit */short) arr_9 [i_4] [i_3] [i_2 - 2] [i_1])), (var_6)))) : (((/* implicit */int) (unsigned char)119)))))));
                                arr_14 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)173))) + (3226782475U)))) <= (((((/* implicit */_Bool) arr_3 [i_4 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (18446744073709551615ULL))));
                                var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_11)) | (((/* implicit */int) arr_13 [i_2 + 2] [i_1]))))));
                                var_16 = ((/* implicit */unsigned int) arr_9 [i_4 - 1] [i_3 + 2] [i_2] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) 1704981992U);
}
