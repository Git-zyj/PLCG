/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214835
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
    var_19 -= ((/* implicit */unsigned short) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) | (((((/* implicit */int) (unsigned short)59454)) << (((((/* implicit */int) (unsigned char)73)) - (72))))))))));
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (signed char i_6 = 1; i_6 < 10; i_6 += 2) 
                        {
                            {
                                arr_21 [i_0] [i_0] [(unsigned short)4] [i_0] [i_2] = ((((/* implicit */_Bool) arr_15 [i_2] [i_1] [i_1] [(unsigned short)9] [i_1] [i_1] [2ULL])) ? (((max((arr_12 [i_2] [(unsigned short)0] [i_2] [i_5] [i_6 - 1] [(unsigned short)10]), (((/* implicit */unsigned long long int) arr_1 [i_0])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(short)6]))))) : (min((((792983018150220551ULL) - (14959886331594280973ULL))), ((((_Bool)1) ? (792983018150220551ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                                var_22 = ((/* implicit */unsigned long long int) (-(((((((/* implicit */unsigned int) ((/* implicit */int) var_16))) / (arr_1 [i_0]))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6 + 2] [i_6 + 2] [i_6 + 2])))))));
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) arr_4 [i_0] [i_1]);
                                var_23 &= ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) (~((~((~(((/* implicit */int) var_13))))))));
    var_25 = ((((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)37))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) max((15600135873979891068ULL), (((/* implicit */unsigned long long int) 16383))))) ? (min((var_3), (((/* implicit */unsigned long long int) var_1)))) : (((unsigned long long int) var_4)))));
}
