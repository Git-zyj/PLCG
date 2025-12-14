/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40111
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
    var_13 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)(-127 - 1))), (-5418537510533185224LL)))), (0ULL))), (((/* implicit */unsigned long long int) 937838239U))));
    var_14 = ((/* implicit */unsigned long long int) var_10);
    var_15 = ((/* implicit */unsigned int) var_9);
    var_16 -= ((/* implicit */short) -9223372036854775791LL);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_11))));
                    var_18 = ((/* implicit */long long int) (signed char)-121);
                    var_19 = ((/* implicit */long long int) var_5);
                    arr_7 [3U] [i_1] [i_0] [i_2] = ((/* implicit */int) arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned char) min((18446744073709551613ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12)))))));
                                arr_14 [i_0] [i_1] [i_2] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) max((var_0), (-9223372036854775805LL)))))))) : ((+(17497781222996511544ULL)))));
                                var_21 = ((/* implicit */long long int) (unsigned char)12);
                                var_22 -= ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned char)15)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4] [i_3] [i_0])))))))));
                                arr_15 [(signed char)9] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
