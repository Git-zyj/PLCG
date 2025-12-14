/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28553
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
    var_10 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1] [i_0]))) : (12176466503032197195ULL)));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)60912)) ? (12176466503032197195ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)60))))))))))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) arr_12 [i_1 + 2])) ? (((/* implicit */unsigned long long int) arr_13 [(unsigned char)10] [i_0] [i_1 + 2] [i_3] [i_0] [(signed char)9])) : ((-(12176466503032197195ULL)))))));
                                var_13 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)129))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
