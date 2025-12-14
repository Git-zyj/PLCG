/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48624
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((var_10) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)176))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [10U])))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_14 [(_Bool)1] [i_1] [2ULL] [(unsigned short)14] [(signed char)14] [i_4] = ((/* implicit */unsigned short) ((374439950U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [0U] [i_2] [i_3] [18ULL])))));
                                arr_15 [(short)3] [(unsigned char)9] [i_2] [i_3] [i_4] [i_3] [i_0] = ((/* implicit */unsigned short) 374439950U);
                                arr_16 [(_Bool)1] [14LL] [(unsigned short)6] [i_3] [i_2] [(unsigned short)10] = ((/* implicit */long long int) (unsigned char)85);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 4294967274U))))), (max((((/* implicit */signed char) (_Bool)1)), ((signed char)39)))));
}
