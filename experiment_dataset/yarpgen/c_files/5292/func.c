/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5292
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
    var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~((+(493122251))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_11 |= ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */long long int) arr_8 [i_3] [i_2] [i_1] [i_0 - 1])), (6618665451310837011LL))));
                            var_12 ^= ((/* implicit */signed char) ((var_4) ? (((max((-6618665451310837012LL), (((/* implicit */long long int) var_6)))) ^ (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_2 [i_2])), (var_3)))))) : (((/* implicit */long long int) (+(((((/* implicit */int) var_7)) ^ (((/* implicit */int) (signed char)77)))))))));
                            var_13 = ((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_0 + 1]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_4 = 2; i_4 < 18; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_4] [i_0] [i_6] = ((/* implicit */long long int) (+(arr_13 [i_0] [i_1] [i_4] [i_5] [i_6])));
                                var_14 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_9)) ? (0ULL) : (((/* implicit */unsigned long long int) -6618665451310837012LL))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_8 [i_0] [i_4 - 1] [i_0 + 1] [i_0])) ? (var_5) : (((/* implicit */int) arr_8 [i_0 + 1] [i_4 - 1] [i_0 + 1] [i_4 + 1]))))));
                    arr_18 [i_0] [i_4] = ((/* implicit */unsigned short) min((-1239792902487888753LL), (((/* implicit */long long int) var_7))));
                    var_16 = ((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)7495)) || (((/* implicit */_Bool) -1)))))) | (1239792902487888753LL)))));
                }
                for (unsigned int i_7 = 1; i_7 < 18; i_7 += 1) 
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) 1239792902487888752LL)) / (((((/* implicit */_Bool) 2596138903U)) ? (12123894576059160025ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7] [i_1] [i_0] [i_0 - 1]))))))), (((/* implicit */unsigned long long int) arr_20 [(unsigned short)18] [(unsigned short)18])))))));
                    var_18 = ((/* implicit */long long int) var_5);
                    arr_21 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1]);
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) 
                        {
                            {
                                var_19 ^= ((/* implicit */signed char) arr_24 [i_8]);
                                var_20 = ((/* implicit */unsigned short) arr_7 [i_0 + 1] [i_1] [i_9] [i_0]);
                                var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_4 [i_0 + 1] [i_0 - 1]) > (var_3))))));
                                var_22 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)25643)));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_8))));
                }
                var_24 = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) (unsigned short)3840)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) | (((/* implicit */long long int) ((/* implicit */int) ((var_5) < (((/* implicit */int) arr_2 [i_0])))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) (((+(var_8))) - (((/* implicit */unsigned long long int) 2596138903U))));
}
