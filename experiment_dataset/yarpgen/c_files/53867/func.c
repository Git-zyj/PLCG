/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53867
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [(unsigned short)3] = ((/* implicit */long long int) (+((+(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-32753))))) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (short)-9005))));
                    arr_9 [i_0] [i_1] [i_2] [i_2 + 1] = ((/* implicit */short) (+(3207044049489825057ULL)));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    arr_14 [i_0] [i_1] = ((/* implicit */short) arr_13 [i_3] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        for (long long int i_5 = 1; i_5 < 8; i_5 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */short) (((+(arr_2 [i_3] [i_4]))) - (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                                arr_19 [i_3] [i_0] [(short)6] [i_4] [(unsigned short)4] &= ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_0] [(short)8]);
                                var_14 = var_0;
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) min((((unsigned int) (unsigned char)4)), (1307896766U)));
}
