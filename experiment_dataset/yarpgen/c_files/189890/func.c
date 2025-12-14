/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189890
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
    var_11 &= ((/* implicit */_Bool) (-(var_10)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) arr_2 [i_1 - 1]);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_13 = ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned char)107))))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_2] [i_2])) - (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1] [i_2])))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) ((unsigned char) var_8));
                                var_16 = ((/* implicit */signed char) var_5);
                                var_17 = ((/* implicit */short) (-(8589926400ULL)));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_1 + 1] [i_0])) ? (arr_5 [i_0] [i_1] [i_1 + 1]) : (((/* implicit */unsigned int) var_10))))) ? (max((((((/* implicit */_Bool) (unsigned short)10381)) ? (arr_0 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), ((~(arr_10 [i_0] [i_1] [i_2] [i_4]))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_4 [i_2])), (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1]))) : (arr_0 [i_1 + 1])))));
                }
            }
        } 
    } 
    var_20 ^= ((int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) (unsigned char)7))))) ? ((((_Bool)0) ? (4034183218U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)140)))));
}
