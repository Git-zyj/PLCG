/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210909
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_0 - 2]))));
                            var_13 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_2]);
                            var_14 ^= ((/* implicit */unsigned int) (-((+(((10591887679440638547ULL) / (((/* implicit */unsigned long long int) arr_5 [i_0]))))))));
                            var_15 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)68))) != (510047751U)))), (((((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_3] [i_0 - 1] [i_0])) * (((/* implicit */int) var_8))))));
                            var_16 = ((/* implicit */unsigned int) arr_1 [i_0]);
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) var_11);
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */int) var_8);
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0 - 1] [i_5 - 1] [i_6])) << (((/* implicit */int) arr_13 [i_0] [i_0 - 2] [i_0 - 1] [i_5 - 1] [i_6])))))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_7))));
                            }
                            /* vectorizable */
                            for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                            {
                                var_21 ^= ((/* implicit */unsigned short) var_5);
                                var_22 = ((/* implicit */_Bool) arr_0 [i_0 + 1] [i_1]);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 *= max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) var_2))))) : (((((/* implicit */_Bool) (short)68)) ? (((/* implicit */unsigned long long int) var_5)) : (var_0))))));
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_8))))) && ((!(((/* implicit */_Bool) var_2))))));
    var_25 ^= ((/* implicit */_Bool) var_8);
}
