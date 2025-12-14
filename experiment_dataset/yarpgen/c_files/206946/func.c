/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206946
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) min((max((((/* implicit */int) max(((_Bool)1), ((_Bool)0)))), ((~(((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) max(((_Bool)0), ((_Bool)1)))))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_14 *= ((/* implicit */long long int) (+(max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!((_Bool)1))))))));
                    arr_6 [i_0 - 2] [3ULL] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)128))));
                    var_15 = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)28))))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    var_16 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (1707657133U)))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (6793053421557130616ULL))))), (min((max((3502204240249282546ULL), (((/* implicit */unsigned long long int) (unsigned char)127)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 0)), (2587310162U))))))));
                    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)124))));
                }
                var_18 -= ((/* implicit */int) max(((-(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)128)))))), (((/* implicit */unsigned long long int) max((min(((short)-1), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (unsigned char)128)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (-((~((~(0U)))))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (1707657133U)))), (max((max((((/* implicit */long long int) (unsigned short)44994)), (7302152654694946535LL))), (((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)))))))))));
}
