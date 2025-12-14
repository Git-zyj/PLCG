/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212135
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_14 [(unsigned char)1] [i_0] = ((var_2) & (((/* implicit */unsigned long long int) 4294967295U)));
                            var_13 += ((/* implicit */_Bool) (short)-27662);
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                            {
                                arr_17 [11] [11] [i_2] [i_0] [i_4] [(short)14] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) var_10)))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) (_Bool)1)))));
                                var_14 &= ((/* implicit */unsigned long long int) max((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */int) (unsigned char)116))));
                                var_15 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_0])), (18446744073709551598ULL)))) ? (4294967295U) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (3U))))))));
                            }
                        }
                    } 
                } 
                arr_19 [i_0] [7LL] [i_0] = ((/* implicit */unsigned long long int) 1U);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) var_6)) ? (13354107656926958584ULL) : (var_2))))) << (((min(((-(var_12))), (var_12))) - (7662295905228506560ULL)))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) << (((((/* implicit */int) var_9)) - (67)))));
}
